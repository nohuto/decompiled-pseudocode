/*
 * XREFs of ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z @ 0x18013AAC0
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18013A480 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x180138D94 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A208 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueForState(
        CScrollAnimation *a1,
        struct CExpressionValueStack *a2,
        int a3,
        float *a4)
{
  int v4; // r8d
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax

  v4 = a3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v8 = CScrollAnimation::CalculateInertiaValue(a1, a2, a4);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x149u, 0LL);
        return v6;
      }
    }
    else
    {
      *a4 = 0.0;
    }
  }
  else
  {
    v5 = CScrollAnimation::CalculateInContactValue(a1, a2, a4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x140u, 0LL);
      return v6;
    }
  }
  return 0;
}
