/*
 * XREFs of ?Release@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x180034300
 * Callers:
 *     ?unconditional_release_ref@?$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180095754 (-unconditional_release_ref@-$com_ptr@UWindowMoveResizeCrossfadeTransition@implementation@Private.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x180033EF0 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x180034850 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::Release(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int32 v5; // esi
  volatile signed __int64 *v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // r8
  void *v12; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
  v3 = v2;
  v4 = v2;
  while ( 1 )
  {
    v13 = v2;
    if ( v2 < 0 )
      break;
    v5 = v3 - 1;
    v14 = v3 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v13);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v14);
    v6 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
    v2 = _InterlockedCompareExchange64(v6, v7, v8);
    v4 = v2;
    v3 = v2;
    if ( v8 == v2 )
      goto LABEL_4;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v4 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release(v12);
LABEL_4:
  if ( !v5 )
  {
    v15 = 1LL;
    winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
    v9 = std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v15);
    *v10 = v9;
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, 1LL);
  }
  return v5;
}
