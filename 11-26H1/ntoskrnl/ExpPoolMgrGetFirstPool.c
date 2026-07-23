/*
 * XREFs of ExpPoolMgrGetFirstPool @ 0x1404DF874
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC5280 (ExpPoolMgrRebalanceWorker.c)
 *     ExpPoolMgrPhase1Init @ 0x140CEDD38 (ExpPoolMgrPhase1Init.c)
 * Callees:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC540C (ExpPoolMgrGetNextPoolCommon.c)
 */

__int64 __fastcall ExpPoolMgrGetFirstPool(__int64 a1)
{
  __int64 result; // rax

  result = ExpPoolMgrGetNextPoolCommon(a1, 0LL, 0LL);
  if ( !result )
    return ExpPoolMgrGetNextPoolCommon(a1, 1LL, 0LL);
  return result;
}
