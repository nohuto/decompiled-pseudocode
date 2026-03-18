/*
 * XREFs of UnlockDesktopSysMenu @ 0x140285BD8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     UnlockDesktopMenu @ 0x1402CA34C (UnlockDesktopMenu.c)
 */

__int64 __fastcall UnlockDesktopSysMenu(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x80u;
  return UnlockDesktopMenu(a1);
}
