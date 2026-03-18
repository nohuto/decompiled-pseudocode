/*
 * XREFs of ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800232A8
 * Callers:
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C8E4 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 */

void __fastcall CAnimationController::OnProgressChanged(CAnimationController *this)
{
  CComposition *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  v2 = g_pComposition;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 816LL) + 417LL) = 1;
  v3 = *((_QWORD *)v2 + 110);
  if ( v3 == *((_QWORD *)v2 + 111) )
  {
    v4 = 1LL;
    if ( v3 != -1 )
      v4 = v3 + 1;
    if ( v4 != v3 )
      ScheduleCompositionPass(0LL, 8LL);
  }
  if ( *((_QWORD *)this + 6) )
    CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  (*(void (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
}
