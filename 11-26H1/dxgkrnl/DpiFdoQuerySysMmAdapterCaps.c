/*
 * XREFs of DpiFdoQuerySysMmAdapterCaps @ 0x140245984
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x14023FEBC (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline @ 0x14006F7DC (Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401929F8 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DpiFdoQuerySysMmAdapterCaps(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // cf
  __int64 v7; // r15
  __int64 (__fastcall *v11)(__int64, __int128 *); // rax
  int v12; // edi
  __int64 (__fastcall *v14)(__int64, __int128 *); // rax
  unsigned int *v15; // rsi
  int v16; // ecx
  DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  int v19; // ecx
  char v20; // al
  _DWORD *v21; // rdi
  int v22; // eax
  int v23; // [rsp+30h] [rbp-40h] BYREF
  int v24; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h]
  __int128 v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+48h] BYREF

  v29 = a3;
  v6 = *(_DWORD *)(a4 + 28) < 0x11008u;
  v7 = a6;
  v26 = 0LL;
  LODWORD(v26) = 34;
  v25 = 0LL;
  v27 = 0LL;
  v30 = 0;
  v28 = 0LL;
  if ( !v6 )
  {
    LODWORD(v27) = 4;
    *((_QWORD *)&v26 + 1) = &v29;
  }
  *((_QWORD *)&v27 + 1) = &v25;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *))(a4 + 272);
  LODWORD(v28) = 8;
  v12 = v11(a5, &v26);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9276;
    return (unsigned int)v12;
  }
  v6 = *(_DWORD *)(a4 + 28) < 0x11008u;
  LODWORD(v26) = 35;
  if ( !v6 )
  {
    LODWORD(v27) = 4;
    *((_QWORD *)&v26 + 1) = &v29;
  }
  *((_QWORD *)&v27 + 1) = &v30;
  v14 = *(__int64 (__fastcall **)(__int64, __int128 *))(a4 + 272);
  LODWORD(v28) = 4;
  v12 = v14(a5, &v26);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9298;
    return (unsigned int)v12;
  }
  v15 = (unsigned int *)(v7 + 16);
  v16 = *(_DWORD *)(v7 + 16);
  *(_QWORD *)v7 = v25;
  *(_DWORD *)(v7 + 16) = v30 & 7 | v16 & 0xFFFFFFF8;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::GpuVaIoMmuEnabled(Global) )
  {
    v23 = 0;
    v24 = 0;
    if ( (unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (int)DpiReadPnpRegistryValue(a2, L"DxgkGpuVaIommuSupported", &v23, 4LL, 2) >= 0 )
        v30 = (v23 != 0 ? 8 : 0) | v30 & 0xFFFFFFF7;
      v18 = a2;
    }
    else
    {
      if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(a1 + 24), L"DxgkGpuVaIommuSupported", &v23, 4LL, 2) >= 0 )
        v30 = (v23 != 0 ? 8 : 0) | v30 & 0xFFFFFFF7;
      v18 = *(_QWORD *)(a1 + 24);
    }
    if ( (int)DpiReadPnpRegistryValue(v18, L"DxgkGpuVaIommuGlobalSupported", &v24, 4LL, 2) < 0 )
    {
      v20 = v30;
    }
    else
    {
      v19 = v24 != 0 ? 0x10 : 0;
      v20 = v19 | v30 & 0xEF;
      v30 = v19 | v30 & 0xFFFFFFEF;
    }
    v21 = (_DWORD *)(v7 + 16);
    *v15 = v20 & 0x18 | *v15 & 0xFFFFFFE7;
  }
  else
  {
    v21 = (_DWORD *)(v7 + 16);
  }
  if ( (*v15 & 0x18) != 0 )
  {
    v22 = *v15 | 5;
    *v21 = v22;
    if ( (v22 & 0x10) != 0 )
    {
      v24 = 0;
      if ( !(unsigned int)Feature_GpuVaIommuFixes__private_IsEnabledDeviceUsageNoInline() )
      {
        DpiReadPnpRegistryValue(*(_QWORD *)(a1 + 24), L"DualSmmu", &v24, 4LL, 2);
LABEL_29:
        *v21 = (v24 != 0 ? 0x20 : 0) | *v21 & 0xFFFFFFDF;
        return 0LL;
      }
      if ( (int)DpiReadPnpRegistryValue(a2, L"DualSmmu", &v24, 4LL, 2) >= 0 )
        goto LABEL_29;
    }
  }
  return 0LL;
}
