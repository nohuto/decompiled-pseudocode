/*
 * XREFs of ?v_GetSourceRect@CPerMonitorDesktopThumbnail@@MEAAJPEAUtagRECT@@@Z @ 0x1800AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::v_GetSourceRect(HMONITOR *this, struct tagRECT *a2)
{
  signed int v4; // edi
  signed int LastError; // eax
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-38h] BYREF

  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v4 = 0;
  SetLastError(0);
  if ( GetMonitorInfoW(this[7], &mi) )
  {
    *a2 = mi.rcMonitor;
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x173u, 0LL);
  }
  return (unsigned int)v4;
}
