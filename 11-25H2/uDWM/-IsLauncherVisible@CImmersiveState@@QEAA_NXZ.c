/*
 * XREFs of ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B8A38
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180045A38 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800C7DA0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveState::IsLauncherVisible(CImmersiveState *this)
{
  return *((_BYTE *)this + 56);
}
