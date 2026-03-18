/*
 * XREFs of CmpTransSearchAddTransFromRm @ 0x140AE0F20
 * Callers:
 *     CmpRecoverEnlistment @ 0x14085DCE4 (CmpRecoverEnlistment.c)
 *     CmpRmAnalysisPhase @ 0x14085E2FC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14085E540 (CmpRmReDoPhase.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromRm(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  struct _EX_RUNDOWN_REF *Thread; // r9
  __int64 result; // rax

  if ( !a1 || a1 != WheapPfaLock.Timer.Header.WaitListHead.Flink && !a1[5].Flink )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  Thread = (struct _EX_RUNDOWN_REF *)stru_140E098B8.WaitBlock[2].Thread;
  if ( a1 != WheapPfaLock.Timer.Header.WaitListHead.Flink )
    Thread = (struct _EX_RUNDOWN_REF *)a1[5].Flink;
  result = CmpTransSearchAddTrans(a2, a3, (__int64)a1, Thread, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
