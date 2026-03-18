/*
 * XREFs of ?GetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273824
 * Callers:
 *     ?GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180273960 (-GetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v14; // xmm6_4
  __int64 v15; // xmm0_8
  int v16; // eax

  v5 = a2 - 2;
  if ( !v5 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 188);
    v16 = *(_DWORD *)(a1 + 196);
    goto LABEL_22;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 204);
    v16 = *(_DWORD *)(a1 + 212);
LABEL_22:
    *((_DWORD *)a3 + 2) = v16;
    return 0LL;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v15 = *(_QWORD *)(a1 + 220);
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 35;
    v15 = *(_QWORD *)(a1 + 228);
LABEL_19:
    *(_QWORD *)a3 = v15;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return 2147942487LL;
          v14 = *(_DWORD *)(a1 + 260);
        }
        else
        {
          v14 = *(_DWORD *)(a1 + 256);
        }
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 252);
      }
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 244);
    }
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 236);
  }
  CExpressionValue::DestroyCurrent(a3);
  *(_DWORD *)a3 = v14;
  *((_DWORD *)a3 + 16) = 18;
  return 0LL;
}
