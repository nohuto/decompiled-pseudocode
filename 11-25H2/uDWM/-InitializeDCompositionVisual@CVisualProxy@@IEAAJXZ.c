/*
 * XREFs of ?InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ @ 0x1800076D0
 * Callers:
 *     ?InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x18000568C (-InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z.c)
 *     ?Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180007640 (-Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CRedirectVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800747CC (-Initialize@CRedirectVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800AB61C (-Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisualProxy::InitializeDCompositionVisual(CVisualProxy *this)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, _QWORD, GUID *, __int64); // rbp
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64))(*(_QWORD *)v2 + 112LL);
  v4 = (_QWORD *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  *v4 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(
         v4,
         *((_QWORD *)this + 2));
  return v3(v2, *(unsigned int *)(v7 + 24), &GUID_f2011fdf_3a34_4ec6_ae59_2ddd1bc9b6a1, v6);
}
