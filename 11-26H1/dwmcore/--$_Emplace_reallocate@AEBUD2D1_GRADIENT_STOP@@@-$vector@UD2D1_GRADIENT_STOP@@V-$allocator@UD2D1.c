/*
 * XREFs of ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x18027E7CC
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1802113D0 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x1801BBD2C (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAUD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@YAPEAUD2D1_GRADIENT_STOP@@QEAU1@0PEAU1@AEAV?$allocator@UD2D1_GRADIENT_STOP@@@0@@Z @ 0x1801CA8C0 (--$_Uninitialized_move@PEAUD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@YAP.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAA@XZ @ 0x18027E948 (--1_Reallocation_guard@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@st.c)
 */

char *__fastcall std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdi
  char *v15; // r14
  char *v16; // r8
  int v17; // ecx
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0xCCCCCCCCCCCCCCCLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0xCCCCCCCCCCCCCCCLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(20 * v11, v10);
  v13 = *a3;
  v21[0] = a1;
  v14 = (__int64)v12;
  v21[2] = v11;
  v15 = &v12[20 * v6];
  v16 = v12;
  v17 = *((_DWORD *)a3 + 4);
  *(_OWORD *)v15 = v13;
  *((_DWORD *)v15 + 4) = v17;
  v18 = (__int64)a1[1];
  v19 = *a1;
  v23 = v15 + 20;
  v22 = (__int64)v15;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<D2D1_GRADIENT_STOP *>(v19, a2, v12);
    v18 = (__int64)a1[1];
    v16 = v15 + 20;
    v19 = (void *)a2;
    v22 = v14;
  }
  std::_Uninitialized_move<D2D1_GRADIENT_STOP *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<D2D1_GRADIENT_STOP>::_Change_array((__int64)a1, v14, v8, v11);
  std::vector<D2D1_GRADIENT_STOP>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
