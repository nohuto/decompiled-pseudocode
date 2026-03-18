/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A2CC
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A208 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18013B010 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4Outp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        float *a3)
{
  struct CInteractionTrackerBase *InteractionTracker; // rax
  InteractionSourceManager *v7; // rax
  InteractionSourceManager *v8; // rcx
  struct CManipulation *ActiveManipulation; // rax
  __int64 SourceModifierConditionalAnimation; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct CInteractionTrackerBase *v14; // rbx
  float (__fastcall *v15)(CScrollAnimation *); // rdi
  char v16; // [rsp+70h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = (InteractionSourceManager *)(*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker
                                                                                               + 368LL))(InteractionTracker);
  if ( InteractionSourceManager::HasActiveManipulation(v7) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v8);
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           ActiveManipulation,
                                           *((unsigned int *)this + 71));
  }
  else
  {
    SourceModifierConditionalAnimation = 0LL;
  }
  v16 = 0;
  if ( !SourceModifierConditionalAnimation )
    goto LABEL_8;
  v11 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierConditionalAnimation,
          a2,
          *((_DWORD *)this + 71) != 2,
          &v16,
          a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v16 )
      return 0;
LABEL_8:
    v14 = CScrollAnimation::GetInteractionTracker(this);
    v15 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 288LL);
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)v14 + 376LL))(
      v14,
      2LL,
      *((unsigned int *)this + 71));
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, __int64, _QWORD))(*(_QWORD *)v14 + 376LL))(
      v14,
      1LL,
      *((unsigned int *)this + 71));
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)v14 + 560LL))(
      v14,
      *((unsigned int *)this + 71));
    (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)v14 + 232LL))(
      v14,
      *((unsigned int *)this + 71));
    *a3 = v15(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x24Bu, 0LL);
  return v12;
}
