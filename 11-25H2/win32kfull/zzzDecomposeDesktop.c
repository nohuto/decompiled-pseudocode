/*
 * XREFs of zzzDecomposeDesktop @ 0x1401229EC
 * Callers:
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreUpdateSpriteVisRgn @ 0x14001BBB0 (GreUpdateSpriteVisRgn.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x140122E34 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x140123714 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     MagpDecomposeDesktop @ 0x140203188 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  __int64 v3; // rdx
  int v4; // edi
  __int64 UserSessionState; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // rbx
  char v32; // si
  int v33; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    v3 = (unsigned int)-a2;
    v4 = (_DWORD)v3 != 0 ? 0x10 : 0;
    UserSessionState = W32GetUserSessionState(a1, v3);
    MagpDecomposeDesktop(UserSessionState + 66040, a1);
    v6 = 0LL;
    W32GetUserSessionState(v8, v7);
    do
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19888) + 32LL * (unsigned int)v6;
      v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19832);
      if ( *(_BYTE *)(v11 + 24) == 1 )
      {
        v31 = *(_QWORD *)(v15 + 40 * v6);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v31, a1) )
        {
          v32 = v4 + 2;
          LOBYTE(v33) = IsDesktopWindow(v31);
          if ( v33 )
          {
            v32 = (v4 + 2) | 4;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 1) != 0 )
          {
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v31 + 16),
              *(struct tagQ **)(*(_QWORD *)(v31 + 16) + 472LL),
              0x10u,
              (struct tagWND *)v31,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v31, v32);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 <= *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19816) );
    v16 = W32GetUserSessionState(v10, v9);
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    W32GetUserSessionState(v18, v17);
    v20 = W32GetUserSessionState(**((_QWORD **)a1 + 1), v19);
    GreTransferDwmStateToSpriteState(*(HDEV *)(*(_QWORD *)(v20 + 56968) + 48LL));
    v21 = **((_QWORD **)a1 + 1);
    *(_DWORD *)(v21 + 64) &= ~1u;
    v23 = W32GetUserSessionState(v21, v22);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 56968) + 48LL));
    v26 = W32GetUserSessionState(v25, v24);
    GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(v26 + 56968) + 48LL), 0);
    v29 = W32GetUserSessionState(v28, v27);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v29 + 56968) + 48LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
