/*
 * XREFs of ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74
 * Callers:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     SetDisplayAffinity @ 0x1401FF0D8 (SetDisplayAffinity.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14012CD30 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v5 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v7 = *((_QWORD *)a1 + 5);
    v8 = *(_QWORD *)a1;
    v9 = *(_DWORD *)(v7 + 28);
    v11 = (void *)ReferenceDwmApiPort(v7, v10);
    DwmAsyncChildStyleChange(v11, v8, 4294967280LL, v9);
  }
  else
  {
    return 4063234;
  }
  return v5;
}
