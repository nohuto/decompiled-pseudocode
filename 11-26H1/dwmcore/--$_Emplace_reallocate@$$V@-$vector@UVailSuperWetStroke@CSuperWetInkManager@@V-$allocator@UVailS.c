/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x18022FDFC
 * Callers:
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x18020AEFC (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$0HI@@std@@YA_K_K@Z @ 0x18021C6E4 (--$_Get_size_of_n@$0HI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU12@0PEAU12@AEAV?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1802300E4 (--$_Uninitialized_move@PEAUVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStr.c)
 *     ??1_Reallocation_guard@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA@XZ @ 0x1802301E4 (--1_Reallocation_guard@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuper.c)
 *     ?_Change_array@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUVailSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x180231418 (-_Change_array@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStrok.c)
 */

char *__fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
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

  v3 = 0x222222222222222LL;
  v5 = (a2 - *a1) / 120;
  v6 = 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v6 == 0x222222222222222LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v7 = v6 + 1;
  v8 = 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(a1[2] - *a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x222222222222222LL - (v8 >> 1) )
  {
    v3 = v9 + v8;
    if ( v9 + v8 < v7 )
      v3 = v7;
  }
  size_of = std::_Get_size_of_n<120>(v3);
  v18 = a1;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v19 = v3;
  v13 = &v12[120 * v5];
  v14 = v12;
  v20 = v13;
  *(_DWORD *)(v13 + 113) = 0;
  *(_WORD *)(v13 + 117) = 0;
  v13[119] = 0;
  *(_QWORD *)v13 = 0LL;
  *((_QWORD *)v13 + 1) = 0LL;
  *((_QWORD *)v13 + 2) = 0LL;
  *((_QWORD *)v13 + 3) = -1LL;
  *((_OWORD *)v13 + 2) = 0LL;
  v21 = v13 + 120;
  *((_OWORD *)v13 + 3) = 0LL;
  *((_OWORD *)v13 + 4) = 0LL;
  *((_QWORD *)v13 + 10) = 0LL;
  *((_QWORD *)v13 + 11) = 0LL;
  *((_QWORD *)v13 + 12) = 0LL;
  *((_QWORD *)v13 + 13) = 0LL;
  v13[112] = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(v16, a2, v12);
    v15 = a1[1];
    v14 = v13 + 120;
    v16 = a2;
    v20 = v12;
  }
  std::_Uninitialized_move<CSuperWetInkManager::VailSuperWetStroke *>(v16, v15, v14);
  std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Change_array(a1, v12, v7, v3, v18, 0LL, v19, v20, v21);
  std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Reallocation_guard::~_Reallocation_guard(&v18);
  return v13;
}
