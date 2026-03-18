/*
 * XREFs of ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x18027E12C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18021DFE8 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18021F66C (-DiscardCachesForReceiver@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::OnDestroyingReceivingVisual(CProjectedShadowReceiver *this)
{
  CProjectedShadowScene **v2; // rsi
  CProjectedShadowScene **i; // rbx

  *((_QWORD *)this + 9) = 0LL;
  CProjectedShadowReceiver::InvalidateMaskContent((volatile signed __int32 **)this);
  v2 = (CProjectedShadowScene **)*((_QWORD *)this + 11);
  for ( i = (CProjectedShadowScene **)*((_QWORD *)this + 10); i != v2; ++i )
    CProjectedShadowScene::DiscardCachesForReceiver(*i, this);
}
