/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800B88F0
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B8174 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B8410 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B89E0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  __int64 v2; // r8

  CIndirectTouchVisual::StopTimer(this);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0, v2);
}
