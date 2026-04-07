/*
 * XREFs of ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800D6A3C
 * Callers:
 *     ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D71AC (-PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800D8400 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800DD8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180030AC4 (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x18004EE40 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$attach_abi@UIWeakReferenceSource@impl@winrt@@@winrt@@YAXAEAU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@0@PEAUIWeakReferenceSource@impl@0@@Z @ 0x180086A74 (--$attach_abi@UIWeakReferenceSource@impl@winrt@@@winrt@@YAXAEAU-$com_ptr@UIWeakReferenceSource@i.c)
 *     _CxxThrowException_0 @ 0x1800E6C70 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  __int64 v4; // rbx
  int v5; // eax
  void **pExceptionObject; // [rsp+28h] [rbp-18h] BYREF
  const char *v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+38h] [rbp-8h]
  int v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    v8 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  v11 = 0LL;
  winrt::attach_abi<winrt::impl::IWeakReferenceSource>(&v11, weak_ref);
  *a2 = 0LL;
  LODWORD(pExceptionObject) = 7752;
  v8 = "OneCoreUap\\Internal\\BuildMetadata\\internal\\cppwinrt\\winrt\\base.h";
  v9 = 0LL;
  v4 = v11;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 24LL))(v11, a2);
  winrt::check_hresult(&v10, v5, (__int64)&pExceptionObject);
  if ( v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v11);
  return a2;
}
