/*
 * XREFs of WmipFindRegEntryByDevice @ 0x14048FD3C
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140ACF980 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140ACFADC (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACFDE8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByDevice @ 0x14048FE08 (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  __int64 v6; // rbx
  LONG v8; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1, v3, v2);
  v6 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex, 1LL, 4LL, &v8);
  return v6;
}
