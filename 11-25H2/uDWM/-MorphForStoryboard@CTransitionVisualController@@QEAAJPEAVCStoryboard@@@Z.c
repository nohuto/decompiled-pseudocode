/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18002445C
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800243B0 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800426C0 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180088B24 (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800A3788 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A6484 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rbp
  CTransitionVisualController *v5; // r12
  __int64 v6; // rsi
  __int64 i; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  RECT v10; // xmm1
  HMONITOR v11; // rbx
  int v12; // eax
  CTransitionVisualController *v13; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v16; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v4 = 0LL;
  v5 = this;
  while ( (unsigned int)v4 < *((_DWORD *)a2 + 30) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 8 * v4);
    if ( CTransitionVisualController::_CanMorph(this, (struct CAnimationComponent *)v6) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v5 + 34); i = (unsigned int)(i + 1) )
      {
        v8 = *((_QWORD *)v5 + 14);
        v9 = *(_QWORD *)(v8 + 8 * i);
        if ( v6 != v9
          && CTransitionVisualController::_CanMorph(this, *(struct CAnimationComponent **)(v8 + 8 * i))
          && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 927LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 927LL)) )
        {
          this = *(CTransitionVisualController **)(v9 + 16);
          if ( (unsigned __int64)this - 1 <= 0xFFFFFFFFFFFFFFFDuLL
            && this == *(CTransitionVisualController **)(v6 + 16)
            && *(_QWORD *)(v9 + 144) != *(_QWORD *)(v6 + 144)
            && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
          {
            v10 = *(RECT *)(v6 + 88);
            v16 = *(RECT *)(v9 + 88);
            rc = v10;
            v11 = MonitorFromRect(&rc, 2u);
            if ( MonitorFromRect(&v16, 2u) == v11 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
            {
              v12 = CAnimatedTransitionVisual::CopyVisual(
                      *(CAnimatedTransitionVisual **)(v6 + 40),
                      *(struct CAnimatedTransitionVisual **)(v9 + 40));
              v2 = v12;
              if ( v12 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v12,
                  0xA02u,
                  0LL);
                return v2;
              }
              CTransitionVisualController::_UpdateClipping(v13, (struct CAnimationComponent *)v6);
              CAnimationComponent::Morph((CAnimationComponent *)v9);
            }
          }
        }
      }
    }
    v4 = (unsigned int)(v4 + 1);
  }
  return v2;
}
