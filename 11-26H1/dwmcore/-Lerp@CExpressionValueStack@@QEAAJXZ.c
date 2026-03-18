/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x1801C19A8
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  float v7; // xmm8_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm15_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  float v18; // xmm12_4
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm9_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm8_4
  float v27; // xmm11_4
  float v28; // xmm10_4
  float v29; // xmm9_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm6_4
  unsigned int v37; // [rsp+20h] [rbp-E8h]
  float v38; // [rsp+30h] [rbp-D8h]
  float v39; // [rsp+34h] [rbp-D4h]
  float v40; // [rsp+38h] [rbp-D0h]
  float v41; // [rsp+3Ch] [rbp-CCh]
  float v42; // [rsp+40h] [rbp-C8h]
  float v43; // [rsp+44h] [rbp-C4h]
  float v44[6]; // [rsp+48h] [rbp-C0h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v4 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v4;
    v5 = *(_QWORD *)this + 72LL * (v4 - 1);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = *(float *)(v5 + 144);
    if ( *(_DWORD *)(v5 + 208) == 18 && v6 == *(_DWORD *)(v5 + 136) )
    {
      switch ( v6 )
      {
        case 18:
          v8 = *(float *)(v5 + 72);
          v9 = *(float *)v5;
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 18;
          *(float *)v5 = (float)(fmaxf(0.0, fminf(v7, 1.0)) * (float)(v8 - v9)) + v9;
          return v2;
        case 35:
          v11 = fmaxf(0.0, fminf(v7, 1.0));
          v12 = (float)((float)(*(float *)(v5 + 72) - *(float *)v5) * v11) + *(float *)v5;
          v13 = (float)((float)(*(float *)(v5 + 76) - *(float *)(v5 + 4)) * v11) + *(float *)(v5 + 4);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(float *)v5 = v12;
          *(float *)(v5 + 4) = v13;
          *(_DWORD *)(v5 + 64) = 35;
          return v2;
        case 52:
          v33 = fmaxf(0.0, fminf(v7, 1.0));
          v34 = (float)((float)(*(float *)(v5 + 76) - *(float *)(v5 + 4)) * v33) + *(float *)(v5 + 4);
          v35 = (float)((float)(*(float *)(v5 + 72) - *(float *)v5) * v33) + *(float *)v5;
          v36 = (float)((float)(*(float *)(v5 + 80) - *(float *)(v5 + 8)) * v33) + *(float *)(v5 + 8);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 52;
          *(float *)v5 = v35;
          *(float *)(v5 + 4) = v34;
          *(float *)(v5 + 8) = v36;
          return v2;
        case 69:
          v32 = fmaxf(0.0, fminf(v7, 1.0));
          v44[0] = (float)((float)(*(float *)(v5 + 72) - *(float *)v5) * v32) + *(float *)v5;
          v44[1] = (float)((float)(*(float *)(v5 + 76) - *(float *)(v5 + 4)) * v32) + *(float *)(v5 + 4);
          v44[2] = (float)((float)(*(float *)(v5 + 80) - *(float *)(v5 + 8)) * v32) + *(float *)(v5 + 8);
          v44[3] = (float)((float)(*(float *)(v5 + 84) - *(float *)(v5 + 12)) * v32) + *(float *)(v5 + 12);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 69;
          *(_OWORD *)v5 = *(_OWORD *)v44;
          return v2;
        case 104:
          v25 = fmaxf(0.0, fminf(v7, 1.0));
          v26 = (float)((float)(*(float *)(v5 + 84) - *(float *)(v5 + 12)) * v25) + *(float *)(v5 + 12);
          v27 = (float)((float)(*(float *)(v5 + 72) - *(float *)v5) * v25) + *(float *)v5;
          v28 = (float)((float)(*(float *)(v5 + 76) - *(float *)(v5 + 4)) * v25) + *(float *)(v5 + 4);
          v29 = (float)((float)(*(float *)(v5 + 80) - *(float *)(v5 + 8)) * v25) + *(float *)(v5 + 8);
          v30 = (float)((float)(*(float *)(v5 + 88) - *(float *)(v5 + 16)) * v25) + *(float *)(v5 + 16);
          v31 = (float)((float)(*(float *)(v5 + 92) - *(float *)(v5 + 20)) * v25) + *(float *)(v5 + 20);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 104;
          *(float *)v5 = v27;
          *(float *)(v5 + 4) = v28;
          *(float *)(v5 + 8) = v29;
          *(float *)(v5 + 12) = v26;
          *(float *)(v5 + 16) = v30;
          *(float *)(v5 + 20) = v31;
          return v2;
        case 265:
          v14 = fmaxf(0.0, fminf(v7, 1.0));
          v15 = (float)((float)(*(float *)(v5 + 96) - *(float *)(v5 + 24)) * v14) + *(float *)(v5 + 24);
          v16 = (float)((float)(*(float *)(v5 + 100) - *(float *)(v5 + 28)) * v14) + *(float *)(v5 + 28);
          v38 = (float)((float)(*(float *)(v5 + 72) - *(float *)v5) * v14) + *(float *)v5;
          v17 = (float)((float)(*(float *)(v5 + 104) - *(float *)(v5 + 32)) * v14) + *(float *)(v5 + 32);
          v18 = (float)((float)(*(float *)(v5 + 108) - *(float *)(v5 + 36)) * v14) + *(float *)(v5 + 36);
          v19 = (float)((float)(*(float *)(v5 + 112) - *(float *)(v5 + 40)) * v14) + *(float *)(v5 + 40);
          v20 = (float)((float)(*(float *)(v5 + 116) - *(float *)(v5 + 44)) * v14) + *(float *)(v5 + 44);
          v21 = (float)((float)(*(float *)(v5 + 120) - *(float *)(v5 + 48)) * v14) + *(float *)(v5 + 48);
          v39 = (float)((float)(*(float *)(v5 + 76) - *(float *)(v5 + 4)) * v14) + *(float *)(v5 + 4);
          v22 = (float)((float)(*(float *)(v5 + 124) - *(float *)(v5 + 52)) * v14) + *(float *)(v5 + 52);
          v23 = (float)((float)(*(float *)(v5 + 128) - *(float *)(v5 + 56)) * v14) + *(float *)(v5 + 56);
          v24 = (float)((float)(*(float *)(v5 + 132) - *(float *)(v5 + 60)) * v14) + *(float *)(v5 + 60);
          v40 = (float)((float)(*(float *)(v5 + 80) - *(float *)(v5 + 8)) * v14) + *(float *)(v5 + 8);
          v41 = (float)((float)(*(float *)(v5 + 84) - *(float *)(v5 + 12)) * v14) + *(float *)(v5 + 12);
          v42 = (float)((float)(*(float *)(v5 + 88) - *(float *)(v5 + 16)) * v14) + *(float *)(v5 + 16);
          v43 = (float)((float)(*(float *)(v5 + 92) - *(float *)(v5 + 20)) * v14) + *(float *)(v5 + 20);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
          *(_DWORD *)(v5 + 64) = 265;
          *(float *)v5 = v38;
          *(float *)(v5 + 4) = v39;
          *(float *)(v5 + 8) = v40;
          *(float *)(v5 + 12) = v41;
          *(float *)(v5 + 16) = v42;
          *(float *)(v5 + 20) = v43;
          *(float *)(v5 + 24) = v15;
          *(float *)(v5 + 28) = v16;
          *(float *)(v5 + 32) = v17;
          *(float *)(v5 + 36) = v18;
          *(float *)(v5 + 40) = v19;
          *(float *)(v5 + 44) = v20;
          *(float *)(v5 + 48) = v21;
          *(float *)(v5 + 52) = v22;
          *(float *)(v5 + 56) = v23;
          *(float *)(v5 + 60) = v24;
          return v2;
      }
      v37 = 2334;
    }
    else
    {
      v37 = 2225;
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
    v37 = 2207;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v37, 0LL);
  return v2;
}
