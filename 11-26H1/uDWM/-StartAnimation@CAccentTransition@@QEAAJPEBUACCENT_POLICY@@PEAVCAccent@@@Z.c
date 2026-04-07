/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18003CE98 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18003E0D4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800780F8 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800950EC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x18009544C (--0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z.c)
 *     ?SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x180095624 (-SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x180095634 (-SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  CAccentTransitionAnimatedVisual *v6; // rsi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // r15
  int started; // ebx
  CAccentTransitionAnimatedVisual *v10; // rax
  char v11; // r8
  int v12; // edx
  CAccentTransitionAnimatedVisual *v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h]
  int v21; // [rsp+50h] [rbp-30h]
  struct tagRECT si128; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-18h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    CBaseObject::AddRef(a3);
  *((_BYTE *)this + 32) = 1;
  v6 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( !v7 )
  {
    v17 = 35;
LABEL_5:
    started = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v17, 0LL);
    goto LABEL_23;
  }
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
  if ( started < 0 )
  {
    v15 = 36;
    goto LABEL_22;
  }
  v10 = (CAccentTransitionAnimatedVisual *)operator new(0x48uLL);
  *(_QWORD *)&rc.left = v10;
  if ( !v10 )
  {
    v6 = 0LL;
    goto LABEL_20;
  }
  v6 = CAccentTransitionAnimatedVisual::CAccentTransitionAnimatedVisual(
         v10,
         *((struct CAccent **)this + 3),
         *((_DWORD *)a2 + 3));
  if ( !v6 )
  {
LABEL_20:
    v17 = 37;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 3) == 5 )
  {
    v11 = *(_BYTE *)(*((_QWORD *)this + 3) + 496LL);
    v12 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 81.0);
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    rc = si128;
    if ( !v11 )
      v12 = -v12;
    OffsetRect(&rc, v12, 0);
    CAccentTransitionAnimatedVisual::SetBeginRect(v6, &si128);
    CAccentTransitionAnimatedVisual::SetEndRect(v13, &rc);
  }
  *(_QWORD *)&rc.left = v6;
  v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v19, 8, 1, &rc);
  started = v14;
  if ( v14 >= 0 )
  {
    started = CAnimationEngine::ScheduleStartAnimation(
                v8,
                (const struct std::nothrow_t *)0x4A,
                (__int64)&v19,
                (unsigned int *)this + 9);
    if ( started < 0 )
    {
      v15 = 54;
    }
    else
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      if ( started >= 0 )
        goto LABEL_24;
      v15 = 56;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xC2u, 0LL);
    v15 = 50;
  }
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v15, 0LL);
  if ( started < 0 )
  {
LABEL_23:
    CAccentTransition::CleanupAnimation(this);
    if ( !v8 )
      goto LABEL_25;
  }
LABEL_24:
  CAnimationEngine::Release(v8);
LABEL_25:
  if ( v6 )
    CBaseObject::Release((CAccentTransitionAnimatedVisual *)((char *)v6 + 8));
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return (unsigned int)started;
}
