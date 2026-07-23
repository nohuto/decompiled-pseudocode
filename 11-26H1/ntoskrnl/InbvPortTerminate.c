/*
 * XREFs of InbvPortTerminate @ 0x1407236D0
 * Callers:
 *     HdlspEnableTerminal @ 0x140C529D4 (HdlspEnableTerminal.c)
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
  if ( !WheapPfaLock.Spare35[v1 + 2] )
    return 0;
  result = 1;
  *(_OWORD *)&WheapPfaLock.Spare35[v1 + 2] = 0LL;
  *(_OWORD *)(&WheapPfaLock.IptSaveArea + v1) = 0LL;
  *((_QWORD *)&WheapPfaLock.SchedulerSharedSwappablePage + v1) = 0LL;
  return result;
}
