/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x140651CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall WheapDeferredRecoveryServiceDpcRoutine(PRKDPC Dpc)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  signed __int32 v7; // eax
  bool v8; // cc
  BOOLEAN result; // al

  v2 = WheaDrsList;
  v3 = WheaDrsList;
  if ( v3 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v2 = WheaDrsList;
      v4 = WheaDrsList;
    }
    while ( v4 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    guard_dispatch_icall_no_overrides(v2);
  }
  else if ( !v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    *(_QWORD *)v2 = WheaPassiveDrsList;
    WheaPassiveDrsList = v2;
    KeReleaseSpinLock(&WheaPassiveDrsListLock, v6);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem(&WheaDrsWorkItem, CriticalWorkQueue);
  }
  v7 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v8 = v7 <= 1;
  result = v7 - 1;
  if ( !v8 )
    return KeInsertQueueDpc(Dpc, 0LL, 0LL);
  return result;
}
