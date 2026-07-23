/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1403C4144
 * Callers:
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 *     MiEmptyTargetedWorkingSet @ 0x1403C7C08 (MiEmptyTargetedWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403C4304 (MiReturnCcAccessLog.c)
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
      if ( a2 - *(_QWORD *)(v5 + 16) > (unsigned __int64)PfKernelGlobals || (a3 & 1) != 0 )
        return MiQueuePageAccessLog(a1, v5, a3);
      else
        return MiReturnCcAccessLog(a1, v5, 0LL);
    }
  }
  return result;
}
