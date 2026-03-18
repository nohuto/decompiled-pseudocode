/*
 * XREFs of WmipAllocRegEntry @ 0x1404E79BC
 * Callers:
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140CE03F8 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WmipAllocProviderId @ 0x140B416F8 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  LONG v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E28440.SystemCallNumber);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
    v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v8 = off_140E08F30;
    ++WmipInUseRegEntryCount;
    if ( *off_140E08F30 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140E08F30 = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v7);
    KeReleaseMutantEx((struct _KTHREAD *)&EtwpSecurityLock.IoSelfBoostsEntry, 1LL, 4LL, &v9);
  }
  return v5;
}
