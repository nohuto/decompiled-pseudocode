/*
 * XREFs of ??$_Emplace_reallocate@PEAVCBrush@@@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@AEAAPEAPEAVCBrush@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18026DA04
 * Callers:
 *     ?AppendConsumedBrushes@CNineGridBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x1801DD170 (-AppendConsumedBrushes@CNineGridBrush@@MEBAXPEAV-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@s.c)
 *     ?AppendConsumedBrushes@CEffectBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x18026DE00 (-AppendConsumedBrushes@CEffectBrush@@MEBAXPEAV-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std.c)
 *     ?AppendConsumedBrushes@CMaskBrush@@MEBAXPEAV?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@@Z @ 0x18027AC00 (-AppendConsumedBrushes@CMaskBrush@@MEBAXPEAV-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAPEAPEAVCPrimitiveColor@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVCPrimitiveColor@@@0@@Z @ 0x1800FC2C0 (--$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAP.c)
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXQEAPEAVCBaseExpression@@_K1@Z @ 0x1801BD56C (-_Change_array@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAX.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 */

char *__fastcall std::vector<CBrush *>::_Emplace_reallocate<CBrush *>(void **a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  char *v15; // r8
  char *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]

  v5 = (a2 - (__int64)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v13 = *a3;
  v14 = (__int64)v12;
  v20[0] = a1;
  v15 = v12;
  v20[2] = v9;
  v16 = &v12[8 * v5];
  *(_QWORD *)v16 = v13;
  v17 = (__int64)a1[1];
  v18 = *a1;
  v22 = v16 + 8;
  v21 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CPrimitiveColor * *>(v18, a2, v12);
    v17 = (__int64)a1[1];
    v15 = v16 + 8;
    v18 = (void *)a2;
    v21 = (char *)v14;
  }
  std::_Uninitialized_move<CPrimitiveColor * *>(v18, v17, v15);
  v20[1] = 0LL;
  std::vector<CBaseExpression *>::_Change_array((__int64)a1, v14, v8, v9);
  std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v16;
}
