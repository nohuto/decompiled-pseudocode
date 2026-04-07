/*
 * XREFs of ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960
 * Callers:
 *     ?StartAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHHH@Z @ 0x18007E6E0 (-StartAnimation@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18006F030 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StartAnimation(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        unsigned int a2,
        int a3)
{
  __int64 v6; // r9
  int v7; // eax
  void *v8; // rbx
  int v9; // r8d
  CAnimationEngine *v10; // rax
  int started; // eax
  CAnimationEngine *v12; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-30h]
  void *lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v19; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
  CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*((CAnimatedTransitionVisual **)this + 5), a2, a3);
  *(_OWORD *)lpMem = 0LL;
  v16 = 0LL;
  v17 = 0;
  v20 = *((_QWORD *)this + 5);
  v19 = &v20;
  v7 = DynArrayImpl<0>::Grow((__int64)lpMem, 8u, 1, v6, (unsigned __int64 *)&v19);
  v8 = lpMem[0];
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC2u, 0LL);
  }
  else
  {
    v9 = v17;
    *(_QWORD *)((char *)lpMem[0] + (unsigned int)(8 * v17)) = *v19;
    v17 = v9 + 1;
  }
  v10 = CDesktopManager::AcquireAnimationEngine();
  started = CAnimationEngine::ScheduleStartAnimation(
              v10,
              (const struct std::nothrow_t *)a2,
              (__int64)lpMem,
              (unsigned int *)this + 14);
  if ( started < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x79,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)started,
      v14);
  v12 = CDesktopManager::AcquireAnimationEngine();
  CAnimationEngine::RegisterForAnimationCompleteNotification(
    v12,
    (struct IAnimationListener *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)));
  v13 = CContainerVisual::AddChild(
          *((CContainerVisual **)this + 6),
          (struct CVisual *)((*((_QWORD *)this + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                            + 5) >> 64)));
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v13,
      v14);
  *((_BYTE *)this + 60) = 1;
  if ( v8 != lpMem[1] )
    DefaultHeap::Free(v8);
}
