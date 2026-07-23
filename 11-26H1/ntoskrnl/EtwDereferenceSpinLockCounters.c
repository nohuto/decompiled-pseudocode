/*
 * XREFs of EtwDereferenceSpinLockCounters @ 0x140832AC0
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140A74D70 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwDereferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&stru_140F03830.QueuedScb, Executive, 0, 0, 0LL);
  if ( !--HIDWORD(ExpPlatformBinaryLock.SListFaultAddress) )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4816) &= ~0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0LL, 8LL);
  }
  return KeReleaseMutex((PRKMUTEX)&stru_140F03830.QueuedScb, 0);
}
