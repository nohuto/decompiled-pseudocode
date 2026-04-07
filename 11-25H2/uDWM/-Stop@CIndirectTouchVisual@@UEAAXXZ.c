/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800B99E0
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B9260 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B94E0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B9AC0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual::StopTimer(this);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
