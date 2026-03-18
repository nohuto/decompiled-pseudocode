/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x140651DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    v1 = WheaPassiveDrsList;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KeReleaseSpinLock(&WheaPassiveDrsListLock, v0);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    guard_dispatch_icall_no_overrides(v1);
    v2 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v3 = v2 <= 1;
    result = (unsigned int)(v2 - 1);
  }
  while ( !v3 );
  return result;
}
