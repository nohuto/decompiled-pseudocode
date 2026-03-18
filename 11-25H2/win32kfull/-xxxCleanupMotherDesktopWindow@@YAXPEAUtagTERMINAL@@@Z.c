/*
 * XREFs of ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThread @ 0x140288970 (xxxDesktopThread.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

void __fastcall xxxCleanupMotherDesktopWindow(struct tagTERMINAL *a1)
{
  char *v1; // rdi
  struct tagWND *v2; // rbx
  __int64 v3; // rdx

  v1 = (char *)a1 + 8;
  v2 = (struct tagWND *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    SetVisible(*((_QWORD *)a1 + 1), 0);
    if ( HMAssignmentUnlock(v1) )
      xxxDestroyWindow(v2, v3);
  }
}
