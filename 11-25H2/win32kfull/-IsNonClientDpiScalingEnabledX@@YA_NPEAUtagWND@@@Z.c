/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x14019C584
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     NtUserIsNonClientDpiScalingEnabled @ 0x14019C4E0 (NtUserIsNonClientDpiScalingEnabled.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

bool __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1)
{
  char v1; // r9

  v1 = 0;
  if ( (*((_DWORD *)a1 + 95) & 0x80000) != 0 )
    return IsTopLevelWindow((__int64)a1);
  return v1;
}
