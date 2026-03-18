/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801A7DB0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180292C20 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  int v3; // r9d
  unsigned int v5; // eax
  __int64 v6; // rdi
  int v7; // ecx
  float *v8; // rax
  float v9; // xmm6_4
  _OWORD *v10; // rbx
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  unsigned int v22; // [rsp+20h] [rbp-C8h]
  __int128 v23; // [rsp+30h] [rbp-B8h]
  _BYTE v24[160]; // [rsp+40h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v5 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v5;
    v6 = *(_QWORD *)this + 72LL * (v5 - 1);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = (float *)(v6 + 72);
    if ( v7 == *(_DWORD *)(v6 + 136) )
    {
      switch ( v7 )
      {
        case 18:
          v9 = *(float *)v6 - *v8;
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(float *)v6 = v9;
          *(_DWORD *)(v6 + 64) = 18;
          return v2;
        case 35:
          v20 = *(float *)v6 - *v8;
          v21 = *(float *)(v6 + 4) - *(float *)(v6 + 76);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(float *)v6 = v20;
          *(float *)(v6 + 4) = v21;
          *(_DWORD *)(v6 + 64) = 35;
          return v2;
        case 52:
          v17 = *(float *)v6 - *v8;
          v18 = *(float *)(v6 + 4) - *(float *)(v6 + 76);
          v19 = *(float *)(v6 + 8) - *(float *)(v6 + 80);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(_DWORD *)(v6 + 64) = 52;
          *(float *)v6 = v17;
          *(float *)(v6 + 4) = v18;
          *(float *)(v6 + 8) = v19;
          return v2;
        case 69:
          *(float *)&v23 = *(float *)v6 - *v8;
          *((float *)&v23 + 1) = *(float *)(v6 + 4) - *(float *)(v6 + 76);
          *((float *)&v23 + 2) = *(float *)(v6 + 8) - *(float *)(v6 + 80);
          *((float *)&v23 + 3) = *(float *)(v6 + 12) - *(float *)(v6 + 84);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(_DWORD *)(v6 + 64) = 69;
          *(_OWORD *)v6 = v23;
          return v2;
        case 104:
          v11 = *(float *)v6 - *v8;
          v12 = *(float *)(v6 + 4) - *(float *)(v6 + 76);
          v13 = *(float *)(v6 + 8) - *(float *)(v6 + 80);
          v14 = *(float *)(v6 + 12) - *(float *)(v6 + 84);
          v15 = *(float *)(v6 + 16) - *(float *)(v6 + 88);
          v16 = *(float *)(v6 + 20) - *(float *)(v6 + 92);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(_DWORD *)(v6 + 64) = 104;
          *(float *)v6 = v11;
          *(float *)(v6 + 4) = v12;
          *(float *)(v6 + 8) = v13;
          *(float *)(v6 + 12) = v14;
          *(float *)(v6 + 16) = v15;
          *(float *)(v6 + 20) = v16;
          return v2;
        case 265:
          v10 = (_OWORD *)D2DMatrix::operator-(v6, v24, v6 + 72);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v6);
          *(_DWORD *)(v6 + 64) = 265;
          *(_OWORD *)v6 = *v10;
          *(_OWORD *)(v6 + 16) = v10[1];
          *(_OWORD *)(v6 + 32) = v10[2];
          *(_OWORD *)(v6 + 48) = v10[3];
          return v2;
      }
      v22 = 540;
    }
    else
    {
      v22 = 486;
    }
    v3 = -2147467259;
    v2 = -2147467259;
  }
  else
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    v3 = -2147483637;
    v22 = 471;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v22, 0LL);
  return v2;
}
