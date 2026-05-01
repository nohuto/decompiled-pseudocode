/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800B5AC4 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG@Z @ 0x18031C72C (-AddRegionCode@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAAXPEBG.c)
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x18031CACC (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 *     ??$emplace_back@PEAUIApplicationView@@@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@QEAAAEAPEAUIApplicationView@@$$QEAPEAU2@@Z @ 0x18031F064 (--$emplace_back@PEAUIApplicationView@@@-$vector@PEAUIApplicationView@@V-$allocator@PEAUIApplicat.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180513AB4 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1801E9AF0 (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@YAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@0@@Z @ 0x18020B030 (--$_Uninitialized_move@PEAU-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@s.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r8
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v16 = (_QWORD *)v13;
  v22 = v3;
  v17 = (_QWORD *)(v13 + 8 * v5);
  *v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 1;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool> *,std::allocator<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>>(
      v19,
      a2,
      v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
    v23 = (_QWORD *)v15;
  }
  std::_Uninitialized_move<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool> *,std::allocator<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>>(
    v19,
    v18,
    v16);
  std::vector<void *>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
