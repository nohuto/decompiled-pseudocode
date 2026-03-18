/*
 * XREFs of ?GetProperty@CProjectedShadowScene@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027E270
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::GetProperty(_DWORD *a1, int a2, CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // xmm6_4

  v3 = 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    v10 = a1[32];
    goto LABEL_14;
  }
  v6 = v5 - 3;
  if ( !v6 )
  {
    v10 = a1[30];
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = a1[33];
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = a1[31];
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = a1[34];
    goto LABEL_14;
  }
  if ( v9 == 1 )
  {
    v10 = a1[35];
LABEL_14:
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 18;
    *(_DWORD *)a3 = v10;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x85u, 0LL);
  return v3;
}
