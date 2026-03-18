/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@UEAAJPEAVCExpressionValueStack@@W4ScrollState@@@Z @ 0x180271200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(
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
    v6 = (float *)(a1 + 260);
    v8 = (_QWORD *)(a1 + 260);
    v7 = (_QWORD *)(a1 + 268);
  }
  else
  {
    if ( a3 != 2 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v6 = (float *)(a1 + 268);
    v7 = (_QWORD *)(a1 + 268);
    v8 = (_QWORD *)(a1 + 260);
  }
  v9 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, 0, v6);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1619u, 0LL);
  }
  else
  {
    v11 = CInteractionTracker::CalculateCenterPointForAxis(a1, a2, a3, 1u, v6 + 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x161Bu, 0LL);
    }
    else if ( a3 == 1 )
    {
      *v7 = *v8;
    }
  }
  return v10;
}
