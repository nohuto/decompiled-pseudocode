/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x180056708
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddProviderTrackingInfo @ 0x180078E38 (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180036220 (RtlUnicodeToMultiByteN.c)
 *     EtwpQueryRegString @ 0x180056E38 (EtwpQueryRegString.c)
 *     EtwpAddEventToBuffer @ 0x1800ECCC4 (EtwpAddEventToBuffer.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-358h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v12[132]; // [rsp+160h] [rbp-238h] BYREF

  v10[0] = 0;
  v3 = a3 - *(_DWORD *)(a2 + 48);
  result = EtwpQueryRegString(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             v12,
             260LL);
  if ( (int)result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(v11, 0x104u, 0LL, v12, 0x208u);
    if ( (int)result >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
      result = EtwpAddEventToBuffer(a2, 66LL, a2 + 88, v11, (int)v7 + 1, v3, v10);
      if ( (int)result < 0 )
        return result;
      result = (v10[0] + 7) & 0xFFFFFFF8;
      v3 -= result;
    }
  }
  v8 = (__int64 **)(a1 + 448);
  v9 = *v8;
  while ( v9 != (__int64 *)v8 )
  {
    result = EtwpAddEventToBuffer(a2, 64LL, a2 + 88, (char *)v9 + 28, *((_DWORD *)v9 + 5) - 4, v3, v10);
    if ( (int)result < 0 )
      break;
    v9 = (__int64 *)*v9;
    result = (v10[0] + 7) & 0xFFFFFFF8;
    v3 -= result;
  }
  return result;
}
