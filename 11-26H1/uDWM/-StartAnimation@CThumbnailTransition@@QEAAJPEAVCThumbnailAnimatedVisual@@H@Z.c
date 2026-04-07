/*
 * XREFs of ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800C92B8
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800C9470 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThumbnailTransition::StartAnimation(
        CThumbnailTransition *this,
        struct CThumbnailAnimatedVisual *a2)
{
  CAnimationEngine *v4; // rsi
  int started; // ebx
  int v6; // r10d
  unsigned int v7; // eax
  struct IAnimatedVisual *v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)a2 + 33) + 264LL))((char *)a2 + 264);
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                v4,
                (struct IAnimationListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v6 = started;
    if ( started < 0 )
    {
      v7 = 29;
    }
    else
    {
      v9 = (struct IAnimatedVisual *)((*((_QWORD *)this + 3) + 264LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL));
      started = CAnimationEngine::ScheduleStartAnimation(v4, 62, &v9, 1u, (unsigned int *)this + 8);
      v6 = started;
      if ( started >= 0 )
      {
        *((_BYTE *)this + 36) = 1;
LABEL_11:
        CAnimationEngine::Release(v4);
        goto LABEL_12;
      }
      v7 = 35;
    }
  }
  else
  {
    started = -2147024882;
    v6 = -2147024882;
    v7 = 28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
  CThumbnailTransition::_CleanupAnimation(this);
  if ( v4 )
    goto LABEL_11;
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return (unsigned int)started;
}
