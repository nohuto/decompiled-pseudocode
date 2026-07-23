/*
 * XREFs of WmipAllocRegEntry @ 0x1404E0D7C
 * Callers:
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipInitializeDataStructs @ 0x140CE6798 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipAllocProviderId @ 0x140B43708 (WmipAllocProviderId.c)
 */

_QWORD *__fastcall WmipAllocRegEntry(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  LONG v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E285C0.SystemCallNumber);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v5[2] = a1;
    *((_DWORD *)v5 + 12) = a2 & 0xFF000000 | 1;
    *((_DWORD *)v5 + 14) = WmipAllocProviderId();
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
    v8 = off_140E08F28;
    ++WmipInUseRegEntryCount;
    if ( *off_140E08F28 != (_UNKNOWN *)&WmipInUseRegEntryHead )
      __fastfail(3u);
    *v5 = &WmipInUseRegEntryHead;
    v5[1] = v8;
    *v8 = v5;
    off_140E08F28 = (_UNKNOWN **)v5;
    KeReleaseSpinLock(&WmipRegistrationSpinLock, v7);
    KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex, 1LL, 4LL, &v9);
  }
  return v5;
}
