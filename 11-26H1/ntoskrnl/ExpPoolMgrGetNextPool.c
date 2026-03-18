/*
 * XREFs of ExpPoolMgrGetNextPool @ 0x1404E76F8
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC3610 (ExpPoolMgrRebalanceWorker.c)
 *     ExpPoolMgrPhase1Init @ 0x140CE7998 (ExpPoolMgrPhase1Init.c)
 * Callees:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC379C (ExpPoolMgrGetNextPoolCommon.c)
 */

__int64 __fastcall ExpPoolMgrGetNextPool(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h]

  v4 = *(_OWORD *)(a2 + 8);
  result = ExpPoolMgrGetNextPoolCommon(a1, (unsigned __int8)BYTE1(*(_QWORD *)(a2 + 8)), a2);
  if ( !result && !BYTE1(v4) )
    return ExpPoolMgrGetNextPoolCommon(a1, 1LL, 0LL);
  return result;
}
