/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180277CB0
 * Callers:
 *     ?ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z @ 0x180278B68 (-ScheduleCleanup@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker2@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180246258 (--1_Reallocation_guard@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCManipulation@@@WRL@Microsoft@@_K1@Z @ 0x18024EFFC (-_Change_array@-$vector@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCManip.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@@0@@Z @ 0x180277E78 (--$_Uninitialized_move@PEAV-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@V-$allocator@V-$ComPt.c)
 *     ??0?$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1802782E0 (--0-$ComPtr@VCInteractionTracker2@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<CInteractionTracker2>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CInteractionTracker2>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rsi
  char *v15; // r15
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v20[0] = a1;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v20[2] = v3;
  v15 = &v14[8 * v5];
  v22 = v15 + 8;
  Microsoft::WRL::ComPtr<CInteractionTracker2>::ComPtr<CInteractionTracker2>(v15, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  v21 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<CInteractionTracker2> *,std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(
      v18,
      a2,
      v14);
    v16 = a1[1];
    v17 = v15 + 8;
    v18 = a2;
    v21 = v14;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CInteractionTracker2> *,std::allocator<Microsoft::WRL::ComPtr<CInteractionTracker2>>>(
    v18,
    v16,
    v17);
  v20[1] = 0LL;
  std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Change_array((__int64)a1, (__int64)v14, v9, v3);
  std::vector<Microsoft::WRL::ComPtr<CManipulation>>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v15;
}
