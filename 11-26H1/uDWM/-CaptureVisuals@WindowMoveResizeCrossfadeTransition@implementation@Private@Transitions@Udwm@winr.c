/*
 * XREFs of ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z @ 0x180042200
 * Callers:
 *     ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x180030A24 (-PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?GetMaximizeSnapStartRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180040568 (-GetMaximizeSnapStartRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3D.c)
 *     ?IsFullscreen@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800406C8 (-IsFullscreen@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Tran.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180042430 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?TransferTransitionVisualAndAnimationEngine@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x180042518 (-TransferTransitionVisualAndAnimationEngine@-$consume_Udwm_Transitions_ITransitionState@UITransi.c)
 *     ?CreateSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBUTopLevelWindow3DWrapper@Transitions@Udwm@3@@Z @ 0x180071AFC (-CreateSnapshotVisual@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@.c)
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18007BF74 (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTr_ea_18007BF74.c)
 *     ?SkipRestoreFromMaximizeTransition@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007DC20 (-SkipRestoreFromMaximizeTransition@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLeve.c)
 *     ?SkipRestoreFromMaximizeTransition@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800D6094 (-SkipRestoreFromMaximizeTransition@-$consume_Udwm_Transitions_ITopLevelWindow3DWrap_ea_1800D6094.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::CaptureVisuals(
        __int64 a1,
        int a2)
{
  __int64 *v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF

  v4 = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::TransferTransitionVisualAndAnimationEngine(
                    a1 + 24,
                    &v9);
  winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((__int64 *)(a1 + 32), v4);
  if ( v9 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v9);
  if ( a2 == 2
    && winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::IsFullscreen((__int64 **)(a1 + 32))
    || a2 == 3
    && (unsigned __int8)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::SkipRestoreFromMaximizeTransition(a1 + 32) )
  {
    LOBYTE(v6) = a2 == 2;
    winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::SkipRestoreFromMaximizeTransition(
      a1 + 32,
      v6);
    v9 = 0LL;
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((__int64 *)(a1 + 32), &v9);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  v9 = 0LL;
  result = winrt::Windows::Foundation::operator!=(a1 + 32, &v9);
  if ( (_BYTE)result )
  {
    v7 = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateSnapshotVisual(
                      a1 + 24,
                      &v9,
                      a1 + 32);
    winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=((__int64 *)(a1 + 40), v7);
    if ( v9 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v9);
    *(_OWORD *)(a1 + 76) = *winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetMaximizeSnapStartRect(
                              a1 + 32,
                              &v8);
    return winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::BeginRect(
             a1 + 40,
             a1 + 76);
  }
  return result;
}
