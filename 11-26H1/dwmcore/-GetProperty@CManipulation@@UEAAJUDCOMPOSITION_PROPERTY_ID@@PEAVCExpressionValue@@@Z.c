/*
 * XREFs of ?GetProperty@CManipulation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801BEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801BECA0 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CManipulation::GetProperty(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v8; // xmm6_4
  int v9; // xmm6_4
  int v10; // eax

  v3 = 0;
  if ( a3 )
  {
    if ( !a2 )
    {
      CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
      *(_DWORD *)(a3 + 64) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 272);
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 280);
      return v3;
    }
    if ( a2 == 1 )
    {
      CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
      *(_DWORD *)(a3 + 64) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 284);
      *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 292);
LABEL_5:
      CManipulation::_EnqueueDeferredDeltaReset(a1, a2);
      return v3;
    }
    if ( a2 != 2 )
    {
      if ( a2 == 3 )
      {
        v8 = *(_DWORD *)(a1 + 308);
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *(_DWORD *)a3 = v8;
        *(_DWORD *)(a3 + 64) = 18;
        goto LABEL_5;
      }
      if ( a2 == 4 )
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *(_DWORD *)(a3 + 64) = 52;
        *(_QWORD *)a3 = *(_QWORD *)(a1 + 324);
        v10 = *(_DWORD *)(a1 + 332);
      }
      else
      {
        if ( a2 == 5 )
        {
          CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
          *(_DWORD *)(a3 + 64) = 265;
          *(_OWORD *)a3 = *(_OWORD *)(a1 + 336);
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 352);
          *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 368);
          *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 384);
          return v3;
        }
        if ( a2 != 6 )
        {
          if ( a2 != 7 )
          {
            if ( a2 == 9 )
            {
              CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
              *(_DWORD *)(a3 + 64) = 17;
              *(_BYTE *)a3 = 1;
            }
            else
            {
              v3 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1F6u, 0LL);
            }
            return v3;
          }
          v9 = *(_DWORD *)(a1 + 412);
          goto LABEL_21;
        }
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *(_DWORD *)(a3 + 64) = 52;
        *(_QWORD *)a3 = *(_QWORD *)(a1 + 400);
        v10 = *(_DWORD *)(a1 + 408);
      }
      *(_DWORD *)(a3 + 8) = v10;
      return v3;
    }
    v9 = *(_DWORD *)(a1 + 296);
LABEL_21:
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)a3 = v9;
    *(_DWORD *)(a3 + 64) = 18;
    return v3;
  }
  return 2147942487LL;
}
