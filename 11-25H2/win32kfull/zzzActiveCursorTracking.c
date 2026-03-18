/*
 * XREFs of zzzActiveCursorTracking @ 0x14028203C
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetActiveTrackPwnd @ 0x140281D18 (GetActiveTrackPwnd.c)
 */

char __fastcall zzzActiveCursorTracking(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagWND *ActiveTrackPwnd; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // edi
  unsigned __int64 v22; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp+30h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) == 1
    || (v6 = W32GetUserSessionState(v5, v4),
        LODWORD(ActiveTrackPwnd) = CInputGlobals::GetLastInputType(*(_QWORD *)(v6 + 3056)),
        (_DWORD)ActiveTrackPwnd == 4) )
  {
    v8 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL));
    LODWORD(ActiveTrackPwnd) = PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v8);
    if ( !(_DWORD)ActiveTrackPwnd )
    {
      if ( !*(_QWORD *)(W32GetUserSessionState(v10, v9) + 36256)
        || (v13 = W32GetUserSessionState(v12, v11),
            (ActiveTrackPwnd = GetActiveTrackPwnd(*(const struct tagWND **)(v13 + 36256), v14)) != 0LL) )
      {
        v15 = *(_DWORD **)(a1 + 40);
        LODWORD(v23) = v15[22] + (v15[24] - v15[22]) / 2;
        HIDWORD(v23) = v15[23] + (v15[25] - v15[23]) / 2;
        v22 = v23;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
          LogicalToPhysicalDPIPoint(&v22, &v23, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
        v18 = W32GetUserSessionState(v17, v16);
        CCursorClip::BoundPoint(*(_QWORD *)(v18 + 36240), v22, 0LL, 2LL, &v22);
        v23 = v22;
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
          PhysicalToLogicalDPIPoint(&v23, &v22, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
        LODWORD(ActiveTrackPwnd) = PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v23);
        if ( (_DWORD)ActiveTrackPwnd )
        {
          v20 = *(_BYTE *)(v19 + 31) & 0x10;
          if ( (*(_BYTE *)(v19 + 31) & 0x10) == 0 )
            SetVisible(a1, v20 + 5);
          LOBYTE(ActiveTrackPwnd) = zzzInternalSetCursorPos((unsigned int)v22, HIDWORD(v22), 2, 0);
          if ( !v20 )
            LOBYTE(ActiveTrackPwnd) = SetVisible(a1, 0);
        }
      }
    }
  }
  return (char)ActiveTrackPwnd;
}
