/*
 * XREFs of ?DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z @ 0x14008BD00
 * Callers:
 *     ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x14008B138 (-CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPO.c)
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x14008EF90 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 * Callees:
 *     DpiCompareAcpiPaths @ 0x1400934D8 (DpiCompareAcpiPaths.c)
 */

char __fastcall DISPLAY_MUX_PAIRING::DoesMuxAcpiNameMatch(DISPLAY_MUX_PAIRING *this, const struct _UNICODE_STRING *a2)
{
  __int64 v2; // rsi
  char v4; // bl

  v2 = *((_QWORD *)this + 1);
  v4 = 0;
  if ( (unsigned __int8)DpiCompareAcpiPaths(a2, v2 + 16) )
    return 1;
  WdLogSingleEntry2(2LL, a2->Buffer, *(_QWORD *)(v2 + 24));
  WdLogGlobalForLineNumber = 1471;
  return v4;
}
