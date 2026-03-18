/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1403DD004
 * Callers:
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140AC4764 (IoWMISystemControl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1403DD5E0 (WmipDoFindRegEntryByProviderId.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx

  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
  KeReleaseMutantEx((struct _KTHREAD *)&EtwpSecurityLock.IoSelfBoostsEntry);
  return v4;
}
