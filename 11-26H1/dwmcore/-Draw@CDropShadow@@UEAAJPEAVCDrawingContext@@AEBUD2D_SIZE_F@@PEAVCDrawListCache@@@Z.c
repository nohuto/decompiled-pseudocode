/*
 * XREFs of ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180018E80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___ @ 0x1801BE958 (gsl--final_action__CShapeTree--RenderIntermediate_--_2_--_lambda_2___--_final_action__CShapeTree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::Draw(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v4; // al
  float v5; // xmm1_4
  unsigned int v6; // ebx
  struct CDrawingContext *v9; // rdi
  __int64 v11; // rcx
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // eax
  int updated; // eax
  int v16; // eax
  struct CVisual *CurrentVisual; // r14
  __int64 v19; // rcx
  struct CDrawingContext *v20; // [rsp+30h] [rbp-29h] BYREF
  char v21; // [rsp+38h] [rbp-21h]
  _OWORD v22[3]; // [rsp+40h] [rbp-19h] BYREF
  int v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+74h] [rbp+1Bh]
  int v25; // [rsp+78h] [rbp+1Fh]
  __int64 v26; // [rsp+7Ch] [rbp+23h]
  char v27; // [rsp+C0h] [rbp+67h] BYREF

  v4 = 0;
  LODWORD(v5) = *((_DWORD *)this + 23) & _xmm;
  v6 = 0;
  v27 = 0;
  v9 = a2;
  if ( v5 < 0.0000011920929 )
    return v6;
  if ( *((_DWORD *)this + 31) != 1 )
  {
    v11 = *((_QWORD *)this + 22);
    if ( !v11 )
    {
LABEL_10:
      if ( v4 )
        return v6;
      goto LABEL_11;
    }
LABEL_8:
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v11 + 320LL))(
            v11,
            a2,
            &v27) )
      return v6;
    v4 = v27;
    goto LABEL_10;
  }
  if ( a2 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    v19 = *((_QWORD *)CurrentVisual + 31);
    if ( !v19 )
      return v6;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 64LL))(v19, 16LL) )
      return v6;
    v11 = *((_QWORD *)CurrentVisual + 31);
    if ( !v11 )
      return v6;
    a2 = v9;
    goto LABEL_8;
  }
LABEL_11:
  v22[0] = _mm_load_si128((const __m128i *)&_xmm);
  v26 = 1065353216LL;
  v22[2] = _mm_load_si128((const __m128i *)&_xmm);
  v23 = *((_DWORD *)this + 24);
  v12 = *((_DWORD *)this + 26);
  v22[1] = _mm_load_si128((const __m128i *)&_xmm);
  v13 = *((_DWORD *)this + 25);
  v25 = v12;
  v24 = v13;
  WORD2(v26) = 10664;
  v14 = CDrawingContext::PushTransformInternal(v9, 0LL, (const struct CMILMatrix *)v22, 1, 1);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1E6u, 0LL);
  }
  else
  {
    v20 = v9;
    v21 = 1;
    updated = CDropShadow::UpdateShadowIntermediates(this, v9, a3);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1ECu, 0LL);
    }
    else
    {
      v16 = CContent::Draw(this, v9, a3, a4);
      v6 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1EEu, 0LL);
        gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___(&v20);
        return v6;
      }
    }
    CDrawingContext::PopTransformInternal(v9, 1);
  }
  return v6;
}
