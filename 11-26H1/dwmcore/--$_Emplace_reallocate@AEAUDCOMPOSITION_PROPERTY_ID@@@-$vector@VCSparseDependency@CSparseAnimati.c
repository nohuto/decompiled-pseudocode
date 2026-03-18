/*
 * XREFs of ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC
 * Callers:
 *     ??$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAAAEAVCSparseDependency@CSparseAnimationDependencySet@@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18022BD44 (--$emplace_back@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimationDepen.c)
 * Callees:
 *     ?_Change_array@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAXQEAVCSparseDependency@CSparseAnimationDependencySet@@_K1@Z @ 0x18004F884 (-_Change_array@-$vector@VCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@VCSparseD.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_copy@PEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@00AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x1801AD630 (--$_Uninitialized_copy@PEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@V-$allocator@.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801AE9F8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@0PEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18022BCBC (--$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@VCSpars.c)
 *     ??1_Reallocation_guard@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAA@XZ @ 0x18022BFD0 (--1_Reallocation_guard@-$vector@VCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@V.c)
 */

CAnimationDependency *__fastcall std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Emplace_reallocate<DCOMPOSITION_PROPERTY_ID &>(
        __int64 a1,
        struct CAnimationDependency *a2,
        int *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T size_of; // rax
  __int64 v14; // rdx
  CAnimationDependency *v15; // rdi
  CAnimationDependency *v16; // r14
  int v17; // ecx
  struct CAnimationDependency *v18; // rdx
  struct CAnimationDependency *v19; // rcx
  __int64 v20; // rdx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  CAnimationDependency *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v3 = (__int64)a2 - *(_QWORD *)a1;
  v5 = 0xAAAAAAAAAAAAAAALL;
  v8 = v3 / 24;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v9 == 0xAAAAAAAAAAAAAAALL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      (unsigned __int128)(v3 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
      a3,
      v3);
  v10 = v9 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0xAAAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v5 = v12 + v11;
    if ( v12 + v11 < v10 )
      v5 = v10;
  }
  size_of = std::_Get_size_of_n<24>(v5);
  v22[0] = a1;
  v15 = (CAnimationDependency *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v22[2] = v5;
  v16 = (CAnimationDependency *)((char *)v15 + 24 * v8);
  v17 = *a3;
  v23 = v16;
  *(_QWORD *)v16 = 2LL;
  *((_QWORD *)v16 + 1) = 2LL;
  *((_DWORD *)v16 + 4) = v17;
  v18 = *(struct CAnimationDependency **)(a1 + 8);
  v19 = *(struct CAnimationDependency **)a1;
  v24 = (char *)v16 + 24;
  if ( a2 == v18 )
  {
    std::_Uninitialized_copy<CSparseAnimationDependencySet::CSparseDependency *,CSparseAnimationDependencySet::CSparseDependency *,std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(
      v19,
      v18,
      v15);
  }
  else
  {
    std::_Uninitialized_move<CSparseAnimationDependencySet::CSparseDependency *>(v19, a2, v15);
    v20 = *(_QWORD *)(a1 + 8);
    v23 = v15;
    std::_Uninitialized_move<CSparseAnimationDependencySet::CSparseDependency *>(a2, v20, (char *)v16 + 24);
  }
  v22[1] = 0LL;
  std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Change_array(
    (CAnimationDependency **)a1,
    v15,
    v10,
    v5);
  std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v16;
}
