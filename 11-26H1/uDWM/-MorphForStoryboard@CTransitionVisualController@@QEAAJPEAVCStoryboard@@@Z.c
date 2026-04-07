/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18003C990
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18003C8E4 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18002CB78 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18003DAE0 (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180095EB0 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180098DE0 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v2; // r14d
  __int64 i; // rbp
  __int64 v7; // rsi
  __int64 j; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  RECT v12; // xmm1
  HMONITOR v13; // rbx
  int v14; // eax
  CTransitionVisualController *v15; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v17; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 30); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8 * i);
    if ( CTransitionVisualController::_CanMorph(this, (struct CAnimationComponent *)v7) )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 34); j = (unsigned int)(j + 1) )
      {
        v9 = *((_QWORD *)this + 14);
        v10 = *(_QWORD *)(v9 + 8 * j);
        if ( v7 != v10
          && CTransitionVisualController::_CanMorph(this, *(struct CAnimationComponent **)(v9 + 8 * j))
          && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 911LL) || !*(_BYTE *)(*(_QWORD *)(v7 + 40) + 911LL)) )
        {
          v11 = *(_QWORD *)(v10 + 16);
          if ( v11 )
          {
            if ( v11 != -1
              && v11 == *(_QWORD *)(v7 + 16)
              && *(_QWORD *)(v10 + 144) != *(_QWORD *)(v7 + 144)
              && *(_BYTE *)(v10 + 74) == *(_BYTE *)(v7 + 74) )
            {
              v12 = *(RECT *)(v7 + 88);
              v17 = *(RECT *)(v10 + 88);
              rc = v12;
              v13 = MonitorFromRect(&rc, 2u);
              if ( MonitorFromRect(&v17, 2u) == v13 && !*(_BYTE *)(v10 + 72) && !*(_BYTE *)(v7 + 72) )
              {
                v14 = CAnimatedTransitionVisual::CopyVisual(
                        *(CAnimatedTransitionVisual **)(v7 + 40),
                        *(struct CAnimatedTransitionVisual **)(v10 + 40));
                v2 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v14,
                    0x9CCu,
                    0LL);
                  return v2;
                }
                CTransitionVisualController::_UpdateClipping(v15, (struct CAnimationComponent *)v7);
                CAnimationComponent::Morph((CAnimationComponent *)v10);
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
