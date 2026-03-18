/*
 * XREFs of ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021F98C
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14003B130 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PostPendingMouseMove @ 0x1400EBE10 (PostPendingMouseMove.c)
 *     IsEqualInputSource @ 0x1400FF830 (IsEqualInputSource.c)
 */

void __fastcall CMouseProcessor::CoalesceInputSourceMouseMoves(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagINPUT_MESSAGE_SOURCE *a3)
{
  __int64 v5; // rdx

  if ( a3 )
  {
    if ( (*((_DWORD *)a2 + 103) & 0x20) != 0 )
    {
      if ( IsEqualInputSource((_DWORD *)a2 + 109, a3) )
        return;
      if ( (*((_DWORD *)a2 + 110) & 0xFFFFFFFB) != 0 )
      {
        if ( (*((_DWORD *)a3 + 1) & 0xFFFFFFFB) == 0 )
          return;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 1) == 0 )
          PostPendingMouseMove(a2, v5);
      }
      else if ( (*((_DWORD *)a3 + 1) & 0xFFFFFFFB) == 0 )
      {
        return;
      }
    }
    *((_DWORD *)a2 + 109) = *(_DWORD *)a3;
    *((_DWORD *)a2 + 110) = *((_DWORD *)a3 + 1);
  }
}
