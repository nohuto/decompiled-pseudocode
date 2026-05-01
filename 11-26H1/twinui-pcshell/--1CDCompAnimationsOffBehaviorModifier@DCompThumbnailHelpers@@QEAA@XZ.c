/*
 * XREFs of ??1CDCompAnimationsOffBehaviorModifier@DCompThumbnailHelpers@@QEAA@XZ @ 0x18052819C
 * Callers:
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18052BEE0 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$7 @ 0x1806F3899 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
