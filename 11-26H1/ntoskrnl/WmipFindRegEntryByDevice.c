/*
 * XREFs of WmipFindRegEntryByDevice @ 0x1404961EC
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140AC49C0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140ACD89C (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACDBA8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByDevice @ 0x1404962B8 (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  __int64 v6; // rbx
  LONG v8; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1, v3, v2);
  v6 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  KeReleaseMutantEx((struct _KTHREAD *)&EtwpSecurityLock.IoSelfBoostsEntry, 1LL, 4LL, &v8);
  return v6;
}
