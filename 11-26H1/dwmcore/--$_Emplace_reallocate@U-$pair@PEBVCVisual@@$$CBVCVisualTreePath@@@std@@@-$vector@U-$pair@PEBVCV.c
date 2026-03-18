/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x1801E58E4
 * Callers:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??$_Emplace_one_at_back@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAAEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU21@@Z @ 0x180091DB8 (--$_Emplace_one_at_back@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$construct_at@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@$$QEAU10@@Z @ 0x18016FB8C (--$construct_at@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@std@@YAPEAU-$pair@PEBVCVis.c)
 *     ?_Change_array@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAXQEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@_K1@Z @ 0x1801B03C4 (-_Change_array@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PE.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1801B42E0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_copy@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@PEAU12@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@PEAU10@00AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801B72FC (--$_Uninitialized_copy@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@PEAU12@V-$allocator@U.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1802198D4 (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAA@XZ @ 0x180237204 (--1_Reallocation_guard@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-.c)
 */

__int64 *__fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // rsi
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rdx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = (char *)a2 - (char *)*a1;
  v6 = ((char *)a1[1] - (char *)*a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = ((char *)a1[2] - (char *)*a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v14 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v21[0] = a1;
  v15 = (__int64 *)((char *)v14 + (v4 & 0xFFFFFFFFFFFFFFC0uLL));
  v21[2] = v3;
  v16 = v14;
  v23 = v15 + 8;
  std::construct_at<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
    v15,
    a3);
  v17 = a1[1];
  v18 = *a1;
  v22 = v15;
  if ( a2 == v17 )
  {
    std::_Uninitialized_copy<std::pair<CVisual const *,CVisualTreePath const> *,std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      v18,
      v17,
      v16);
  }
  else
  {
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      v18,
      a2,
      v16);
    v19 = a1[1];
    v22 = v16;
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      a2,
      v19,
      v15 + 8);
  }
  v21[1] = 0LL;
  std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Change_array((__int64)a1, (__int64)v16, v9, v3);
  std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
