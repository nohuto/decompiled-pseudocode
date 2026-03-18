/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1402F197C
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140A3CC04 (IoWMISystemControl.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1402F1A20 (WmipDoFindRegEntryByProviderId.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = v2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(v2);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v7);
  return v4;
}
