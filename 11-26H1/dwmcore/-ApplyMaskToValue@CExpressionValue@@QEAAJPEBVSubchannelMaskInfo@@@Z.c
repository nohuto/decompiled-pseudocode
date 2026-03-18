/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1801076A8
 * Callers:
 *     ?GetPropertyValueHelper@CBaseExpression@@IEBAJPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@_NPEAVCExpressionValue@@@Z @ 0x180045500 (-GetPropertyValueHelper@CBaseExpression@@IEBAJPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@_.c)
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1801075F0 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180108940 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, const struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // esi
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm6
  int v22; // xmm9_4
  int v23; // xmm10_4
  int v24; // edi
  __int128 v25; // xmm6
  int v26; // xmm6_4
  int v27; // xmm7_4
  int v28; // xmm0_4
  int v29; // xmm6_4
  int v30; // xmm7_4
  void *v32[2]; // [rsp+38h] [rbp-D0h]
  __int128 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-B0h]
  _OWORD v35[2]; // [rsp+68h] [rbp-A0h]
  float v36[16]; // [rsp+88h] [rbp-80h] BYREF

  memset_0(v36, 0, sizeof(v36));
  memset_0(&v33, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 16));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  v8 = CExpressionValue::CopyIntoFloatArray(this, v7, v36);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x32Eu, 0LL);
  }
  else
  {
    for ( i = 0; i < v5; ++i )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v11 = (*((unsigned __int8 *)a2 + 8) >> (2 * (*((_BYTE *)a2 + 4) - i) - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)a2 != 2 )
        {
          v9 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x349u, 0LL);
          return v9;
        }
        v11 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v11 >= v6 )
      {
        v9 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x354u, 0LL);
        return v9;
      }
      if ( i >= 0x10 )
      {
        v9 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x35Fu, 0LL);
        return v9;
      }
      v12 = i;
      *((float *)&v33 + v12) = v36[v11];
    }
    v13 = v5 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 == 10 )
              {
                CExpressionValue::DestroyCurrent(this);
                v18 = v34;
                *(_OWORD *)this = v33;
                *((_DWORD *)this + 16) = 265;
                v19 = v35[0];
                *((_OWORD *)this + 1) = v18;
                v20 = v35[1];
                *((_OWORD *)this + 2) = v19;
                *((_OWORD *)this + 3) = v20;
              }
              else
              {
                v9 = -2147467259;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x396u, 0LL);
              }
            }
            else
            {
              v21 = v33;
              v22 = v34;
              v23 = DWORD1(v34);
              CExpressionValue::DestroyCurrent(this);
              *((_DWORD *)this + 16) = 104;
              *(_OWORD *)this = v21;
              *((_DWORD *)this + 4) = v22;
              *((_DWORD *)this + 5) = v23;
            }
          }
          else
          {
            v24 = 71;
            if ( *((_DWORD *)this + 16) == 71 )
            {
              *(_OWORD *)v32 = v33;
              CExpressionValue::DestroyCurrent(this);
              *(_OWORD *)this = *(_OWORD *)v32;
            }
            else
            {
              v25 = v33;
              CExpressionValue::DestroyCurrent(this);
              *(_OWORD *)this = v25;
              v24 = 69;
            }
            *((_DWORD *)this + 16) = v24;
          }
        }
        else
        {
          v26 = DWORD1(v33);
          v27 = DWORD2(v33);
          CExpressionValue::DestroyCurrent(this);
          v28 = v33;
          *((_DWORD *)this + 16) = 52;
          *(_DWORD *)this = v28;
          *((_DWORD *)this + 1) = v26;
          *((_DWORD *)this + 2) = v27;
        }
      }
      else
      {
        v29 = v33;
        v30 = DWORD1(v33);
        CExpressionValue::DestroyCurrent(this);
        *(_DWORD *)this = v29;
        *((_DWORD *)this + 1) = v30;
        *((_DWORD *)this + 16) = 35;
      }
    }
    else
    {
      CExpressionValue::DestroyCurrent(this);
      *(_DWORD *)this = v33;
      *((_DWORD *)this + 16) = 18;
    }
  }
  return v9;
}
