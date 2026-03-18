/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18026B8E0
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026BC80 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValue.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180292CA8 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3,
        const char *a4)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rbx
  float v9; // xmm11_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  unsigned int v15; // ebx
  float v16; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-C8h]
  __int128 v26; // [rsp+30h] [rbp-B8h]
  _BYTE v27[160]; // [rsp+40h] [rbp-A8h] BYREF

  v4 = *((unsigned int *)a3 + 24);
  if ( (_DWORD)v4 )
    v4 = (unsigned int)(v4 - 1);
  v7 = *(_QWORD *)a3 + 72 * v4;
  if ( *((_DWORD *)a2 + 16) )
  {
    if ( *(_DWORD *)(v7 + 64) == 18 )
    {
      v21 = *(float *)a2;
      v22 = *(float *)v7;
      CExpressionValue::DestroyCurrent(a2);
      *((_DWORD *)a2 + 16) = 18;
      v19 = v22 + v21;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 64) != 35 )
      {
        switch ( *(_DWORD *)(v7 + 64) )
        {
          case 0x34:
            v16 = *(float *)v7 + *(float *)a2;
            v17 = *(float *)(v7 + 4) + *((float *)a2 + 1);
            v18 = *(float *)(v7 + 8) + *((float *)a2 + 2);
            CExpressionValue::DestroyCurrent(a2);
            *((_DWORD *)a2 + 16) = 52;
            *(float *)a2 = v16;
            *((float *)a2 + 1) = v17;
            *((float *)a2 + 2) = v18;
            goto LABEL_23;
          case 0x45:
            *(float *)&v26 = *(float *)a2 + *(float *)v7;
            *((float *)&v26 + 1) = *(float *)(v7 + 4) + *((float *)a2 + 1);
            *((float *)&v26 + 2) = *(float *)(v7 + 8) + *((float *)a2 + 2);
            *((float *)&v26 + 3) = *(float *)(v7 + 12) + *((float *)a2 + 3);
            CExpressionValue::DestroyCurrent(a2);
            *((_DWORD *)a2 + 16) = 69;
            *(_OWORD *)a2 = v26;
            goto LABEL_23;
          case 0x46:
          case 0x47:
            v25 = 455;
            break;
          case 0x68:
            v9 = *(float *)a2 + *(float *)v7;
            v10 = *(float *)(v7 + 4) + *((float *)a2 + 1);
            v11 = *(float *)(v7 + 8) + *((float *)a2 + 2);
            v12 = *(float *)(v7 + 12) + *((float *)a2 + 3);
            v13 = *(float *)(v7 + 16) + *((float *)a2 + 4);
            v14 = *(float *)(v7 + 20) + *((float *)a2 + 5);
            CExpressionValue::DestroyCurrent(a2);
            *((_DWORD *)a2 + 16) = 104;
            *(float *)a2 = v9;
            *((float *)a2 + 1) = v10;
            *((float *)a2 + 2) = v11;
            *((float *)a2 + 3) = v12;
            *((float *)a2 + 4) = v13;
            *((float *)a2 + 5) = v14;
            goto LABEL_23;
          case 0x109:
            v8 = (_OWORD *)D2DMatrix::operator+(a2, v27, v7);
            CExpressionValue::DestroyCurrent(a2);
            *((_DWORD *)a2 + 16) = 265;
            *(_OWORD *)a2 = *v8;
            *((_OWORD *)a2 + 1) = v8[1];
            *((_OWORD *)a2 + 2) = v8[2];
            *((_OWORD *)a2 + 3) = v8[3];
            goto LABEL_23;
          default:
            v25 = 474;
            break;
        }
        v15 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v25, 0LL);
        return v15;
      }
      v19 = *(float *)a2 + *(float *)v7;
      v20 = *(float *)(v7 + 4) + *((float *)a2 + 1);
      CExpressionValue::DestroyCurrent(a2);
      *((float *)a2 + 1) = v20;
      *((_DWORD *)a2 + 16) = 35;
    }
    *(float *)a2 = v19;
    goto LABEL_23;
  }
  CExpressionValue::CopyFrom(a2, (const struct CExpressionValue *)v7, (__int64)a3, a4);
LABEL_23:
  v23 = *((_DWORD *)a3 + 24);
  if ( v23 )
    *((_DWORD *)a3 + 24) = v23 - 1;
  return 0;
}
