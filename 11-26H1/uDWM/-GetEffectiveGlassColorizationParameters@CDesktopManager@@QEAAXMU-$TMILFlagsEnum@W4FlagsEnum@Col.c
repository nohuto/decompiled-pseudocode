/*
 * XREFs of ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x18001F890
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18001F7F0 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18004BC24 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800CB5FC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F900 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveGlassColorizationParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        _OWORD *a5)
{
  _OWORD *v5; // r10
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = a5;
  *a5 = *(_OWORD *)(a1 + 484);
  v5[1] = *(_OWORD *)(a1 + 500);
  v7 = *(_DWORD *)(a1 + 440);
  if ( !a4 && *(_BYTE *)(a1 + 26) )
    a3 = (unsigned int)a3 | 4;
  if ( *(_BYTE *)(a1 + 516) )
    a3 = (unsigned int)a3 | 0x20;
  return CGlassColorizationParameters::AdjustWindowColorization(v5, &v7, a3, (unsigned int)a3);
}
