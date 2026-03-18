/*
 * XREFs of ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x180138D94
 * Callers:
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z @ 0x18013AAC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A208 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801A17D0 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 *     ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ @ 0x1801CFFA0 (-CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        float *a3)
{
  struct CInteractionTrackerBase *InteractionTracker; // rax
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ebx
  float v11; // xmm0_4
  int v12; // eax
  int v13; // eax
  __int64 (__fastcall *v14)(CScrollAnimation *, struct CExpressionValueStack *, __int64, float *); // rbx
  __int64 v15; // r8
  int v16; // eax
  float v17; // [rsp+40h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = *((_DWORD *)this + 70) == 1;
  v17 = 0.0;
  if ( v7 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(this, a2, &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2BBu, 0LL);
      return v9;
    }
    v11 = v17;
  }
  else
  {
    v11 = (*(float (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)InteractionTracker + 232LL))(
            InteractionTracker,
            *((unsigned int *)this + 71));
    v17 = v11;
  }
  if ( *((_DWORD *)this + 70) == 2 )
  {
    if ( (*((_BYTE *)this + 312) & 4) != 0 )
      CScrollAnimation::StartInertia(this, v11, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, v11, 0);
    v12 = CScrollAnimation::SelectInertiaModifier(this);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x2D1u, 0LL);
      return v9;
    }
  }
  if ( (*((_BYTE *)this + 340) & 1) != 0 && (v13 = CScrollAnimation::SelectInertiaModifier(this), v9 = v13, v13 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x2DFu, 0LL);
  }
  else
  {
    v14 = *(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, __int64, float *))(*(_QWORD *)this + 304LL);
    CScrollAnimation::CalculateCurrentElapsedTime(this);
    v16 = v14(this, a2, v15, a3);
    v9 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2E2u, 0LL);
    else
      return 0;
  }
  return v9;
}
