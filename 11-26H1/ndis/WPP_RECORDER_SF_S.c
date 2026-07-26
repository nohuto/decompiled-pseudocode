/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140096C80
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DF8D4 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140137010 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     NdisQueryDiagnosticSetting @ 0x14013B420 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x14014B820 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140167A00 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v12; // rbp
  const wchar_t *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-48h]

  v6 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = 10LL;
  v13 = a6;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v17, v16, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v12 = 2 * v6 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v13 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v20, v13, v12, 0LL);
}
