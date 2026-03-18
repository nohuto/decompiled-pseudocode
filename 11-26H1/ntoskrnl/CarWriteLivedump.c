/*
 * XREFs of CarWriteLivedump @ 0x14064CD54
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x14064A330 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     CarLiveDump @ 0x14064CB60 (CarLiveDump.c)
 */

__int64 __fastcall CarWriteLivedump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // r10

  CurrentIrql = KeGetCurrentIrql();
  if ( stru_140F066E8.KernelStack
    && (__int64)(MEMORY[0xFFFFF78000000014] - (unsigned __int64)stru_140F066E8.KernelStack) < 36000000000LL
    || _InterlockedCompareExchange((volatile signed __int32 *)&stru_140F066E8.CurrentRunTime, 1, 0) )
  {
    return 3221228560LL;
  }
  *(_QWORD *)(a1 + 1320) = a2;
  *(_QWORD *)(a1 + 1344) = a5;
  *(_QWORD *)(a1 + 1328) = a3;
  *(_QWORD *)(a1 + 1336) = a4;
  if ( !CurrentIrql )
    return CarLiveDump((_QWORD *)a1);
  stru_140F066E8.TrapFrame = (_KTRAP_FRAME *)a1;
  stru_140F066E8.FirstArgument = CarLiveDump;
  *(_QWORD *)&stru_140F066E8.SystemCallNumber = 0LL;
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140F066E8.116 + 4) = 0LL;
  *(_BYTE *)(a1 + 1352) = 1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&stru_140F066E8.116 + 4), SuperCriticalWorkQueue);
  return 259LL;
}
