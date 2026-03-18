/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker2@@UEAAJPEAVCExpressionValueStack@@W4ScrollState@@@Z @ 0x180277930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180271EA8 (-CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState.c)
 */

__int64 __fastcall CInteractionTracker2::UpdateCenterPointForState(
        __int64 a1,
        struct CExpressionValueStack *a2,
        unsigned int a3)
{
  float *v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 == 1 )
  {
    v6 = (float *)(a1 + 500);
    v8 = (_QWORD *)(a1 + 500);
    v7 = (_QWORD *)(a1 + 508);
  }
  else
  {
    if ( a3 != 2 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v6 = (float *)(a1 + 508);
    v7 = (_QWORD *)(a1 + 508);
    v8 = (_QWORD *)(a1 + 500);
  }
  v9 = CInteractionTracker2::CalculateCenterPointForAxis(a1, a2, a3, 0, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x15E7u, 0LL);
  }
  else
  {
    v11 = CInteractionTracker2::CalculateCenterPointForAxis(a1, a2, a3, 1u, v6 + 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x15E9u, 0LL);
    }
    else if ( a3 == 1 )
    {
      *v7 = *v8;
    }
  }
  return v10;
}
