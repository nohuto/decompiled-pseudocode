/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x140390E8C
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(VIDPN_MGR *this)
{
  int RegistryValues; // ebx
  int v3; // ecx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rax
  struct DXGADAPTER *v7; // rax
  bool v8; // al
  _DWORD *v9; // rdi
  int v10; // eax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h]
  const wchar_t *v17; // [rsp+50h] [rbp-B0h]
  unsigned int *v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  unsigned int *v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h]
  const wchar_t *v24; // [rsp+88h] [rbp-78h]
  char *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  const wchar_t *v31; // [rsp+C0h] [rbp-40h]
  int *v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+D0h] [rbp-30h]
  int *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int128 v39; // [rsp+100h] [rbp+0h]
  __int128 v40; // [rsp+110h] [rbp+10h]
  _QWORD v41[22]; // [rsp+120h] [rbp+20h] BYREF

  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v12 = 2;
    memset(v41, 0, 0xA8uLL);
    LODWORD(v41[1]) = 288;
    LODWORD(v41[4]) = 0x4000000;
    v41[2] = L"BadMonitorModeDiag";
    LODWORD(v41[11]) = 0x4000000;
    v41[3] = &v12;
    v41[5] = 0LL;
    v41[9] = L"AssertOnDdiViolation";
    LODWORD(v41[6]) = 0;
    v41[10] = &g_DmmAssertOnDdiViolation;
    v41[7] = 0LL;
    LODWORD(v41[8]) = 288;
    v41[12] = 0LL;
    LODWORD(v41[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v41, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      v3 = v12;
    }
    else
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 689;
      if ( RegistryValues != -1073741772 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 692;
      }
      v3 = 2;
      v12 = 2;
    }
    if ( v3 == 1 || v3 == 2 )
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = v3;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 717;
    }
  }
  v12 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)ContainingAdapter + 27), L"AllowUnspecifiedVSync", &v12, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v12 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 738;
  }
  v12 = 0;
  v5 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v5 + 27), L"AllowUnspecifiedHSync", &v12, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v12 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 761;
  }
  v12 = 0;
  v6 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v6 + 27), L"AllowUnspecifiedPixelRate", &v12, 4LL, 2) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v12 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    WdLogGlobalForLineNumber = 784;
  }
  v12 = 0;
  v7 = VIDPN_MGR::GetContainingAdapter(this);
  if ( (int)DpiReadPnpRegistryValue(*((_QWORD *)v7 + 27), L"ForceDualViewBehavior", &v12, 4LL, 2) >= 0 )
  {
    v8 = v12 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    v8 = 0;
    WdLogGlobalForLineNumber = 808;
  }
  *((_BYTE *)this + 520) = v8;
  v9 = (_DWORD *)((char *)this + 544);
  v13 = 1000;
  v19 = 67108868;
  v26 = 67108868;
  v17 = L"RapidHPDTime";
  v33 = 67108868;
  v18 = &v13;
  *((_DWORD *)this + 136) = 5;
  v20 = &v13;
  v14 = 0;
  v24 = L"RapidHPDThresholdCount";
  v15 = 0LL;
  v31 = L"EnableExperimentalRefreshRates";
  v32 = &v14;
  v34 = &v14;
  v16 = 288;
  v21 = 4;
  v22 = 0LL;
  v23 = 288;
  v25 = (char *)this + 544;
  v27 = (char *)this + 544;
  v28 = 4;
  v29 = 0LL;
  v30 = 288;
  v35 = 4;
  v36 = 0LL;
  v37 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v15, 0LL, 0LL);
  v10 = v13;
  if ( v13 > 0xEA60 )
  {
    v10 = 60000;
    v13 = 60000;
  }
  *((_DWORD *)this + 135) = 10000 * v10 / KeQueryTimeIncrement();
  if ( *v9 == 1 )
  {
    *v9 = 0;
  }
  else if ( *v9 > 0x20u )
  {
    *v9 = 32;
  }
  return 0LL;
}
