/*
 * XREFs of ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x140198DDC
 * Callers:
 *     ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x14019BC78 (-InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCabcOptionFromRegistry(unsigned int *a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+38h] [rbp-C8h]
  const WCHAR *v7; // [rsp+40h] [rbp-C0h]
  int *v8; // [rsp+48h] [rbp-B8h]
  int v9; // [rsp+50h] [rbp-B0h]
  int *v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  __int128 v15; // [rsp+80h] [rbp-80h]
  __int128 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-58h]
  const wchar_t *v19; // [rsp+B0h] [rbp-50h]
  int *v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C0h] [rbp-40h]
  int *v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int128 v27; // [rsp+F0h] [rbp-10h]
  __int128 v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+140h] [rbp+40h] BYREF
  int v30; // [rsp+148h] [rbp+48h] BYREF
  int v31; // [rsp+150h] [rbp+50h] BYREF
  int v32; // [rsp+158h] [rbp+58h] BYREF

  v31 = 2;
  v30 = 2;
  v5 = 0LL;
  v7 = L"CABCOption";
  v6 = 292;
  v8 = &v30;
  v9 = 0x4000000;
  v10 = &v31;
  v11 = 4;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v5, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v3 = v30;
  }
  else
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4642;
    v29 = 0;
    v19 = L"DisableCABC";
    v32 = 0;
    v20 = &v29;
    v17 = 0LL;
    v22 = &v32;
    v18 = 288;
    v21 = 0x4000000;
    v23 = 4;
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v17, 0LL, 0LL);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4664;
    }
    v3 = v29 != 1 ? 2 : 0;
  }
  *a1 = v3;
  return (unsigned int)v2;
}
