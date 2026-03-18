/*
 * XREFs of ?SetInertiaModifierScaleAnimation@CInteractionTracker2@@QEAAJPEAVCConditionalExpression@@@Z @ 0x18021F438
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CInteractionTracker2::SetInertiaModifierScaleAnimation(
        CInteractionTracker2 *this,
        struct CConditionalExpression *a2)
{
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 114, (__int64)a2);
  return 0LL;
}
