/*
 * XREFs of __scrt_get_show_window_mode @ 0x140005108
 * Callers:
 *     __scrt_common_main_seh @ 0x1400047F0 (__scrt_common_main_seh.c)
 * Callees:
 *     memset_0 @ 0x140005978 (memset_0.c)
 */

WORD _scrt_get_show_window_mode()
{
  WORD result; // ax
  _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  GetStartupInfoW(&StartupInfo);
  result = 10;
  if ( (StartupInfo.dwFlags & 1) != 0 )
    return StartupInfo.wShowWindow;
  return result;
}
