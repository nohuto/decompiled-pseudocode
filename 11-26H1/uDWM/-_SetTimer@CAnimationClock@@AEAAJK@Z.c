/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180026998
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180024AB0 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18008C1EC (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x180026A68 (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x180026AD8 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180027D8C (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18006E624 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x180072AE4 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     ??0CTimer@@QEAA@XZ @ 0x1800751C0 (--0CTimer@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  CTimer **v2; // rdi
  int v3; // ebx
  CTimer **v6; // r14
  CTimer *v8; // rax
  CTimer *v9; // rax

  v2 = (CTimer **)((char *)this + 64);
  v3 = 0;
  v6 = (CTimer **)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    goto LABEL_2;
  v8 = (CTimer *)operator new(0x50uLL);
  if ( !v8 )
  {
    *v2 = 0LL;
    return (unsigned int)-2147024882;
  }
  v9 = CTimer::CTimer(v8);
  *v2 = v9;
  if ( !v9 )
    return (unsigned int)-2147024882;
  v3 = CTimer::SetTimerCallback(
         v9,
         (struct ITimerCallbackListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  if ( v3 < 0 )
    return (unsigned int)v3;
  v6 = (CTimer **)((char *)this + 64);
LABEL_2:
  if ( !CTimer::IsSet(*v2) || (v3 = CTimer::Cancel(*v6), v3 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CTimer::Start(*v6, a2);
    else
      CAnimationClock::_OnTimerCallback(this);
  }
  return (unsigned int)v3;
}
