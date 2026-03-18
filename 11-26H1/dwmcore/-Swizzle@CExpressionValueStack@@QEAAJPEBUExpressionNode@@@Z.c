/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z @ 0x180108620
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180108940 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, const struct ExpressionNode *a2)
{
  int v2; // eax
  unsigned int v4; // r14d
  int v5; // r9d
  _DWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int ExpressionTypeChannelCount; // eax
  bool v10; // zf
  unsigned int v11; // edi
  unsigned int v12; // r13d
  __int64 i; // rdx
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // eax
  int v17; // ebx
  int v18; // r9d
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm6
  int v27; // xmm9_4
  int v28; // xmm10_4
  __int128 v29; // xmm6
  int v30; // xmm6_4
  int v31; // xmm7_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  __int128 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+58h] [rbp-B0h]
  _OWORD v37[2]; // [rsp+68h] [rbp-A0h]
  _DWORD v38[16]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v2 = *((_DWORD *)this + 24);
  if ( !v2 )
  {
    v4 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    v5 = -2147483637;
    v34 = 6305;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v5, v34, 0LL);
    return v4;
  }
  v7 = (_DWORD *)(*(_QWORD *)this + 72LL * (unsigned int)(v2 - 1));
  if ( *(_DWORD *)a2 == 101 )
  {
    v8 = 4LL;
  }
  else
  {
    if ( *(_DWORD *)a2 != 102 )
    {
      v4 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x18BAu,
        0LL);
      return v4;
    }
    v8 = 8LL;
  }
  memset_0(v38, 0, sizeof(v38));
  memset_0(&v35, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount((unsigned int)v7[16]);
  v10 = v7[16] == 0;
  v11 = *((unsigned __int8 *)a2 + v8 + 4);
  v12 = ExpressionTypeChannelCount;
  v38[0] = 0;
  if ( v10 )
  {
    v4 = -2147023728;
    v16 = 556;
    v17 = -2147023728;
    v18 = -2147023728;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v17,
      0x18CDu,
      0LL);
    return v4;
  }
  if ( ExpressionTypeChannelCount > 0x10 )
  {
    v17 = -2147467259;
    v16 = 565;
    v4 = -2147467259;
    v18 = -2147467259;
    goto LABEL_19;
  }
  memcpy_0(v38, v7, 4LL * ExpressionTypeChannelCount);
  v4 = 0;
  for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)((char *)a2 + v8) == 1 )
    {
      v14 = (*((unsigned __int8 *)a2 + v8 + 8) >> (2 * (*((_BYTE *)a2 + v8 + 4) - i) - 2)) & 3;
    }
    else
    {
      if ( *(_DWORD *)((char *)a2 + v8) != 2 )
      {
        v34 = 6375;
        goto LABEL_26;
      }
      v14 = (*(_QWORD *)((char *)a2 + v8 + 8) >> (4 * (*((_BYTE *)a2 + v8 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
    }
    if ( (unsigned int)v14 >= v12 )
    {
      v34 = 6386;
      goto LABEL_26;
    }
    if ( (unsigned int)i >= 0x10 )
    {
      v34 = 6397;
LABEL_26:
      v4 = -2147467259;
      v5 = -2147467259;
      goto LABEL_3;
    }
    *((_DWORD *)&v35 + i) = v38[v14];
  }
  v15 = v11 - 1;
  if ( !v15 )
  {
    CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
    *v7 = v35;
    v7[16] = 18;
    return v4;
  }
  v19 = v15 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 2;
        if ( v22 )
        {
          if ( v22 != 10 )
          {
            v34 = 6443;
            goto LABEL_26;
          }
          CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
          v23 = v36;
          *(_OWORD *)v7 = v35;
          v7[16] = 265;
          v24 = v37[0];
          *((_OWORD *)v7 + 1) = v23;
          v25 = v37[1];
          *((_OWORD *)v7 + 2) = v24;
          *((_OWORD *)v7 + 3) = v25;
        }
        else
        {
          v26 = v35;
          v27 = v36;
          v28 = DWORD1(v36);
          CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
          v7[16] = 104;
          *(_OWORD *)v7 = v26;
          v7[4] = v27;
          v7[5] = v28;
        }
      }
      else
      {
        v29 = v35;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
        v7[16] = 69;
        *(_OWORD *)v7 = v29;
      }
    }
    else
    {
      v30 = DWORD1(v35);
      v31 = DWORD2(v35);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
      v32 = v35;
      v7[16] = 52;
      *v7 = v32;
      v7[1] = v30;
      v7[2] = v31;
    }
  }
  else
  {
    CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
    v33 = DWORD1(v35);
    *v7 = v35;
    v7[1] = v33;
    v7[16] = 35;
  }
  return v4;
}
