/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14033F748
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x14033E1B0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14033EDCC (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(unsigned int a1)
{
  if ( a1 == 1 || a1 == 2 || a1 == 3 || a1 == 4 || a1 == 5 )
    return a1;
  if ( a1 == 253 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 940;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Scaling != D3DKMDT_VPPS_PREFERRED",
      940LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 128LL;
}
