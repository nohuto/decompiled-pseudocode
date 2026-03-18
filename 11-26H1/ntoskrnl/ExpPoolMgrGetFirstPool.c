/*
 * XREFs of ExpPoolMgrGetFirstPool @ 0x1404E62D4
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC3610 (ExpPoolMgrRebalanceWorker.c)
 *     ExpPoolMgrPhase1Init @ 0x140CE7998 (ExpPoolMgrPhase1Init.c)
 * Callees:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC379C (ExpPoolMgrGetNextPoolCommon.c)
 */

__int64 __fastcall ExpPoolMgrGetFirstPool(__int64 a1)
{
  __int64 result; // rax

  result = ExpPoolMgrGetNextPoolCommon(a1, 0LL, 0LL);
  if ( !result )
    return ExpPoolMgrGetNextPoolCommon(a1, 1LL, 0LL);
  return result;
}
