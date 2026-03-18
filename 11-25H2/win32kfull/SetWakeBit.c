/*
 * XREFs of SetWakeBit @ 0x1400338D0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IncPaintCount @ 0x140033748 (IncPaintCount.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400337A0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x140114E0C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     ClearSendMessages @ 0x14012D548 (ClearSendMessages.c)
 *     _DelegateCapturePointers @ 0x140137D48 (_DelegateCapturePointers.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x14015DFC4 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxReceiverDied @ 0x14016F18C (xxxReceiverDied.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 *     _ReplyMessage @ 0x1401B74C0 (_ReplyMessage.c)
 *     IPostQuitMessage @ 0x1401C7DC4 (IPostQuitMessage.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401D0484 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     DoTimer @ 0x1402463F0 (DoTimer.c)
 *     xxxSystemTimerProc @ 0x140246950 (xxxSystemTimerProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1402AC860 (xxxCancelTrackingForThread.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 */

LONG __fastcall SetWakeBit(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  LONG result; // eax
  __int64 v6; // rdx
  __int64 UserSessionState; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = a2;
  v4 = 0LL;
  result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0);
  if ( (result & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 96LL) = a1;
      EditionUpdateRawMouseMode(*(_QWORD *)(a1 + 472));
    }
    if ( (v3 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 472));
    if ( (v3 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 472) + 104LL) = a1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 488) + 8LL), v3);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 488) + 4LL), v3);
    UserSessionState = W32GetUserSessionState(v4, a2);
    if ( (v3 & 0x1C07) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 464);
      if ( (*(_DWORD *)(v8 + 12) & 0x400000) != 0 )
      {
        if ( (v3 & 2) == 0
          || (v10 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 19872),
              *(_DWORD *)(v10 + 4960) != *(_DWORD *)(UserSessionState + 36224))
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 4964LL) != *(_DWORD *)(UserSessionState + 36228) )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 464) + 12LL) &= ~0x400000u;
          ForegroundBoost::SetForegroundPriority(a1, 1LL, 8LL);
        }
      }
    }
    result = *(_DWORD *)(*(_QWORD *)(a1 + 488) + 16LL);
    if ( (result & v3) != 0 )
      return KeSetEvent(*(PRKEVENT *)(a1 + 768), 2, 0);
  }
  return result;
}
