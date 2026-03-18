/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1401D360C (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     DwmAsyncTextChange @ 0x14012D474 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x14012EA44 (IsMessageParentWindow.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 *     IsMotherDesktopWindow @ 0x1401D3894 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1401D38DC (DwmAsyncChildDestroy.c)
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
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  void *v26; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(UserSessionState + 19920);
  v8 = v5 + 32LL * *(unsigned int *)(W32GetUserSessionState(v7, v6) + 19848);
  v11 = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(UserSessionState + 19920);
  v13 = *(struct tagWND ***)(v11 + 19864);
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
          DirtyVisRgnTrackers(v14);
          WindowMargins::CheckForChanges(v14, 0LL);
          if ( (*(_BYTE *)(*((_QWORD *)v14 + 5) + 26LL) & 8) != 0 && IsTopLevelWindow((__int64)v14) )
          {
            SendDwmIconChange(v14);
            v22 = *(_QWORD *)v14;
            v25 = (void *)ReferenceDwmApiPort(v24, v23);
            DwmAsyncTextChange(v25, v22);
          }
        }
        else
        {
          v26 = (void *)ReferenceDwmApiPort(v16, v15);
          DwmAsyncChildDestroy(v26);
        }
      }
    }
    v12 += 32LL;
    v13 += 5;
  }
}
