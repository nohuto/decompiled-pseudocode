/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x14026D92C (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     DwmAsyncTextChange @ 0x14004A34C (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14004BF48 (IsMessageParentWindow.c)
 *     SendDwmIconChange @ 0x14005C6EC (SendDwmIconChange.c)
 *     IsMotherDesktopWindow @ 0x14018FFC0 (IsMotherDesktopWindow.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x140190008 (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     DwmAsyncChildDestroy @ 0x140190358 (DwmAsyncChildDestroy.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  int v2; // r14d
  __int64 UserSessionState; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  struct tagWND **v13; // rsi
  struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  const struct tagWND *DesktopWindow; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  void *v27; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(UserSessionState + 19888);
  v8 = v5 + 32LL * *(unsigned int *)(W32GetUserSessionState(v7, v6) + 19816);
  v11 = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(UserSessionState + 19888);
  v13 = *(struct tagWND ***)(v11 + 19832);
  while ( v12 <= v8 )
  {
    if ( *(_BYTE *)(v12 + 24) == 1 )
    {
      v14 = *v13;
      if ( *((const struct tagDESKTOP **)*v13 + 3) == a1 && !(unsigned int)IsMotherDesktopWindow(*v13) )
      {
        if ( v2 )
        {
          LOBYTE(v17) = IsDesktopWindow((__int64)v14);
          if ( v17 )
          {
            DesktopWindow = 0LL;
          }
          else
          {
            LOBYTE(v19) = IsMessageParentWindow(v18);
            if ( v19 )
              DesktopWindow = (const struct tagWND *)GetDesktopWindow(v20);
            else
              DesktopWindow = (const struct tagWND *)*((_QWORD *)v14 + 13);
          }
          DwmWindowCreate(v14, DesktopWindow, (const struct tagRECT *)(*((_QWORD *)v14 + 5) + 88LL));
          DwmChildRectChange(v14);
          DirtyVisRgnTrackers(v14, v22);
          WindowMargins::CheckForChanges(v14, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)v14 + 5) + 26LL) & 8) != 0 && IsTopLevelWindow((__int64)v14) )
          {
            SendDwmIconChange(v14);
            v23 = *(_QWORD *)v14;
            v26 = (void *)ReferenceDwmApiPort(v25, v24);
            DwmAsyncTextChange(v26, v23);
          }
        }
        else
        {
          v27 = (void *)ReferenceDwmApiPort(v16, v15);
          DwmAsyncChildDestroy(v27);
        }
      }
    }
    v12 += 32LL;
    v13 += 5;
  }
}
