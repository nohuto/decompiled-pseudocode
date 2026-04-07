/*
 * XREFs of ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B7A10
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C1DA0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveState::IsLauncherVisible(CImmersiveState *this)
{
  return *((_BYTE *)this + 56);
}
