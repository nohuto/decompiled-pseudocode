/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@UEAAJPEAVCExpressionValueStack@@W4ScrollState@@@Z @ 0x180271200 (-UpdateCenterPointForState@CInteractionTracker@@UEAAJPEAVCExpressionValueStack@@W4ScrollState@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4Outp.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1801E211C (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021E554 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180289A9C (-WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        __int64 a1,
        struct CExpressionValueStack *a2,
        unsigned int a3,
        unsigned int a4,
        float *a5)
{
  float *v5; // rdi
  CConditionalExpression *v7; // r10
  __int64 SourceCenterpointModifierForActiveManipulation; // rax
  int v12; // eax
  unsigned int v13; // ebp
  CScrollAnimation *v14; // rcx
  float v15; // xmm0_4
  InteractionSourceManager *v16; // rcx
  _DWORD v18[10]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  bool v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  v7 = 0LL;
  if ( a3 == 1 )
  {
    SourceCenterpointModifierForActiveManipulation = InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation((InteractionSourceManager *)(a1 + 296));
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_6;
    SourceCenterpointModifierForActiveManipulation = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 528LL))(
                                                       a1,
                                                       a4);
  }
  v7 = (CConditionalExpression *)SourceCenterpointModifierForActiveManipulation;
LABEL_6:
  v20 = 0;
  if ( !v7 )
    goto LABEL_10;
  v12 = CConditionalExpression::ProcessConditionalExpression(v7, a2, a4 != 2, &v20, v5);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v20 )
      return 0;
LABEL_10:
    if ( a3 == 2 )
    {
      v14 = *(CScrollAnimation **)(a1 + 416);
      if ( v14 && CScrollAnimation::WasInertiaStartedByImpulse(v14) )
      {
        if ( a4 )
        {
          if ( a4 != 1 )
            ModuleFailFastForHRESULT(-2147467259, retaddr);
          v15 = *(float *)(a1 + 592);
        }
        else
        {
          v15 = *(float *)(a1 + 588);
        }
        goto LABEL_26;
      }
    }
    else if ( a3 == 1 && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 296)) )
    {
      InteractionSourceManager::GetActiveManipulationCenterpoint(v16, (__int64)v18);
      if ( a4 )
      {
        if ( a4 != 1 )
          ModuleFailFastForHRESULT(-2147467259, retaddr);
        v15 = *(float *)&v18[1];
      }
      else
      {
        v15 = *(float *)v18;
      }
      goto LABEL_26;
    }
    v15 = (*(float (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 344LL))(a1, a3, a4);
LABEL_26:
    *v5 = v15;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1660u, 0LL);
  return v13;
}
