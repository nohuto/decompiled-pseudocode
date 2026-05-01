/*
 * XREFs of ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4
 * Callers:
 *     ??$_Emplace_one_at_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAAEAUtagRECT@@$$QEAU2@@Z @ 0x180219984 (--$_Emplace_one_at_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAAEA.c)
 *     ??$emplace_back@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAURect@Foundation@Windows@@AEAU234@@Z @ 0x180466390 (--$emplace_back@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     ?Append@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180478BD0 (-Append@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wind.c)
 *     ?InsertAt@?$vector_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@@winrt@@QEAAXIAEBURect@Foundation@Windows@2@@Z @ 0x18047A354 (-InsertAt@-$vector_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundatio.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180513AB4 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 *     ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AC1D4 (-GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV-$vecto.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x1805ADC98 (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     _lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator() @ 0x18060A0A4 (_lambda_9c01280dcdfa2a6c98312ec0389307e5_--operator().c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801F9A20 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x18022C388 (-_Change_array@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRec.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@YAPEAURect@Foundation@Windows@@QEAU123@0PEAU123@AEAV?$allocator@URect@Foundation@Windows@@@0@@Z @ 0x1802BDA2C (--$_Uninitialized_move@PEAURect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x180310764 (--1_Reallocation_guard@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@.c)
 */

_OWORD *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(_QWORD *a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 size_of; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  _OWORD *v13; // rsi
  __int64 v14; // rdi
  _OWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  _OWORD *v21; // [rsp+38h] [rbp-40h]
  _OWORD *v22; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v19 = a1;
  v13 = (_OWORD *)(v11 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v20 = v9;
  v14 = v11;
  v21 = v13;
  v15 = (_OWORD *)v11;
  *v13 = v12;
  v16 = a1[1];
  v17 = *a1;
  v22 = v13 + 1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Windows::Foundation::Rect *>(v17, a2, v11);
    v16 = a1[1];
    v15 = v13 + 1;
    v17 = a2;
    v21 = (_OWORD *)v14;
  }
  std::_Uninitialized_move<Windows::Foundation::Rect *>(v17, v16, v15);
  std::vector<Geometry::CRect>::_Change_array(a1, v14, v8, v9, v19, 0LL, v20, v21, v22);
  std::vector<Windows::Foundation::Rect>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v13;
}
