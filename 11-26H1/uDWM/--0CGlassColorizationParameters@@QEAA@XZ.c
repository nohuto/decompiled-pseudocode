/*
 * XREFs of ??0CGlassColorizationParameters@@QEAA@XZ @ 0x180020190
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18001F7F0 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x18004BC24 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18004E460 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18004E904 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180071F78 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800CB5FC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x1800E1158 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ @ 0x1800201B0 (-ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ.c)
 */

CGlassColorizationParameters *__fastcall CGlassColorizationParameters::CGlassColorizationParameters(
        CGlassColorizationParameters *this)
{
  CGlassColorizationParameters *v1; // rcx

  CGlassColorizationParameters::ResetToDefaults(this);
  return v1;
}
