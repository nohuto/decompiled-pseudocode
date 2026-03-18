/*
 * XREFs of ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x14021CB3C
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockWndMenuWorker(struct tagWND *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  struct tagWND **v5; // rcx
  char *v6; // rcx

  v4 = *((_QWORD *)a1 + (a2 ^ 1LL) + 20);
  if ( !v4 )
    return 0LL;
  v5 = (struct tagWND **)(v4 + 80);
  if ( a1 == *v5 )
    HMAssignmentUnlock(v5);
  if ( a2 )
  {
    v6 = (char *)a1 + 160;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 160LL) = 0LL;
  }
  else
  {
    v6 = (char *)a1 + 168;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 152LL) = 0LL;
  }
  return HMAssignmentUnlock(v6);
}
