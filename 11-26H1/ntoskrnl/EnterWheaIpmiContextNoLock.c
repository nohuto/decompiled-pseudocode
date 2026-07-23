/*
 * XREFs of EnterWheaIpmiContextNoLock @ 0x1406D8398
 * Callers:
 *     IopWheaSelLogCheckPointEx @ 0x1405CC940 (IopWheaSelLogCheckPointEx.c)
 *     IopWheaSelLogError @ 0x1405CCA30 (IopWheaSelLogError.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     WheaSelLogCheckPointNoLock @ 0x1406D8470 (WheaSelLogCheckPointNoLock.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CheckWheaIpmiContext @ 0x1406D82D0 (CheckWheaIpmiContext.c)
 */

__int64 EnterWheaIpmiContextNoLock()
{
  __int64 result; // rax

  result = CheckWheaIpmiContext();
  if ( !*(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[16] )
  {
    if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
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
