/*
 * XREFs of ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x1801DB7C0
 * Callers:
 *     ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C82C (-SetPlaybackRate@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResourc.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 */

void __fastcall CAnimationController::OnPlaybackRateChanged(CAnimationController *this)
{
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  CExpressionManager::Invalidate(*(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL));
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
}
