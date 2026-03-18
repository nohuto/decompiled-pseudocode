/*
 * XREFs of ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057FC0
 * Callers:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058B30 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::AdjustContentWorldBounds(_QWORD *a1, float *a2)
{
  float v4; // xmm6_4
  __int64 v5; // rcx
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  char result; // al
  float v12; // xmm0_4

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 0;
  if ( (*(unsigned __int8 (**)(void))(*a1 + 344LL))() )
    v4 = FLOAT_0_5;
  else
    v4 = 0.0;
  v5 = a1[31];
  if ( v5
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 16LL)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)a1[31] + 336LL))(a1[31]) )
  {
    v4 = v4 + 0.5;
  }
  if ( v4 == 0.0 )
    return 1;
  if ( *a2 <= (float)(v4 - 3.4028235e38) )
    v6 = FLOAT_N3_4028235e38;
  else
    v6 = *a2 - v4;
  *a2 = v6;
  v7 = a2[1];
  if ( v7 <= (float)(v4 - 3.4028235e38) )
    v8 = FLOAT_N3_4028235e38;
  else
    v8 = v7 - v4;
  a2[1] = v8;
  v9 = a2[2];
  if ( (float)(3.4028235e38 - v4) <= v9 )
    v10 = FLOAT_3_4028235e38;
  else
    v10 = v9 + v4;
  a2[2] = v10;
  result = 1;
  v12 = a2[3];
  if ( (float)(3.4028235e38 - v4) <= v12 )
    a2[3] = 3.4028235e38;
  else
    a2[3] = v12 + v4;
  return result;
}
