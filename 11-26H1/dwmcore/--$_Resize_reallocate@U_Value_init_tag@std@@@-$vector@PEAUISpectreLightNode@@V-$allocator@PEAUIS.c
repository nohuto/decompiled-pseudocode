/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802345D4
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x18025A880 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXQEAPEAVCBaseExpression@@_K1@Z @ 0x1801BD56C (-_Change_array@-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAX.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rsi
  size_t v12; // rbx
  size_t v13; // r8
  const void *v14; // rdx
  _QWORD v15[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v16; // [rsp+38h] [rbp-30h]
  char *v17; // [rsp+40h] [rbp-28h]

  v2 = 0x1FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v7 = v5 >> 3;
  v8 = v6 >> 1;
  if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<8>(v2);
  v15[0] = a1;
  v15[2] = v2;
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v16 = &v11[8 * v7];
  v12 = 8 * (a2 - v7);
  memset_0(v16, 0, v12);
  v13 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v14 = *a1;
  v17 = &v16[v12];
  memmove_0(v11, v14, v13);
  v15[1] = 0LL;
  std::vector<CBaseExpression *>::_Change_array((__int64)a1, (__int64)v11, a2, v2);
  std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard((__int64)v15);
}
