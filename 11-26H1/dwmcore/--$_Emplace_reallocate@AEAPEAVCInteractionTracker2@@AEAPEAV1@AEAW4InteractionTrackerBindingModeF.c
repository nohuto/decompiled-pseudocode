/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAPEAUBinding@CInteractionTrackerBindingManager@@QEAU23@AEAPEAVCInteractionTracker2@@1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x180277B50
 * Callers:
 *     ??$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAAAEAUBinding@CInteractionTrackerBindingManager@@AEAPEAVCInteractionTracker2@@0AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x18027814C (--$emplace_back@AEAPEAVCInteractionTracker2@@AEAPEAV1@AEAW4InteractionTrackerBindingModeFlags@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801AE9F8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@YAPEAUBinding@CInteractionTrackerBindingManager@@QEAU12@0PEAU12@AEAV?$allocator@UBinding@CInteractionTrackerBindingManager@@@0@@Z @ 0x180277E0C (--$_Uninitialized_move@PEAUBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CInt.c)
 *     ??0Binding@CInteractionTrackerBindingManager@@QEAA@PEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802783DC (--0Binding@CInteractionTrackerBindingManager@@QEAA@PEAVCInteractionTracker2@@0W4InteractionTrack.c)
 *     ??1_Reallocation_guard@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@QEAA@XZ @ 0x18027853C (--1_Reallocation_guard@-$vector@UBinding@CInteractionTrackerBindingManager@@V-$allocator@UBindin.c)
 *     ?_Calculate_growth@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEBA_K_K@Z @ 0x18027949C (-_Calculate_growth@-$vector@UBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CI.c)
 *     ?_Change_array@?$vector@UBinding@CInteractionTrackerBindingManager@@V?$allocator@UBinding@CInteractionTrackerBindingManager@@@std@@@std@@AEAAXQEAUBinding@CInteractionTrackerBindingManager@@_K1@Z @ 0x1802794E4 (-_Change_array@-$vector@UBinding@CInteractionTrackerBindingManager@@V-$allocator@UBinding@CInter.c)
 */

char *__fastcall std::vector<CInteractionTrackerBindingManager::Binding>::_Emplace_reallocate<CInteractionTracker2 * &,CInteractionTracker2 * &,enum InteractionTrackerBindingModeFlags &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5)
{
  __int64 v5; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rbp
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v5 = *a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v9 == 0xAAAAAAAAAAAAAAALL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v10 = v9 + 1;
  v11 = std::vector<CInteractionTrackerBindingManager::Binding>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<24>(v11);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a4;
  v22[0] = a1;
  v22[2] = v11;
  v16 = *a5;
  v17 = &v14[24 * ((a2 - v5) / 24)];
  v24 = v17 + 24;
  CInteractionTrackerBindingManager::Binding::Binding(v17, *a3, v15, v16, a1);
  v18 = a1[1];
  v19 = v14;
  v20 = *a1;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CInteractionTrackerBindingManager::Binding *>(v20, a2, v14);
    v18 = a1[1];
    v19 = v17 + 24;
    v20 = a2;
    v23 = v14;
  }
  std::_Uninitialized_move<CInteractionTrackerBindingManager::Binding *>(v20, v18, v19);
  v22[1] = 0LL;
  std::vector<CInteractionTrackerBindingManager::Binding>::_Change_array(a1, v14, v10, v11);
  std::vector<CInteractionTrackerBindingManager::Binding>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v17;
}
