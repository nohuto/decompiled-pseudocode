/*
 * XREFs of ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1802A52FC
 * Callers:
 *     ??$emplace_back@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAAEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@$$QEAU2@@Z @ 0x1802A5784 (--$emplace_back@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXQEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_K1@Z @ 0x180192278 (-_Change_array@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPLAN.c)
 *     ??$_Uninitialized_move@PEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A4F9C (--$_Uninitialized_move@PEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPL.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAA@XZ @ 0x1802A5A44 (--1_Reallocation_guard@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_M.c)
 */

char *__fastcall std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdi
  char *v15; // r8
  char *v16; // r13
  __int128 v17; // xmm1
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) / 136;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x1E1E1E1E1E1E1E1LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x1E1E1E1E1E1E1E1LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1E1E1E1E1E1E1E1LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1E1E1E1E1E1E1E1LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(136 * v11, v10);
  v13 = *a3;
  v14 = (__int64)v12;
  v21[0] = a1;
  v21[2] = v11;
  v15 = v12;
  v16 = &v12[136 * v6];
  v22 = (__int64)v16;
  *(_OWORD *)v16 = v13;
  v17 = a3[1];
  v23 = v16 + 136;
  *((_OWORD *)v16 + 1) = v17;
  *((_OWORD *)v16 + 2) = a3[2];
  *((_OWORD *)v16 + 3) = a3[3];
  *((_OWORD *)v16 + 4) = a3[4];
  *((_OWORD *)v16 + 5) = a3[5];
  *((_OWORD *)v16 + 6) = a3[6];
  *((_OWORD *)v16 + 7) = a3[7];
  *((_QWORD *)v16 + 16) = *((_QWORD *)a3 + 16);
  v18 = (__int64)a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<_DXGI_PRESENT_MULTIPLANE_OVERLAY *>(v19, a2, v12);
    v18 = (__int64)a1[1];
    v15 = v16 + 136;
    v19 = (void *)a2;
    v22 = v14;
  }
  std::_Uninitialized_move<_DXGI_PRESENT_MULTIPLANE_OVERLAY *>(v19, v18, v15);
  v21[1] = 0LL;
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Change_array((__int64)a1, v14, v8, v11);
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v16;
}
