/*
 * XREFs of ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180082148 (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B735C (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800B9014 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800C5600 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ @ 0x1800C5F24 (-_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5A44 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E03BC (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleInstruction::SetSolidFill(
        struct _D3DCOLORVALUE *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(struct _D3DCOLORVALUE *)&this[1].r = *(const struct _D3DCOLORVALUE *)&a2->r;
  return result;
}
