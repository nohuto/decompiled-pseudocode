/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180237A54
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@$$QEAV21@@Z @ 0x180237BC4 (--$emplace_back@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@@-.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x180237B84 (--$_Uninitialized_move@PEAV-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180237C14 (--1_Reallocation_guard@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup.c)
 *     ?_Calculate_growth@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180237D24 (-_Calculate_growth@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@s.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@2@_K1@Z @ 0x180237D64 (-_Change_array@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@.c)
 */

char *__fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rbx
  _QWORD *v14; // r8
  char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-38h]
  char *v22; // [rsp+38h] [rbp-30h]
  _QWORD *v23; // [rsp+40h] [rbp-28h]

  v4 = (a2 - CSyncLockGroup::g_syncLockGroups) >> 3;
  v6 = ((__int64)xmmword_1803E26A0 - CSyncLockGroup::g_syncLockGroups) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v7 = v6 + 1;
  v8 = std::vector<std::unique_ptr<CSyncLockGroup>>::_Calculate_growth(v6, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v12 = *a3;
  v13 = v11;
  *a3 = 0LL;
  v14 = v11;
  v21 = v8;
  v15 = &v11[8 * v4];
  *(_QWORD *)v15 = v12;
  v16 = xmmword_1803E26A0;
  v17 = CSyncLockGroup::g_syncLockGroups;
  v20 = &CSyncLockGroup::g_syncLockGroups;
  v23 = v15 + 8;
  v22 = v15;
  if ( a2 != (_QWORD)xmmword_1803E26A0 )
  {
    std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      CSyncLockGroup::g_syncLockGroups,
      a2,
      v11);
    v16 = xmmword_1803E26A0;
    v14 = v15 + 8;
    v17 = a2;
    v22 = v13;
  }
  std::_Uninitialized_move<std::unique_ptr<CSyncLockGroup> *,std::allocator<std::unique_ptr<CSyncLockGroup>>>(
    v17,
    v16,
    v14);
  std::vector<std::unique_ptr<CSyncLockGroup>>::_Change_array(v18, v13, v7, v8, v20, 0LL, v21, v22, v23);
  std::vector<std::unique_ptr<CSyncLockGroup>>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v15;
}
