/*
 * XREFs of WmipAllocRegEntry @ 0x1404AB318
 * Callers:
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140C2B90C (WmipInitializeDataStructs.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WmipAllocProviderId @ 0x140A9B408 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = ExAllocateFromNPagedLookasideList(&WmipRegLookaside);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v8 = off_140E08FF8;
    ++WmipInUseRegEntryCount;
    if ( *off_140E08FF8 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140E08FF8 = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v7);
    KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v9);
  }
  return v5;
}
