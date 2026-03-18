/*
 * XREFs of WPP_RECORDER_SF_sdqD @ 0x140067188
 * Callers:
 *     EnableDisableRegionSpacesForDevice @ 0x14004D91C (EnableDisableRegionSpacesForDevice.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sdqD(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, const char *a6, ...)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const char *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v19; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v10 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_88a6901df60130b0fb02f0148765b5c1_Traceguids,
      a4,
      v13,
      v12,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = v7 + 1;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_88a6901df60130b0fb02f0148765b5c1_Traceguids,
           v16,
           v6,
           v10,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
