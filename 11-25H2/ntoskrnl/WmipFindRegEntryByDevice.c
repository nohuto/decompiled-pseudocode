/*
 * XREFs of WmipFindRegEntryByDevice @ 0x140464348
 * Callers:
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x1409B86B0 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A3CEA0 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140A65774 (WmipDeregisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByDevice @ 0x140464418 (WmipDoFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipFindRegEntryByDevice(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 RegEntryByDevice; // rax
  KIRQL v5; // r8
  __int64 v6; // rbx
  int v8; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(a1, v3, v2);
  v6 = RegEntryByDevice;
  if ( RegEntryByDevice )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByDevice + 48));
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v5);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v8);
  return v6;
}
