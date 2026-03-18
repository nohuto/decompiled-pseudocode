/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801BDB3C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rsi
  int v6; // ecx
  float *v7; // rbx
  int v8; // ecx
  int v9; // ecx
  bool v10; // zf
  bool v11; // bl
  char v13; // di
  char v14; // bl
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v4 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v4;
    v5 = *(_QWORD *)this + 72LL * (v4 - 1);
    v6 = *(_DWORD *)(v5 + 64);
    v7 = (float *)(v5 + 72);
    if ( v6 == *(_DWORD *)(v5 + 136) )
    {
      v8 = v6 - 17;
      if ( !v8 )
      {
        v13 = *(_BYTE *)v5;
        v14 = *(_BYTE *)v7;
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
        v11 = v13 == v14;
        goto LABEL_11;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v10 = *(float *)v5 == *v7;
        goto LABEL_8;
      }
      v15 = v9 - 17;
      if ( !v15 )
      {
        v21 = *(_QWORD *)v5 == *(_QWORD *)v7;
        goto LABEL_27;
      }
      v16 = v15 - 17;
      if ( !v16 )
      {
        v23 = *(_QWORD *)v5 - *(_QWORD *)v7;
        if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
          v23 = *(unsigned int *)(v5 + 8) - (unsigned __int64)*(unsigned int *)(v5 + 80);
        v21 = v23 == 0;
        goto LABEL_27;
      }
      v17 = v16 - 17;
      if ( !v17 )
        goto LABEL_34;
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( *(float *)v5 != *v7
          || *(float *)(v5 + 4) != *(float *)(v5 + 76)
          || *(float *)(v5 + 8) != *(float *)(v5 + 80) )
        {
          goto LABEL_9;
        }
        v10 = *(float *)(v5 + 12) == *(float *)(v5 + 84);
        goto LABEL_8;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
LABEL_34:
        v22 = *(_QWORD *)v5 - *(_QWORD *)v7;
        if ( *(_QWORD *)v5 == *(_QWORD *)v7 )
          v22 = *(_QWORD *)(v5 + 8) - *(_QWORD *)(v5 + 80);
        v21 = v22 == 0;
        goto LABEL_27;
      }
      v20 = v19 - 33;
      if ( !v20 )
      {
        if ( *(float *)v5 != *v7
          || *(float *)(v5 + 4) != *(float *)(v5 + 76)
          || *(float *)(v5 + 8) != *(float *)(v5 + 80)
          || *(float *)(v5 + 12) != *(float *)(v5 + 84)
          || *(float *)(v5 + 16) != *(float *)(v5 + 88) )
        {
          goto LABEL_9;
        }
        v10 = *(float *)(v5 + 20) == *(float *)(v5 + 92);
LABEL_8:
        if ( v10 )
        {
          v11 = 1;
          goto LABEL_10;
        }
LABEL_9:
        v11 = 0;
LABEL_10:
        CExpressionValue::DestroyCurrent((CExpressionValue *)v5);
LABEL_11:
        *(_DWORD *)(v5 + 64) = 17;
        *(_BYTE *)v5 = v11;
        return v2;
      }
      if ( v20 == 161 )
      {
        v21 = memcmp_0((const void *)v5, (const void *)(v5 + 72), 0x40uLL) == 0;
LABEL_27:
        v11 = v21;
        goto LABEL_10;
      }
      v24 = 1027;
    }
    else
    {
      v24 = 965;
    }
    v3 = -2147467259;
    v2 = -2147467259;
    goto LABEL_3;
  }
  v2 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
    (const char *)0x8000000BLL);
  v3 = -2147483637;
  v24 = 945;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(20, &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, v24, 0LL);
  return v2;
}
