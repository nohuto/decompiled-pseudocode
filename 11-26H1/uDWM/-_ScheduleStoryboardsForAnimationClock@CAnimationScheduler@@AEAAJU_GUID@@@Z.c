/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180069D8C (-_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001E430 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18003C8E4 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z @ 0x18003D694 (-_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18003D6E4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?Block@CStoryboard@@QEAAXXZ @ 0x1800C076C (-Block@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v4; // ebx
  char v5; // r14
  __int64 v6; // rbp
  __int32 StoryboardHighestPri; // r12d
  __int64 v9; // rax
  __m128i *v10; // rdi
  unsigned __int64 v11; // rax
  CAnimationScheduler *v12; // rcx
  int v13; // eax
  int started; // eax

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  StoryboardHighestPri = CAnimationScheduler::_GetStoryboardHighestPri();
  if ( !*((_DWORD *)this + 10) )
    return (unsigned int)v4;
  do
  {
    v9 = *((_QWORD *)this + 2);
    v10 = *(__m128i **)(v9 + 8 * v6);
    if ( v10 )
      CBaseObject::AddRef(*(CBaseObject **)(v9 + 8 * v6));
    v11 = v10[3].m128i_i64[0] - *(_QWORD *)&a2->Data1;
    if ( !v11 )
      v11 = _mm_srli_si128(v10[3], 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
    if ( !v11 )
    {
      if ( v4 < 0 )
        goto LABEL_20;
      v12 = (CAnimationScheduler *)v10[1].m128i_u32[2];
      if ( (unsigned int)v12 > 1 )
        goto LABEL_13;
      if ( v10[4].m128i_i32[0] >= StoryboardHighestPri )
      {
        v4 = CAnimationScheduler::_ScheduleStoryboard(v12, (struct CStoryboard *)v10);
        if ( v4 >= 0 )
        {
          v5 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, v10[4].m128i_i32[0]);
          goto LABEL_13;
        }
LABEL_20:
        CStoryboard::Abandon((CStoryboard *)v10);
        goto LABEL_13;
      }
      CStoryboard::Block((CStoryboard *)v10);
      v4 = 0;
    }
LABEL_13:
    CStoryboard::Release((CStoryboard *)v10);
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < *((_DWORD *)this + 10) );
  if ( v4 >= 0 && v5 )
  {
    v13 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 24));
    v4 = v13;
    if ( v13 >= 0 )
    {
      started = CAnimationScheduler::_ScheduleStartAnimations(this);
      v4 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x28Eu, 0LL);
      else
        CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x28Bu, 0LL);
    }
  }
  return (unsigned int)v4;
}
