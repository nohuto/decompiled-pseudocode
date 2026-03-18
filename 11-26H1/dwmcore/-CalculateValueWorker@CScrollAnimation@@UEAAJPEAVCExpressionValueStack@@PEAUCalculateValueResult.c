/*
 * XREFs of ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18013A480
 * Callers:
 *     ?CalculateValueWorker@CInteractionTrackerScaleAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x1801E1010 (-CalculateValueWorker@CInteractionTrackerScaleAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCal.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z @ 0x18013AAC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXM@Z @ 0x18013B264 (-PushConstant@CExpressionValueStack@@QEAAXM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  unsigned int v3; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  struct CInteractionTrackerBase *InteractionTracker; // rax
  int v10; // eax
  struct CInteractionTrackerBase *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  float v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( !*((_DWORD *)this + 36)
    || (*(unsigned __int8 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 248LL))(this)
    || (v12 = CScrollAnimation::GetInteractionTracker(this),
        (*(unsigned __int8 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)v12 + 592LL))(v12)) )
  {
    v7 = *((_QWORD *)this + 3);
    v15 = 0.0;
    v8 = 0LL;
    *((_QWORD *)this + 40) = a2;
    *((_QWORD *)this + 41) = *(_QWORD *)(v7 + 880);
    while ( (int)v8 < *((_DWORD *)this + 92) - 1 )
    {
      v13 = *((_QWORD *)this + 43);
      v16 = 0;
      v14 = CScrollAnimation::CalculateValueForState(this, a2, *(unsigned int *)(v13 + 4 * v8), &v16);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xFFu, 0LL);
        goto LABEL_6;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    *((_DWORD *)this + 92) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 4u);
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    v10 = CScrollAnimation::CalculateValueForState(this, a2, *((unsigned int *)InteractionTracker + 22), &v15);
    v3 = v10;
    if ( v10 >= 0 )
      CExpressionValueStack::PushConstant(a2, v15);
    else
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x107u, 0LL);
  }
  else
  {
    *((_BYTE *)a3 + 1) = 1;
  }
LABEL_6:
  *(_BYTE *)a3 = *((_BYTE *)this + 312) & 1;
  return v3;
}
