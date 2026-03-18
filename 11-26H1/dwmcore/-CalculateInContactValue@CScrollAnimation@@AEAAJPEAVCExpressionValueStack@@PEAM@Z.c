/*
 * XREFs of ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A208
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x180138D94 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z @ 0x18013AAC0 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@PEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A2CC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180289A00 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        float *a3)
{
  bool v3; // zf
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  float v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 70) == 1;
  v12 = 0.0;
  if ( !v3 )
    CScrollAnimation::StartInContact(this);
  v7 = CScrollAnimation::CalculateInContactDelta(this, a2, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x27Fu, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(CScrollAnimation *, struct CExpressionValueStack *, __int64, float *))(*(_QWORD *)this + 296LL))(
            this,
            a2,
            v8,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x281u, 0LL);
    else
      return 0;
  }
  return v9;
}
