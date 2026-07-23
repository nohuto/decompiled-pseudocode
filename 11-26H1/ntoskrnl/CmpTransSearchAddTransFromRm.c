/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x140ADE378
 * Callers:
 *     CmpRecoverEnlistment @ 0x140863FD4 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x1408645EC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x140864830 (CmpRmReDoPhase.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  struct _EX_RUNDOWN_REF *Thread; // r9
  __int64 result; // rax

  if ( !a1 || a1 != *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] && !*(_QWORD *)(a1 + 80) )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  Thread = (struct _EX_RUNDOWN_REF *)stru_140E098B8.WaitBlock[2].Thread;
  if ( a1 != *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
    Thread = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  result = CmpTransSearchAddTrans(a2, a3, a1, Thread, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
