/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400076D4
 * Callers:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140007470 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x14009756C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall GetSizeFromGammaRampType(enum _D3DDDI_GAMMARAMP_TYPE a1)
{
  __int64 v2; // rbx

  if ( a1 == D3DDDI_GAMMARAMP_DEFAULT )
    return 0LL;
  if ( a1 == D3DDDI_GAMMARAMP_RGB256x3x16 )
    return 1536LL;
  if ( a1 != D3DDDI_GAMMARAMP_DXGI_1 )
  {
    if ( a1 == D3DDDI_GAMMARAMP_MATRIX_3x4 )
      return 49204LL;
    if ( a1 == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
      return 98352LL;
    v2 = a1;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 53;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Invalide GAMMA Ramp type 0x%I64x.",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  return 12324LL;
}
