/*
 * XREFs of ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x180505D7C
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x180509A70 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$7 @ 0x1806CB31E (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier::~CDCompAnimationsOffBehaviorModifier(
        DCompThumbnailHelpers::CDCompAnimationsOffBehaviorModifier *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
}
