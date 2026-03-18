/*
 * XREFs of ?GetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1800D3710
 * Callers:
 *     ?GetProperty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248880 (-GetProperty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@P.c)
 *     ?GetProperty@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802653E0 (-GetProperty@-$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@MEAAJUDCOMPOSITION_PROPERTY_I.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800D5440 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  FLOAT v4; // xmm6_4
  FLOAT v5; // xmm7_4
  bool v6; // bl
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // xmm6_4
  int v12; // xmm7_4
  int v13; // xmm8_4
  float OpacityInternal; // xmm6_4
  int v15; // edx
  FLOAT y; // xmm6_4
  FLOAT z; // xmm7_4
  FLOAT x; // xmm0_4
  struct D2D_VECTOR_3F v19; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 == 38 )
  {
    v6 = (*(_BYTE *)(a1 + 102) & 0x20) != 0;
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
    goto LABEL_8;
  }
  if ( a2 == 29 )
  {
    v4 = *(float *)(a1 + 132);
    v5 = *(float *)(a1 + 136);
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
    goto LABEL_5;
  }
  v8 = a2 - 26;
  if ( !v8 )
  {
    OpacityInternal = CVisual::GetOpacityInternal((CVisual *)a1);
    CExpressionValue::DestroyCurrent(a3);
    *(float *)a3 = OpacityInternal;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v6 = (*(_BYTE *)(a1 + 101) & 0x20) != 0;
    CExpressionValue::DestroyCurrent(a3);
LABEL_8:
    *(_BYTE *)a3 = v6;
    *((_DWORD *)a3 + 16) = 17;
    return 0LL;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = *(_DWORD *)(a1 + 112);
    v12 = *(_DWORD *)(a1 + 116);
    v13 = *(_DWORD *)(a1 + 120);
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
    *((_DWORD *)a3 + 16) = 52;
    *(_DWORD *)a3 = v11;
    *((_DWORD *)a3 + 1) = v12;
    *((_DWORD *)a3 + 2) = v13;
    return 0LL;
  }
  v15 = v10 - 2;
  if ( !v15 )
  {
    CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v19);
    y = v19.y;
    z = v19.z;
    CExpressionValue::DestroyCurrent(a3);
    x = v19.x;
    *((_DWORD *)a3 + 16) = 52;
    *(FLOAT *)a3 = x;
    *((FLOAT *)a3 + 1) = y;
    *((FLOAT *)a3 + 2) = z;
    return 0LL;
  }
  if ( v15 == 1 )
  {
    CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1, &v19);
    v4 = v19.x;
    v5 = v19.y;
    CExpressionValue::DestroyCurrent(a3);
LABEL_5:
    *(FLOAT *)a3 = v4;
    *((FLOAT *)a3 + 1) = v5;
    *((_DWORD *)a3 + 16) = 35;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1601u, 0LL);
  return 2147942487LL;
}
