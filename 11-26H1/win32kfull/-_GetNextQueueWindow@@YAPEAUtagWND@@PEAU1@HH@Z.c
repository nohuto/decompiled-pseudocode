/*
 * XREFs of ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4
 * Callers:
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x14027CE6C (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x14029D7A0 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     GetLastTopMostWindow @ 0x140048390 (GetLastTopMostWindow.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x14008BC58 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall _GetNextQueueWindow(struct tagWND *a1, int a2, int a3)
{
  int v3; // esi
  struct tagWND *LastTopMostWindow; // rax
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // r8
  struct tagWND *WindowWorker; // rbx
  __int64 v13; // rdi
  struct tagWND *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  struct tagWND *v17; // rax
  struct tagWND *v18; // rcx

  v3 = 0;
  LastTopMostWindow = a1;
  if ( a1 || (LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(0LL)) != 0LL )
  {
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)LastTopMostWindow);
    CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
    WindowWorker = CompositeAppFrameWindowOrSelf;
    if ( CompositeAppFrameWindowOrSelf )
    {
      v13 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 13);
      if ( !v13 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176) + 8LL) + 24LL);
        WindowWorker = *(struct tagWND **)(v13 + 112);
      }
      v14 = WindowWorker;
      while ( WindowWorker )
      {
        WindowWorker = GetWindowWorker(WindowWorker, (unsigned int)(a2 != 0) + 2, (int)v11);
        if ( !WindowWorker )
        {
          WindowWorker = *(struct tagWND **)(v13 + 112);
          if ( a2 )
            WindowWorker = GetWindowWorker(*(struct tagWND **)(v13 + 112), 1u, (int)v11);
          if ( v3 )
            break;
          v3 = 1;
          if ( !WindowWorker )
            break;
        }
        if ( WindowWorker == v14 )
          break;
        v15 = *((_QWORD *)WindowWorker + 5);
        if ( *(char *)(v15 + 24) >= 0
          && (*(_BYTE *)(v15 + 27) & 8) == 0
          && !(unsigned int)IsWindowUnderActiveLockScreen(WindowWorker) )
        {
          v11 = (_BYTE *)*((_QWORD *)WindowWorker + 5);
          if ( (v11[31] & 0x10) != 0 && !IsWindowCloaked(WindowWorker) )
          {
            v16 = *((_QWORD *)WindowWorker + 25);
            if ( !v16
              || (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 8) == 0
              && (!a3 || (v11[24] & 8) == 0 && (v11[20] & 0x20) == 0) )
            {
              v17 = (struct tagWND *)*((_QWORD *)WindowWorker + 15);
              v18 = WindowWorker;
              while ( v17 )
              {
                v18 = v17;
                v17 = (struct tagWND *)*((_QWORD *)v17 + 15);
              }
              if ( WindowWorker == *((struct tagWND **)v18 + 25) )
                return WindowWorker;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
