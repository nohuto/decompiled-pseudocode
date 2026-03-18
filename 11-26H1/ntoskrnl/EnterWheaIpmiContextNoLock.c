/*
 * XREFs of EnterWheaIpmiContextNoLock @ 0x1406D4318
 * Callers:
 *     IopWheaSelLogCheckPointEx @ 0x1405CA070 (IopWheaSelLogCheckPointEx.c)
 *     IopWheaSelLogError @ 0x1405CA160 (IopWheaSelLogError.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     WheaSelLogCheckPointNoLock @ 0x1406D43F0 (WheaSelLogCheckPointNoLock.c)
 * Callees:
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     CheckWheaIpmiContext @ 0x1406D4250 (CheckWheaIpmiContext.c)
 */

__int64 EnterWheaIpmiContextNoLock()
{
  __int64 result; // rax

  result = CheckWheaIpmiContext();
  if ( !*(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[16] )
  {
    if ( LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) )
    {
      DbgPrintEx(
        5u,
        1u,
        "EnterWheaIpmiContextNoLock: WheaIpmiHwLogLocked: 0x%0x; WheaIsLogSelHandlerInitialized(): 0x%0xd!\n",
        *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[16],
        1);
      return 2147483665LL;
    }
  }
  return result;
}
