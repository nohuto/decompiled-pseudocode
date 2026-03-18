/*
 * XREFs of ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14004C070 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  void *v4; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1, 6);
    DirtyVisRgnTrackers(a1, v3);
    v4 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v4);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
