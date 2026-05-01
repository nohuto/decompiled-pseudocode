/*
 * XREFs of ?reset@unique_animation_clock@@QEAAXXZ @ 0x180512FAC
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18012FFFC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??1unique_animation_clock@@QEAA@XZ @ 0x18050EBF8 (--1unique_animation_clock@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall unique_animation_clock::reset(unique_animation_clock *this)
{
  __int128 v1; // xmm0
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *(_OWORD *)this;
    *((_BYTE *)this + 16) = 0;
    v2 = v1;
    DwmpEndAnimationClock(&v2);
  }
}
