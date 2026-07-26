/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1400A4D7C
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018F098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids, 0xEu, va, 8LL, 0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(a1, 3LL, 1LL, &WPP_c6acfce6d57133817f1512edb4fbf215_Traceguids, v7, va, 8LL, 0LL);
}
