/*
 * XREFs of GetPathsModality @ 0x14002D62C
 * Callers:
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002CEA8 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002D2B4 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401F5174 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14002E698 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetPathsModality(__int64 a1, PVOID *a2, unsigned int a3, unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 v7; // ax
  bool v8; // zf
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 DxgkWin32kInterface; // rax
  int v11; // edi
  __int64 result; // rax
  unsigned __int16 v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12621;
  }
  v7 = v4 + 8;
  while ( 1 )
  {
    v8 = *a2 == 0LL;
    v13 = v7;
    if ( v8 )
    {
      v9 = AllocPathsModality(v7);
      *a2 = v9;
      if ( !v9 )
        break;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    v11 = (*(__int64 (__fastcall **)(_QWORD, PVOID, unsigned __int16 *))(DxgkWin32kInterface + 144))(a3, *a2, &v13);
    if ( v11 != -1073741789 )
    {
      if ( v11 < 0 )
      {
        FreePathsModality(*a2);
        *a2 = 0LL;
        return (unsigned int)v11;
      }
      if ( v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) <= *((unsigned __int16 *)*a2 + 11) )
        return (unsigned int)v11;
    }
    FreePathsModality(*a2);
    v7 = v4 + v13;
    *a2 = 0LL;
  }
  WdLogSingleEntry1(2LL, v13);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 12636;
  return result;
}
