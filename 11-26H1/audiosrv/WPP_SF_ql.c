/*
 * XREFs of WPP_SF_ql @ 0x1801171C0
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x180116FD0 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ql(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, 33LL, (__int64 *)va);
}
