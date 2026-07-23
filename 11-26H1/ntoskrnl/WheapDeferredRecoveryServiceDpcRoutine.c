/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x1406DAE80
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapDeferredRecoveryServiceDpcRoutine(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  signed __int32 v7; // eax
  bool v8; // cc
  __int64 result; // rax

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
    guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(v2 + 32));
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
  result = (unsigned int)(v7 - 1);
  if ( !v8 )
    return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
  return result;
}
