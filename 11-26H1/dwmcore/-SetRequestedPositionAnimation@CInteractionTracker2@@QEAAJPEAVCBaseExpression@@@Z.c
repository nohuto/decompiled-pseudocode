/*
 * XREFs of ?SetRequestedPositionAnimation@CInteractionTracker2@@QEAAJPEAVCBaseExpression@@@Z @ 0x18021F418
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CInteractionTracker2::SetRequestedPositionAnimation(
        CInteractionTracker2 *this,
        struct CBaseExpression *a2)
{
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + 120, (__int64)a2);
  return 0LL;
}
