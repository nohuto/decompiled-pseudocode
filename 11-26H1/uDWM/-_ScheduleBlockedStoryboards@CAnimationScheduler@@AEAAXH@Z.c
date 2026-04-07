/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18003D6E4
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18003C8E4 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x18003E1B8 (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
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
      CBaseObject::AddRef(*(CBaseObject **)(v5 + 8 * v2));
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
