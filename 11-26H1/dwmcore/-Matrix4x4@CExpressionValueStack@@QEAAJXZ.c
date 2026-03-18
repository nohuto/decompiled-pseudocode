/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x180107E74
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z @ 0x18018CAD0 (-ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  struct CExpressionValue *v4; // rsi
  bool v5; // zf
  int v6; // xmm0_4
  __int32 v7; // xmm0_4
  int v8; // xmm1_4
  unsigned int v9; // xmm0_4
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v15; // eax
  __int64 v16; // rax
  _DWORD *v17; // rcx
  struct CExpressionValue *v18; // rcx
  int v19; // eax
  struct CExpressionValue *v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h]
  __m256i v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *((_DWORD *)this + 24);
  if ( !v1 )
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147483637,
      0x111Du,
      0LL);
    return v2;
  }
  v3 = 0LL;
  v2 = 0;
  v4 = (struct CExpressionValue *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1));
  v5 = *((_DWORD *)v4 + 16) == 104;
  v20 = v4;
  if ( v5 )
  {
    v6 = *(_DWORD *)v4;
    DWORD1(v21) = *((_DWORD *)v4 + 1);
    v22.m256i_i32[0] = *((_DWORD *)v4 + 2);
    LODWORD(v21) = v6;
    v7 = *((_DWORD *)v4 + 3);
    *(_OWORD *)&v22.m256i_u64[1] = 0LL;
    *((_QWORD *)&v21 + 1) = 0LL;
    v8 = *((_DWORD *)v4 + 4);
    v22.m256i_i32[1] = v7;
    v9 = *((_DWORD *)v4 + 5);
    LODWORD(v23) = v8;
    *(_QWORD *)((char *)&v23 + 4) = v9;
    v22.m256i_i64[3] = 1065353216LL;
    HIDWORD(v23) = 1065353216;
  }
  else
  {
    if ( *((_DWORD *)v4 + 16) != 18 )
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x1151u,
        0LL);
      return v2;
    }
    v15 = CExpressionValueStack::ConsumeStackValues(this, 0x10u, &v20);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v15,
        0x1127u,
        0LL);
      return v2;
    }
    v4 = v20;
    v16 = 0LL;
    v17 = (_DWORD *)((char *)v20 + 64);
    while ( v16 < 16 )
    {
      if ( *v17 != 18 )
      {
        v2 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          0x1135u,
          0LL);
        return v2;
      }
      ++v16;
      v17 += 18;
    }
    v18 = v20;
    do
    {
      v19 = *(_DWORD *)v18;
      v18 = (struct CExpressionValue *)((char *)v18 + 72);
      *((_DWORD *)&v21 + v3++) = v19;
    }
    while ( v3 < 16 );
  }
  CExpressionValue::DestroyCurrent(v4);
  v10 = v21;
  v11 = *(_OWORD *)v22.m256i_i8;
  *((_DWORD *)v4 + 16) = 265;
  *(_OWORD *)v4 = v10;
  v12 = *(_OWORD *)&v22.m256i_u64[2];
  *((_OWORD *)v4 + 1) = v11;
  v13 = v23;
  *((_OWORD *)v4 + 2) = v12;
  *((_OWORD *)v4 + 3) = v13;
  return v2;
}
