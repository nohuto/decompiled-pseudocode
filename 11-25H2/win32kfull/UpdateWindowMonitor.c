/*
 * XREFs of UpdateWindowMonitor @ 0x140033EB0
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x140064088 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020F2CC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1400341EC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140036CCC (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     FindShadowWindow @ 0x1400E0E8C (FindShadowWindow.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x140168D20 (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1401A5788 (UpdateTopLevelWindowDPITransform.c)
 *     ResetWindowTransform @ 0x1401A5840 (ResetWindowTransform.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC (_SetDeferredDpiStateForWindowAndChildren.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, struct tagMONITOR *a2)
{
  struct tagWND *v3; // rsi
  struct tagWND *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // r9d
  char *v7; // r12
  __int64 v8; // rbx
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 ShadowWindow; // rax
  _BYTE v19[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 )
  {
    v3 = a1;
    v4 = a1;
    while ( 1 )
    {
      v5 = (_DWORD *)((char *)v3 + 380);
      if ( *(_WORD *)(*((_QWORD *)a2 + 5) + 60LL) == (unsigned __int16)GetWindowDpiLastNotify(v4, a2) )
        *v5 &= ~0x40000u;
      else
        *v5 |= 0x40000u;
      if ( (unsigned int)IsTopLevelWindow(v4) && (*(_DWORD *)(*((_QWORD *)v4 + 5) + 288LL) & 0xF) == 2 )
        SetDeferredDpiStateForWindowAndChildren(v4, (v6 >> 18) & 1, 0LL);
      UpdateWindowMonitorAndDpiInfoHelper(v4, a2);
      v7 = (char *)v4 + 40;
      v8 = *((_QWORD *)v4 + 5);
      *(_DWORD *)(v8 + 232) = *(_DWORD *)(v8 + 232) & 0xFFFFFBFF | (ShouldUseLogPixelsForWindowMetrics(v4) << 10);
      v9 = IsChildWindowDpiBoundary(v4);
      v10 = *((_QWORD *)v4 + 5);
      if ( v9 )
      {
        if ( (*(_BYTE *)(v10 + 26) & 8) == 0 )
          ComposeWindow(v4);
      }
      else if ( (*(_DWORD *)(v10 + 232) & 2) != 0 && IsChildWindowCoordinateSpaceBoundary(v4) )
      {
        ComposeWindow(v4);
        if ( GetTopLevelWindow(v4) )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
          xxxInternalInvalidate(*((struct tagWND **)v4 + 13), (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
        }
      }
      if ( !(unsigned int)IsTopLevelWindow(v4) && !v9 )
        break;
      if ( (*v5 & 0x40000) != 0 )
      {
        if ( PtiCurrent() )
        {
          if ( *((_QWORD *)PtiCurrent() + 62) )
          {
            if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0 )
            {
              v12 = *(_QWORD *)v7;
              if ( (*(_DWORD *)(*(_QWORD *)v7 + 288LL) & 0x4000000F) == 0x40000000
                && (*(_BYTE *)(v12 + 27) & 0x20) != 0
                && (*(_BYTE *)(v12 + 26) & 0x20) == 0 )
              {
                UserSessionState = W32GetUserSessionState(v12, v11);
                GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
                v14 = RecreateRedirectionBitmap(v4, 0, 0LL);
                v17 = W32GetUserSessionState(v16, v15);
                GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v17 + 56968) + 48LL));
                if ( v14 >= 0 )
                {
                  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
                  xxxInternalInvalidate(v4, (HRGN)1, 0x85u);
                  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
                }
              }
            }
          }
        }
      }
      UpdateWindowSpriteMonitor(v4, a2);
      UpdateTopLevelWindowDPITransform(v4, a2);
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v4 + 17) + 8LL) + 10LL) & 2) == 0 )
        return;
      ShadowWindow = FindShadowWindow(v4);
      v4 = (struct tagWND *)ShadowWindow;
      if ( !ShadowWindow )
        return;
      v3 = (struct tagWND *)ShadowWindow;
    }
    ResetWindowTransform(v4);
    if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) != 0 )
      UpdateWindowSpriteMonitor(v4, a2);
  }
}
