/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18022FC7C
 * Callers:
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180230140 (--$emplace_back@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x1801BC398 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x18023003C (--$_Uninitialized_move@PEAUSuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSup.c)
 *     ??1_Reallocation_guard@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA@XZ @ 0x1802301AC (--1_Reallocation_guard@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStrok.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x18023138C (-_Change_array@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuper.c)
 */

char *__fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  char *v13; // rdi
  char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]
  char *v20; // [rsp+38h] [rbp-30h]
  char *v21; // [rsp+40h] [rbp-28h]

  v3 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 3);
  v4 = 0x276276276276276LL;
  v6 = (a2 - *a1) / 104;
  if ( v3 == 0x276276276276276LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v7 = v3 + 1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v4 = v9 + v8;
    if ( v9 + v8 < v7 )
      v4 = v7;
  }
  size_of = std::_Get_size_of_n<104>(v4);
  v18 = a1;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v19 = v4;
  v13 = &v12[104 * v6];
  v14 = v12;
  v20 = v13;
  *(_DWORD *)(v13 + 97) = 0;
  *(_WORD *)(v13 + 101) = 0;
  v13[103] = 0;
  *(_QWORD *)v13 = 0LL;
  *((_QWORD *)v13 + 1) = 0LL;
  *((_OWORD *)v13 + 1) = 0LL;
  v21 = v13 + 104;
  *((_OWORD *)v13 + 2) = 0LL;
  *((_OWORD *)v13 + 3) = 0LL;
  *((_QWORD *)v13 + 8) = 0LL;
  *((_QWORD *)v13 + 9) = 0LL;
  *((_QWORD *)v13 + 10) = 0LL;
  *((_QWORD *)v13 + 11) = 0LL;
  v13[96] = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *>(v16, a2, v12);
    v15 = a1[1];
    v14 = v13 + 104;
    v16 = a2;
    v20 = v12;
  }
  std::_Uninitialized_move<CSuperWetInkManager::SuperWetStroke *>(v16, v15, v14);
  std::vector<CSuperWetInkManager::SuperWetStroke>::_Change_array(a1, v12, v7, v4, v18, 0LL, v19, v20, v21);
  std::vector<CSuperWetInkManager::SuperWetStroke>::_Reallocation_guard::~_Reallocation_guard(&v18);
  return v13;
}
