/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EAC
 * Callers:
 *     NtUserIsNonClientDpiScalingEnabled @ 0x140013300 (NtUserIsNonClientDpiScalingEnabled.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

char __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1, __int64 a2)
{
  char v2; // r9

  v2 = 0;
  if ( (*((_DWORD *)a1 + 95) & 0x80000) != 0 )
    return (unsigned int)IsTopLevelWindow(a1, a2) != 0;
  return v2;
}
