/*
 * XREFs of ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14002E698
 * Callers:
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401BEBC8 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1401F5174 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401F6320 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 */

struct D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  __int64 v1; // rbx
  struct D3DKMT_GETPATHSMODALITY *result; // rax

  v1 = a1;
  result = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM(296 * ((unsigned int)a1 - 1) + 352, 1936876615LL);
  if ( result )
  {
    *((_WORD *)result + 10) = v1;
    *((_WORD *)result + 11) = v1;
    *((_DWORD *)result + 10) = 0;
    *((_QWORD *)result + 6) = 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, v1);
    result = 0LL;
    WdLogGlobalForLineNumber = 12166;
  }
  return result;
}
