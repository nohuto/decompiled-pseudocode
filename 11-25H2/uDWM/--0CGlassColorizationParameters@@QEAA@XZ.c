/*
 * XREFs of ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18000F33C
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18000E950 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18001306C (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180072DF8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180072FFC (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800ABE5C (--0CDesktopManager@@AEAA@XZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800D00CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x1800E506C (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ @ 0x18000F354 (-ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ.c)
 */

CGlassColorizationParameters *__fastcall CGlassColorizationParameters::CGlassColorizationParameters(
        CGlassColorizationParameters *this)
{
  CGlassColorizationParameters *v1; // rcx

  CGlassColorizationParameters::ResetToDefaults(this);
  return v1;
}
