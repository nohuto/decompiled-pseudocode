/*
 * XREFs of ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B23D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddTightDirtyRect(__int64 a1, const struct D2D_RECT_F *a2)
{
  float v4; // xmm7_4
  float v5; // xmm6_4
  __int64 v6; // rax
  float v7; // xmm3_4
  double v8; // xmm2_8
  float v9; // xmm1_4
  float v10; // xmm0_4
  const struct tagRECT *v11; // rax
  CRegion *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  int v15[6]; // [rsp+38h] [rbp-38h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 40LL))(
    *(_QWORD *)(a1 + 8) + 8LL,
    &v14);
  if ( a2 )
  {
    v4 = (float)(int)v14;
    v5 = (float)SHIDWORD(v14);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
    v13 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<1>(v6, a2, (float *)&v13);
    v7 = *(float *)&v13;
    if ( *(float *)&v13 < 0.0 )
    {
      v7 = 0.0;
      LODWORD(v13) = 0;
    }
    *(_QWORD *)&v8 = DWORD1(v13);
    if ( *((float *)&v13 + 1) < 0.0 )
    {
      DWORD1(v13) = 0;
      v8 = 0.0;
    }
    v9 = *((float *)&v13 + 2);
    if ( *((float *)&v13 + 2) > v4 )
    {
      *((float *)&v13 + 2) = v4;
      v9 = v4;
    }
    v10 = *((float *)&v13 + 3);
    if ( *((float *)&v13 + 3) > v5 )
    {
      *((float *)&v13 + 3) = v5;
      v10 = v5;
    }
    if ( v9 > v7 && v10 > *(float *)&v8 )
    {
      v11 = (const struct tagRECT *)PixelAlign(v15, (unsigned int *)&v13, v8);
      CRegion::AddRectangle(*(CRegion **)(a1 + 464), v11);
    }
  }
  else
  {
    v12 = *(CRegion **)(a1 + 464);
    *((_QWORD *)&v13 + 1) = v14;
    *(_QWORD *)&v13 = 0LL;
    CRegion::SetRectangle(v12, (const struct MilRectU *)&v13);
  }
}
