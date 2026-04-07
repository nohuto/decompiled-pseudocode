/*
 * XREFs of ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z @ 0x1800D5914
 * Callers:
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6018 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D622C (-PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D70BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?AddRef@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAAIXZ @ 0x180033F44 (-AddRef@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800490E4 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180049258 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180093F40 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18009A400 (-unconditional_release_ref@-$com_ptr@UScreenRotationTransition@implementation@Private@Transition.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationTransition@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800D47F8 (--$as@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7044 (-UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@wi.c)
 *     ?log@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXPEBG@Z @ 0x1800D7B2C (-log@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitio.c)
 *     ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z @ 0x1800E1354 (-SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::DelayNextAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        const enum winrt::Udwm::Transitions::Private::implementation::RotationTimelineReason *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rbx
  CMILRefCountBase *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CMILRefCountBase *v14; // [rsp+58h] [rbp+10h] BYREF
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *v15; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_DWORD *)a2 == 1 )
  {
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
      (char *)this + 104,
      L"Create delay for first animation");
    *((_BYTE *)this + 82) = 1;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x135,
        (int)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
        a4);
    tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::log(
      (char *)this + 104,
      L"Create delay for second animation");
  }
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::UnregisterGlobalTimeChanged(this);
  v6 = *((_QWORD *)this + 7);
  v15 = this;
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::AddRef((__int64)this);
  winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,0>(
    &v14,
    (__int64 *)this);
  CGlobalTimeTrackVisual::SetTransitionHandler(v6, &v14);
  winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition>::unconditional_release_ref((__int64 *)&v15);
  v7 = (CMILRefCountBase *)DefaultHeap::AllocClear(0x78uLL);
  v14 = v7;
  if ( v7 )
    v7 = (CMILRefCountBase *)CTimeline<float>::CTimeline<float>((__int64)v7, v8, v9, v10, 0);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((CTimelineBase **)this + 11, v7);
  v11 = CDesktopManager::RegisterForGlobalTimeChangeNotification(*((struct CVisual **)this + 7));
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      322LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.screenrotationtransition.cpp",
      (const char *)(unsigned int)v11,
      v12);
  *((_DWORD *)this + 21) = *(_DWORD *)a2;
}
