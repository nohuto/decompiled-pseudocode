/*
 * XREFs of ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180095E40
 * Callers:
 *     ?StartAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHHH@Z @ 0x18008F160 (-StartAnimation@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015874 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180023604 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18006DE48 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18006E6FC (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18007D920 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StartAnimation(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        unsigned int a2,
        int a3)
{
  __int64 v6; // r8
  unsigned int v7; // edx
  int v8; // eax
  CAnimationEngine *v9; // rax
  int started; // eax
  CAnimationEngine *v11; // rax
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-38h]
  void *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-14h]
  unsigned int v16; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*((CAnimatedTransitionVisual **)this + 5), a2, a3);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v14, 0LL, 0);
  v6 = *((_QWORD *)this + 5);
  v18 = v6;
  v7 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  else if ( v7 > v15 )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 8, 1, &v18);
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xBEu, 0LL);
  }
  else
  {
    *((_QWORD *)v14[0] + v16) = v6;
    v16 = v7;
  }
  v9 = CDesktopManager::AcquireAnimationEngine();
  started = CAnimationEngine::ScheduleStartAnimation(
              v9,
              (const struct std::nothrow_t *)a2,
              (__int64)v14,
              (unsigned int *)this + 14);
  if ( started < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)started,
      v13);
  v11 = CDesktopManager::AcquireAnimationEngine();
  CAnimationEngine::RegisterForAnimationCompleteNotification(
    v11,
    (struct IAnimationListener *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)));
  v12 = CContainerVisual::AddChild(
          *((CContainerVisual **)this + 6),
          (struct CVisual *)((*((_QWORD *)this + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                            + 5) >> 64)));
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v12,
      v13);
  *((_BYTE *)this + 60) = 1;
  DynArrayImpl<0>::~DynArrayImpl<0>(v14);
}
