/*
 * XREFs of NtUserEndMenu @ 0x140219020
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMenuStateWindow @ 0x1402BF318 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 MenuStateWindow; // rax
  __int64 v6; // rdx

  EnterCrit(0LL, 0LL);
  v2 = PtiCurrent(v1, v0);
  if ( *((_QWORD *)v2 + 81) )
  {
    MenuStateWindow = GetMenuStateWindow(*((_QWORD *)v2 + 81));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499, 0, 0);
    else
      *(_DWORD *)(v6 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}
