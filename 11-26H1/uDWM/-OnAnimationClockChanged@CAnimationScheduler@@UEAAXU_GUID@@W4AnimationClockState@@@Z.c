/*
 * XREFs of ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18002A110 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002A260 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18003D6E4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18003D794 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003E6A4 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C2568 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 */

void __fastcall CAnimationScheduler::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  __int64 i; // rbx
  __m128i *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 j; // rbx
  __m128i *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 k; // rbp
  __int64 v18; // rax
  __m128i *v19; // rbx
  unsigned __int64 v20; // rax
  struct _GUID v21; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              CAnimationScheduler::_RecycleAbandonedStoryboards((CAnimationScheduler *)(a1 - 8));
          }
          else
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 32); i = (unsigned int)(i + 1) )
            {
              v12 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 8 * i);
              v13 = v12[3].m128i_i64[0] - *(_QWORD *)&a2->Data1;
              if ( !v13 )
                v13 = _mm_srli_si128(v12[3], 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
              if ( !v13 )
                CAnimationScheduler::OnAnimationComplete((CAnimationScheduler *)(a1 - 8), v12[4].m128i_i32[2]);
            }
          }
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 32); j = (unsigned int)(j + 1) )
          {
            v15 = *(__m128i **)(*(_QWORD *)(a1 + 8) + 8 * j);
            v16 = v15[3].m128i_i64[0] - *(_QWORD *)&a2->Data1;
            if ( !v16 )
              v16 = _mm_srli_si128(v15[3], 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
            if ( !v16 && v15[1].m128i_i32[2] != 4 )
              CStoryboard::Abandon((CStoryboard *)v15);
          }
        }
      }
      else
      {
        v21 = *a2;
        CAnimationScheduler::_ScheduleStoryboardsForAnimationClock((CAnimationScheduler *)(a1 - 8), &v21);
      }
    }
    else
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 32); k = (unsigned int)(k + 1) )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = *(__m128i **)(v18 + 8 * k);
        if ( v19 )
          CBaseObject::AddRef(*(CBaseObject **)(v18 + 8 * k));
        v20 = v19[3].m128i_i64[0] - *(_QWORD *)&a2->Data1;
        if ( !v20 )
          v20 = _mm_srli_si128(v19[3], 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
        if ( !v20
          && !v19[1].m128i_i32[2]
          && (int)CStoryboard::OnStoryboardTimeout((CStoryboard *)v19) >= 0
          && v19[1].m128i_i32[2] == 4 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards((CAnimationScheduler *)(a1 - 8), v19[4].m128i_i32[0]);
        }
        CStoryboard::Release((CStoryboard *)v19);
      }
    }
  }
  else
  {
    v21 = *a2;
    CAnimationScheduler::_SetStoryboardTriggerForAnimationClock((CAnimationScheduler *)(a1 - 8), &v21);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
