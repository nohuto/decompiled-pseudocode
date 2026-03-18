/*
 * XREFs of ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x1401FE798
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ?IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z @ 0x14012CD30 (-IsChildWindowDpiBoundaryDesktopComposed@@YA_NPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  void *v7; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v2 = ComposeWindow(a1, 6);
    DirtyVisRgnTrackers(a1);
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_QWORD *)a1;
    v5 = *(_DWORD *)(v3 + 28);
    v7 = (void *)ReferenceDwmApiPort(v3, v6);
    DwmAsyncChildStyleChange(v7, v4, 4294967280LL, v5);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
