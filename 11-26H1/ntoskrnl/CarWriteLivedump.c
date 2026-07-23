/*
 * XREFs of CarWriteLivedump @ 0x140650934
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x14064DF10 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     CarLiveDump @ 0x140650740 (CarLiveDump.c)
 */

__int64 __fastcall CarWriteLivedump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // r10

  CurrentIrql = KeGetCurrentIrql();
  if ( stru_140F06A28.StateSaveArea
    && (__int64)(MEMORY[0xFFFFF78000000014] - (unsigned __int64)stru_140F06A28.StateSaveArea) < 36000000000LL
    || _InterlockedCompareExchange((volatile signed __int32 *)&stru_140F06A28.KernelStack, 1, 0) )
  {
    return 3221228560LL;
  }
  *(_QWORD *)(a1 + 1320) = a2;
  *(_QWORD *)(a1 + 1344) = a5;
  *(_QWORD *)(a1 + 1328) = a3;
  *(_QWORD *)(a1 + 1336) = a4;
  if ( !CurrentIrql )
    return CarLiveDump((_QWORD *)a1);
  stru_140F06A28.TrapFrame = (_KTRAP_FRAME *)a1;
  stru_140F06A28.FirstArgument = CarLiveDump;
  *(_QWORD *)&stru_140F06A28.SystemCallNumber = 0LL;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140F06A28.116 + 4) = 0LL;
  *(_BYTE *)(a1 + 1352) = 1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)&stru_140F06A28.116 + 4), SuperCriticalWorkQueue);
  return 259LL;
}
