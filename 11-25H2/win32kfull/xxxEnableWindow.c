/*
 * XREFs of xxxEnableWindow @ 0x140025DCC
 * Callers:
 *     NtUserEnableWindow @ 0x140248C80 (NtUserEnableWindow.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x140025E98 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402454F8 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rax

  v5 = 0;
  if ( !(unsigned int)IsImmersiveBand(a1) )
    goto LABEL_2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
  {
    v8 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  if ( (unsigned int)IsDesktopApp(CurrentProcessWin32Process, v8)
    && (v9 = PtiCurrent(), !(unsigned int)ExemptedFromImmersiveRestrictions(v9)) )
  {
    UserSetLastError(5);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
  else
  {
LABEL_2:
    LOBYTE(v5) = a2 != 0;
    return xxxEnableWindowWorker(a1, v5);
  }
}
