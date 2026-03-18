/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     CheckCursorClipAccess @ 0x1400293B0 (CheckCursorClipAccess.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1400295C4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401F490C (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall _GetCurrentLogicalCursorThread(__int64 a1)
{
  struct tagTHREADINFO **CurrentThreadWin32Thread; // rcx
  struct tagTHREADINFO *result; // rax

  CurrentThreadWin32Thread = (struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(a1);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    result = *CurrentThreadWin32Thread;
  if ( (*((_DWORD *)result + 340) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 210);
  return result;
}
