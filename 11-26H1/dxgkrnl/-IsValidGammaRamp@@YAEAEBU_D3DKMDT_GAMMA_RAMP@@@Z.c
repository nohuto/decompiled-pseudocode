/*
 * XREFs of ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x14009756C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140097080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402DCE54 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400076D4 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

char __fastcall IsValidGammaRamp(const struct _D3DKMDT_GAMMA_RAMP *a1)
{
  char v2; // di
  enum _D3DDDI_GAMMARAMP_TYPE Type; // ecx
  SIZE_T DataSize; // rbx

  v2 = 1;
  Type = a1->Type;
  if ( Type != D3DDDI_GAMMARAMP_DEFAULT && (unsigned int)(Type - 2) > 3 )
    return 0;
  DataSize = a1->DataSize;
  if ( DataSize != GetSizeFromGammaRampType(Type) || a1->Type != D3DDDI_GAMMARAMP_DEFAULT && !a1->Data.pRgb256x3x16 )
    return 0;
  return v2;
}
