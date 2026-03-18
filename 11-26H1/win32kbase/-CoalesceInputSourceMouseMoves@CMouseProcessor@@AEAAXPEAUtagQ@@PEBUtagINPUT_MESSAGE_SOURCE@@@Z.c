/*
 * XREFs of ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F764
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostPendingMouseMove @ 0x140119440 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1401334E0 (IsEqualInputSource.c)
 *     ?IsCoalesableMouseMoveInputSource@CMouseProcessor@@AEBA_NPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140223DB0 (-IsCoalesableMouseMoveInputSource@CMouseProcessor@@AEBA_NPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __fastcall CMouseProcessor::CoalesceInputSourceMouseMoves(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagINPUT_MESSAGE_SOURCE *a3)
{
  const struct tagINPUT_MESSAGE_SOURCE *v5; // rsi
  CMouseProcessor *v6; // rcx
  CMouseProcessor *v7; // rcx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // r8d

  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 109) & 0x20) == 0 )
      goto LABEL_3;
    v5 = (struct tagQ *)((char *)a2 + 460);
    if ( !IsEqualInputSource((_DWORD *)a2 + 115, a3) )
    {
      if ( !CMouseProcessor::IsCoalesableMouseMoveInputSource(v6, v5)
        && !CMouseProcessor::IsCoalesableMouseMoveInputSource(v7, a3) )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent((__int64)v7, v8) + 130, 0, 0) & 1) == 0 )
          PostPendingMouseMove(a2, v9, v10);
        goto LABEL_3;
      }
      if ( !CMouseProcessor::IsCoalesableMouseMoveInputSource(v7, a3) )
      {
LABEL_3:
        *((_DWORD *)a2 + 115) = *(_DWORD *)a3;
        *((_DWORD *)a2 + 116) = *((_DWORD *)a3 + 1);
      }
    }
  }
}
