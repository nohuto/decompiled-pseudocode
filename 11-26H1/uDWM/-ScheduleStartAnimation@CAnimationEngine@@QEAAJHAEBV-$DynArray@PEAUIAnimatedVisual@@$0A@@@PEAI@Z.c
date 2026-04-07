/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180084960 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v6; // r14d
  unsigned int v8; // ebx
  struct IAnimatedVisual **v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r9d
  int started; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h] BYREF

  v6 = (int)a2;
  v8 = -2147024809;
  v9 = 0LL;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v14 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v9 = (struct IAnimatedVisual **)operator new(saturated_mul(*(unsigned int *)(a3 + 24), 8uLL));
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_DWORD *)(a3 + 24);
      if ( v11 )
      {
        do
        {
          v9[v10] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
          v11 = *(_DWORD *)(a3 + 24);
        }
        while ( (unsigned int)v10 < v11 );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, v6, v9, v11, a4);
      v8 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xA1u, 0LL);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
        goto LABEL_7;
      }
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x9Bu, 0LL);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
LABEL_7:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v9, a2);
  return v8;
}
