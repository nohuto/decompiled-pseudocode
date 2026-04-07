/*
 * XREFs of ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180044E38
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180002958 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180043518 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z @ 0x180099F6C (-IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z @ 0x18009A348 (-IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z.c)
 */

char __fastcall CImmersiveState::IsLauncherShownAboveWindow(CImmersiveState *this, const struct CWindowData *a2)
{
  char IsImmersiveAppBand; // al
  const struct tagRECT *v3; // rdx
  unsigned int v4; // ecx
  CImmersiveState *v5; // r8
  char v6; // r9
  int v7; // eax

  IsImmersiveAppBand = CImmersiveState::IsImmersiveAppBand(*((unsigned int *)a2 + 32), a2, this);
  v6 = 0;
  if ( IsImmersiveAppBand || v4 <= 0xC && (v7 = 4130, _bittest(&v7, v4)) )
  {
    if ( CImmersiveState::IsLauncherShownAboveRect(v5, v3 + 3) )
      return 1;
  }
  return v6;
}
