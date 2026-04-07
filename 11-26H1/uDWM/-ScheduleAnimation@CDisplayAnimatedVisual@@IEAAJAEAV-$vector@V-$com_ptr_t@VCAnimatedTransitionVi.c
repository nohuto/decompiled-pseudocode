/*
 * XREFs of ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800746B0 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18007B13C (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800AFBAC (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B062C (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B09B4 (-ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0FDC (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B13E0 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B1A5C (-ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B1BE0 (-StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x180038194 (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18008DAD0 (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::ScheduleAnimation(
        unsigned __int64 a1,
        CAnimatedTransitionVisual ***a2,
        struct IAnimationListener *a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  CAnimationEngine *v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  CAnimatedTransitionVisual **v13; // r15
  CAnimatedTransitionVisual **v14; // r14
  struct IAnimatedVisual **v15; // rdi
  __int64 v16; // r9
  CAnimatedTransitionVisual *v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  int started; // eax
  int v22; // eax
  CAnimationEngine *v23; // [rsp+30h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  unsigned int v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  CAnimatedTransitionVisual **v28; // [rsp+A0h] [rbp+40h] BYREF
  CAnimatedTransitionVisual *v29; // [rsp+A8h] [rbp+48h] BYREF

  v28 = (CAnimatedTransitionVisual **)a1;
  if ( *a2 == a2[1] )
    return 0LL;
  v10 = CDesktopManager::AcquireAnimationEngine();
  v23 = v10;
  if ( v10 )
  {
    *(_OWORD *)lpMem = 0LL;
    v25 = 0LL;
    v12 = 0;
    v26 = 0;
    v13 = a2[1];
    v14 = *a2;
    v15 = 0LL;
    while ( v14 != v13 )
    {
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*v14, a4, a5);
      v17 = *v14;
      v29 = *v14;
      v18 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
      }
      else if ( v18 > HIDWORD(v25) )
      {
        v28 = &v29;
        v19 = DynArrayImpl<0>::Grow((__int64)lpMem, 8u, 1, v16, (unsigned __int64 *)&v28);
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC2u, 0LL);
          v12 = v26;
          v15 = (struct IAnimatedVisual **)lpMem[0];
        }
        else
        {
          v20 = v26;
          v15 = (struct IAnimatedVisual **)lpMem[0];
          *((_QWORD *)lpMem[0] + v26) = *v28;
          v12 = v20 + 1;
          v26 = v12;
        }
      }
      else
      {
        v15[v12++] = v17;
        v26 = v18;
      }
      ++v14;
    }
    started = CAnimationEngine::ScheduleStartAnimation(v10, a4, v15, v12, a6);
    v11 = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)started);
      if ( v15 != lpMem[1] )
        DefaultHeap::Free(v15);
      CAnimationEngine::Release(v10);
      return v11;
    }
    v22 = CAnimationEngine::RegisterForAnimationCompleteNotification(v10, a3);
    v11 = v22;
    if ( v22 >= 0 )
    {
      CBitmapSourceArray::~CBitmapSourceArray(lpMem);
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E0,
        (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v22);
      CBitmapSourceArray::~CBitmapSourceArray(lpMem);
    }
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D0,
      (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)0x8007000ELL);
  }
  wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v23);
  return v11;
}
