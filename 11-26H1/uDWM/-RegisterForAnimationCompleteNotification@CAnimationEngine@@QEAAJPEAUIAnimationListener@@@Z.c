/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x18003DB08 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ @ 0x180071D64 (-_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180084740 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800C92B8 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct IAnimationListener *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !*((_BYTE *)this + 120) )
  {
    v3 = -2147221008;
    v11 = 548;
    goto LABEL_18;
  }
  v3 = 0;
  v4 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v6 = (_QWORD *)((char *)this + 72);
  while ( (unsigned int)v5 < *((_DWORD *)this + 24) )
  {
    if ( *(struct IAnimationListener **)(*v6 + 8 * v5) == v12 )
      goto LABEL_19;
    if ( (int)v4 < 0 && !*(_QWORD *)(*v6 + 8 * v5) )
      v4 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
  }
  if ( (int)v4 >= 0 )
  {
    *(_QWORD *)(*v6 + 8 * v4) = v12;
    goto LABEL_19;
  }
  v7 = *((_DWORD *)this + 24);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v3 = -2147024362;
    v11 = 183;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v11, 0LL);
    goto LABEL_19;
  }
  if ( v8 > *((_DWORD *)this + 23) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8, 1, &v12);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC2u, 0LL);
  }
  else
  {
    *(_QWORD *)(*v6 + 8LL * v7) = v12;
    *((_DWORD *)this + 24) = v8;
  }
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v3;
}
