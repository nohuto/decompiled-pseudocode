/*
 * XREFs of ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x180041A78
 * Callers:
 *     ?CreateSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1800419F0 (-CreateSnapshotVisual@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180041B2C (--$as@UITransitionAnimationVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180085B4C (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    *(_QWORD *)(a1 + 104));
  v6 = v10;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
  v7 = winrt::make<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
         &v11,
         &v13);
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(a1 + 112, v7);
  if ( v11 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&v11);
  v8 = *(_QWORD *)(a1 + 112);
  *a2 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v6 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v10);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a3);
  return a2;
}
