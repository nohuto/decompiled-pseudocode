/*
 * XREFs of ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801FEBEC
 * Callers:
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180288354 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x180018AA4 (--$_Uninitialized_move@PEAUEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801A3618 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ??$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@PEAU1@00AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1801B356C (--$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffec.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA@XZ @ 0x18028839C (--1_Reallocation_guard@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
        struct EffectInput **a1,
        const struct EffectInput *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  EffectInput *v11; // rdi
  char *v12; // rsi
  const struct EffectInput *v13; // rdx
  struct EffectInput *v14; // rcx
  const struct EffectInput *v15; // rdx
  _QWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF
  EffectInput *v18; // [rsp+38h] [rbp-30h]
  char *v19; // [rsp+40h] [rbp-28h]

  v3 = (unsigned __int128)((a2 - *a1) * (__int128)0x4924924924924925LL) >> 64;
  v5 = ((unsigned __int64)v3 >> 63) + (v3 >> 5);
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( v6 == 0x249249249249249LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v7 = v6 + 1;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4);
  v9 = v8 >> 1;
  if ( v8 <= 0x249249249249249LL - (v8 >> 1) )
  {
    v10 = v7;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    if ( v10 > 0x249249249249249LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x249249249249249LL;
  }
  v11 = (EffectInput *)std::_Allocate<16,std::_Default_allocate_traits>(112 * v10, v9);
  v17[0] = a1;
  v12 = (char *)v11 + 112 * v5;
  v17[2] = v10;
  v18 = (EffectInput *)v12;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  v12[16] = 0;
  *((_OWORD *)v12 + 3) = 0LL;
  v13 = a1[1];
  v14 = *a1;
  v19 = v12 + 112;
  if ( a2 == v13 )
  {
    std::_Uninitialized_copy<EffectInput *,EffectInput *,std::allocator<EffectInput>>(v14, v13, v11);
  }
  else
  {
    std::_Uninitialized_move<EffectInput *>(v14, a2, v11);
    v15 = a1[1];
    v18 = v11;
    std::_Uninitialized_move<EffectInput *>(a2, v15, (EffectInput *)(v12 + 112));
  }
  v17[1] = 0LL;
  std::vector<EffectInput>::_Change_array((__int64)a1, (__int64)v11, v7, v10);
  std::vector<EffectInput>::_Reallocation_guard::~_Reallocation_guard(v17);
  return v12;
}
