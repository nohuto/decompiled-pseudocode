/*
 * XREFs of PopNetEvaluateStateMask @ 0x140B475EC
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1404E39E0 (PopNetEvaluationWorkerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopNetEvaluateStateMask(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)&PopPdcDeviceListLock.SchedulerApcFill5[48];
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[48] & 4) != 0 )
  {
    *a1 = 2;
    *a2 = 2;
    return result;
  }
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[48] & 8) != 0 )
  {
    *a1 = 2;
    *a2 = 3;
    return result;
  }
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[48] & 0x40) != 0 )
  {
    *a1 = 2;
    *a2 = 6;
    return result;
  }
  if ( !PopPdcDeviceListLock.SchedulerApcFill3[40] )
    goto LABEL_12;
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[48] & 2) != 0 )
  {
    *a1 = 2;
    *a2 = 1;
    return result;
  }
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[48] & 0x80u) != 0 )
  {
    *a1 = 2;
    *a2 = 7;
  }
  else
  {
LABEL_12:
    *a1 = 0;
    *a2 = 0;
  }
  return result;
}
