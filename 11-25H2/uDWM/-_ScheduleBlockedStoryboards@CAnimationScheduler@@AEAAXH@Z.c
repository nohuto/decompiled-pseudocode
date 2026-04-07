/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18006D8F4
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180050C10 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800243B0 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x18006D9D0 (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_ScheduleBlockedStoryboards(CAnimationScheduler *this, int a2)
{
  __int64 v2; // rbp
  CAnimationScheduler *i; // rsi
  __int64 v5; // rax
  CStoryboard *v6; // rbx
  __int64 j; // rdi

  v2 = 0LL;
  for ( i = this; (unsigned int)v2 < *((_DWORD *)i + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *((_QWORD *)i + 2);
    v6 = *(CStoryboard **)(v5 + 8 * v2);
    if ( v6 )
      CMILRefCountBase::AddRef(*(CMILRefCountBase **)(v5 + 8 * v2));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 10); j = (unsigned int)(j + 1) )
    {
      this = *(CAnimationScheduler **)(*((_QWORD *)i + 2) + 8 * j);
      if ( *((_DWORD *)this + 6) != 4 && CStoryboard::ShouldBlock(this, v6) )
      {
        CStoryboard::Abandon(v6);
        break;
      }
    }
    if ( *((_DWORD *)v6 + 16) <= a2 && *((_DWORD *)v6 + 6) == 1 )
      CAnimationScheduler::_ScheduleStoryboard(this, v6);
    CStoryboard::Release(v6);
  }
}
