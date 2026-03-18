/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1403BA2D4
 * Callers:
 *     MiEmptyTargetedWorkingSet @ 0x1403B9CE8 (MiEmptyTargetedWorkingSet.c)
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403B9D78 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403BA494 (MiReturnCcAccessLog.c)
 */

__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = *(_QWORD *)(a1 + 18112);
  if ( result )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)(a1 + 18112), 0LL);
    if ( v5 )
    {
      if ( a2 - *(_QWORD *)(v5 + 16) > stru_140F12D20.Padding[1] || (a3 & 1) != 0 )
        return MiQueuePageAccessLog(a1, v5, a3);
      else
        return MiReturnCcAccessLog(a1, v5, 0LL);
    }
  }
  return result;
}
