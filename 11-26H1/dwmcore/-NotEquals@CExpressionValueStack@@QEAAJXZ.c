/*
 * XREFs of ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18020CAC8
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::NotEquals(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  unsigned int v3; // eax
  bool v4; // di
  __int64 v5; // rsi
  int v6; // ecx
  float *v7; // rbx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char v20; // di
  char v21; // bl
  unsigned int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    v4 = 0;
    *((_DWORD *)this + 24) = v3;
    v2 = 0;
    v5 = *(_QWORD *)this + 72LL * (v3 - 1);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = (float *)(v5 + 72);
    if ( v6 != *(_DWORD *)(v5 + 136) )
    {
      v23 = 1074;
LABEL_5:
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        v23,
        0LL);
      return v2;
    }
    v8 = v6 - 17;
    if ( !v8 )
    {
      v20 = *(_BYTE *)v5;
      v21 = *(_BYTE *)v7;
      CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
      v4 = v20 != v21;
      goto LABEL_41;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 17;
      if ( v10 )
      {
        v11 = v10 - 17;
        if ( v11 )
        {
          v12 = v11 - 17;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( !v13 )
            {
              if ( *(float *)v5 != *v7
                || *(float *)(v5 + 4) != *(float *)(v5 + 76)
                || *(float *)(v5 + 8) != *(float *)(v5 + 80) )
              {
                goto LABEL_27;
              }
              v17 = *(float *)(v5 + 12) == *(float *)(v5 + 84);
              goto LABEL_26;
            }
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 33;
              if ( v15 )
              {
                if ( v15 != 161 )
                {
                  v23 = 1135;
                  goto LABEL_5;
                }
                v16 = memcmp_0((const void *)v5, (const void *)(v5 + 72), 0x40uLL) == 0;
                goto LABEL_18;
              }
              if ( *(float *)v5 != *v7
                || *(float *)(v5 + 4) != *(float *)(v5 + 76)
                || *(float *)(v5 + 8) != *(float *)(v5 + 80)
                || *(float *)(v5 + 12) != *(float *)(v5 + 84)
                || *(float *)(v5 + 16) != *(float *)(v5 + 88) )
              {
LABEL_27:
                v4 = 1;
                goto LABEL_19;
              }
              v17 = *(float *)(v5 + 20) == *(float *)(v5 + 92);
LABEL_26:
              if ( v17 )
                goto LABEL_19;
              goto LABEL_27;
            }
          }
          v18 = *(_QWORD *)v5 - *(_QWORD *)v7;
          if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
            v18 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v5 + 80);
          v16 = v18 == 0;
        }
        else
        {
          v19 = *(_QWORD *)v5 - *(_QWORD *)v7;
          if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
            v19 = *(unsigned int *)(v5 + 8) - (unsigned __int64)*(unsigned int *)(v5 + 80);
          v16 = v19 == 0;
        }
      }
      else
      {
        v16 = *(_QWORD *)v5 == *(_QWORD *)v7;
      }
LABEL_18:
      v4 = !v16;
LABEL_19:
      CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
LABEL_41:
      *(_DWORD *)(v5 + 64) = 17;
      *(_BYTE *)v5 = v4;
      return v2;
    }
    v17 = *(float *)v5 == *v7;
    goto LABEL_26;
  }
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
    0x41Eu,
    0LL);
  return v2;
}
