/*
 * XREFs of ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10
 * Callers:
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402CF6E0 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DwmAsyncNotifyWindowNormalRectChange @ 0x140347194 (DwmAsyncNotifyWindowNormalRectChange.c)
 */

void __fastcall CHECKPOINT::SendNormalToDwm(CHECKPOINT *this, const struct tagWND *a2)
{
  BOOL v3; // eax
  __int64 v4; // rdx
  struct MOVESIZEDATA *v5; // rcx
  char v6; // di
  char v7; // si
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  void *v12; // rax

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19176) + 48LL) & 0x400) != 0 )
  {
    v3 = IsTopLevelWindow((__int64)a2);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = WPP_GLOBAL_Control;
      v6 = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v7 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v6 = 0;
      }
      if ( v7 || v6 )
      {
        v8 = *(_QWORD *)a2;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v10) = v6;
        LOBYTE(v11) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          4,
          13,
          (__int64)&WPP_b6344e787f9c38fd67b335c61b846d12_Traceguids,
          v8);
      }
      v12 = (void *)ReferenceDwmApiPort(v5, v4);
      DwmAsyncNotifyWindowNormalRectChange(v12);
    }
  }
}
