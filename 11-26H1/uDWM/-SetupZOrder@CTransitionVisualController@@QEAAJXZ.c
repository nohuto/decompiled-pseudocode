/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002B6AC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180028940 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x18002B8D4 (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18002CB78 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // ebx
  unsigned int v3; // ecx
  signed int v4; // ebp
  char v5; // r10
  unsigned int j; // ebp
  __int64 v8; // r14
  CTransitionVisualController *v9; // rcx
  unsigned int v10; // eax
  bool v11; // cc
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int i; // r15d
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // r14
  CAnimationComponent *v24; // r12
  int WindowZOrder; // ebx

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( v2 < 0 )
  {
    v18 = 1706;
  }
  else
  {
    v2 = CTransitionVisualController::_EnsureAnimationComponentsWindowZOrder(this);
    if ( v2 < 0 )
    {
      v18 = 1707;
    }
    else
    {
      v3 = *((_DWORD *)this + 34);
      v4 = 0;
      if ( (int)(v3 - 1) > 0 )
      {
        v19 = *((_DWORD *)this + 34);
        do
        {
          v3 = v19;
          for ( i = 0; (int)i < (int)(v3 - v4 - 1); v3 = *((_DWORD *)this + 34) )
          {
            v21 = *((_QWORD *)this + 14);
            v22 = i++;
            v23 = *(_QWORD *)(v21 + 8LL * i);
            v24 = *(CAnimationComponent **)(v21 + 8 * v22);
            if ( !*((_BYTE *)v24 + 65) && !*(_BYTE *)(v23 + 65) )
            {
              WindowZOrder = CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(v21 + 8LL * i));
              if ( (int)CAnimationComponent::GetWindowZOrder(v24) > WindowZOrder )
              {
                *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * i) = v24;
                *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v22) = v23;
              }
            }
          }
          ++v4;
          v19 = v3;
        }
        while ( v4 < (int)(v3 - 1) );
      }
      v5 = 1;
      while ( v3 > 1 && v5 )
      {
        v10 = v3 - 1;
        v11 = v3-- <= 1;
        v5 = 0;
        if ( !v11 )
        {
          v12 = 8LL;
          v13 = v10;
          v14 = 0LL;
          do
          {
            v15 = *((_QWORD *)this + 14);
            v16 = *(_QWORD *)(v14 + v15);
            v17 = *(_QWORD *)(v12 + v15);
            if ( !*(_BYTE *)(v16 + 65)
              && !*(_BYTE *)(v17 + 65)
              && *(_QWORD *)(v16 + 144) == *(_QWORD *)(v17 + 144)
              && *(_DWORD *)(v16 + 56) > *(_DWORD *)(v17 + 56) )
            {
              *(_QWORD *)(v14 + v15) = v17;
              v5 = 1;
              *(_QWORD *)(v12 + *((_QWORD *)this + 14)) = v16;
            }
            v14 += 8LL;
            v12 += 8LL;
            --v13;
          }
          while ( v13 );
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 34); ++j )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * j);
        if ( !*(_BYTE *)(v8 + 65) )
        {
          v2 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v8 + 40) + 8LL), 0);
          if ( v2 < 0 )
          {
            v18 = 1760;
            goto LABEL_21;
          }
          CTransitionVisualController::_UpdateClipping(v9, (struct CAnimationComponent *)v8);
        }
      }
      v2 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
      if ( v2 >= 0 )
        return (unsigned int)v2;
      v18 = 1768;
    }
  }
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v2,
    v18,
    0LL);
  CTransitionVisualController::CleanupTransition(this);
  return (unsigned int)v2;
}
