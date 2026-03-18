/*
 * XREFs of PiPnpRtlGetDeviceStatus @ 0x140A7F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x140725BB0 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceStatus(__int64 a1, __int128 *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  if ( !a2 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  v8 = *a2;
  v14 = 0LL;
  v10 = v8;
  v11 = 0LL;
  v12 = 0;
  v13 = a6;
  result = ZwPlugPlayControl(14LL, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    *a3 = HIDWORD(v11);
    *a4 = v12;
    *a5 = v14;
  }
  return result;
}
