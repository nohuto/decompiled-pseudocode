/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x14082C880
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140A67DA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A67EF0 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpSecurityLock.Header.WaitListHead.Blink, Executive, 0, 0, 0LL);
  if ( !--HIDWORD(ExpPlatformBinaryLock.SListFaultAddress) )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4816) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0LL, 8LL);
  }
  return KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.Header.WaitListHead.Blink, 0);
}
