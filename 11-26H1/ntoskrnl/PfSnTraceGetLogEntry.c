/*
 * XREFs of PfSnTraceGetLogEntry @ 0x140265840
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x1402650C0 (PfSnLogPageFaultCommon.c)
 *     PfSnTraceTimerRoutine @ 0x1404B38C0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogScenarioMeasures @ 0x1404D1D2C (PfSnLogScenarioMeasures.c)
 *     PfSnLogIdentifier @ 0x1409CFD94 (PfSnLogIdentifier.c)
 *     PfSnNameRemoveAll @ 0x1409D2C20 (PfSnNameRemoveAll.c)
 *     PfSnLogHelper @ 0x1409D2D44 (PfSnLogHelper.c)
 *     PfSnLogStreamCreate @ 0x1409D2DB8 (PfSnLogStreamCreate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PfSnTraceBufferAllocate @ 0x1404CB9C0 (PfSnTraceBufferAllocate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax
  _QWORD *v10; // r12
  unsigned __int64 v11; // r15
  _QWORD *v12; // rcx

  v6 = -a2;
  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return 3221225865LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 96);
      v8 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), a2);
      if ( v8 <= 0 )
      {
        result = 3221225621LL;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
        return result;
      }
      if ( v8 <= *(_DWORD *)(v7 + 20) )
      {
        *a3 = v7 + 16LL * (int)(v8 - a2) + 24;
        return 0LL;
      }
      _InterlockedAdd((volatile signed __int32 *)(v7 + 16), v6);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
        break;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v7 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v11);
      }
      else
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
    }
    result = 3221225626LL;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 344), v6);
  }
  return result;
}
