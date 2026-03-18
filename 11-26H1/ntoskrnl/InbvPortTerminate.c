/*
 * XREFs of InbvPortTerminate @ 0x14071EA40
 * Callers:
 *     HdlspEnableTerminal @ 0x140C4C9D4 (HdlspEnableTerminal.c)
 * Callees:
 *     <none>
 */

char __fastcall InbvPortTerminate(unsigned int a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( a1 >= 4 )
    return 0;
  v1 = 5LL * a1;
  if ( !*((_QWORD *)&WheapPfaLock.GlobalUpdateVpThreadPriorityListEntry.Flink + v1) )
    return 0;
  result = 1;
  *($7593FFE5FD7F8AD12EB10858261A32F1 *)((char *)&WheapPfaLock.1008 + 8 * v1) = 0LL;
  *(_OWORD *)(&WheapPfaLock.SchedulerAssistPriorityFloor + 2 * v1) = 0LL;
  *((_QWORD *)&WheapPfaLock.KernelShadowStackInitial + v1) = 0LL;
  return result;
}
