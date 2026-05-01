/*
 * XREFs of ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1800E2B1C
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180268460 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1800E30B8 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800E485C (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??4?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E4884 (--4-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBase@d.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802929AC (--1-$test_data_control@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802929E4 (--1-$test_watcher@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180292A0C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180292A78 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1802AE5A4 (-CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA-AUCalculatedSnapRegion@@AEBUSnapRegion.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x1805B61E0 (_anonymous_namespace_--CreateDefaultLayout.c)
 *     _anonymous_namespace_::CreateRowLayout @ 0x1805B624C (_anonymous_namespace_--CreateRowLayout.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B64CC (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutProvider::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int128 v11; // xmm6
  __int64 v12; // rdi
  __int128 v13; // xmm6
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  int v31; // [rsp+20h] [rbp-60h]
  _BYTE v32[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v33[40]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v34; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v36; // [rsp+B0h] [rbp+30h] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>>((struct wil::details::IFailureCallback *)v32);
  v6 = *(_QWORD *)(a3 + 16);
  v7 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 352));
  tip2::details::shared_data<0,0,1>::begin_update(v7 + 8);
  *(_QWORD *)(v7 + 276) = v6;
  tip2::details::shared_data<0,0,0>::end_update(v7 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
  if ( SnapLayoutProvider::UpdateMonitorDataFromPoint(
         (SnapLayoutProvider *)a1,
         (const struct Geometry::CPoint *)(a3 + 16),
         *(struct IApplicationView **)a3,
         *(struct ISnappedWindowModel **)(a3 + 8))
    || !*(_QWORD *)(a1 + 136) )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 128);
    v9 = anonymous_namespace_::CreateDefaultLayout(&v36, v8);
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
      a1 + 136,
      v9);
    std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v36);
    *(_DWORD *)(a1 + 24) = 1;
  }
  v10 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v10 + 8);
  *(_BYTE *)(v10 + 272) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v10 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
  v11 = *(_OWORD *)(a1 + 56);
  v12 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v12 + 8);
  *(_OWORD *)(v12 + 284) = v11;
  tip2::details::shared_data<0,0,0>::end_update(v12 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
  v13 = *(_OWORD *)(a1 + 72);
  v14 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v14 + 8);
  *(_OWORD *)(v14 + 300) = v13;
  tip2::details::shared_data<0,0,0>::end_update(v14 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    v16 = *(_DWORD *)(a3 + 32);
    if ( v16 == 2 )
    {
      v17 = operator new(8uLL);
      *v17 = &ColumnSnapLayout::`vftable';
      v18 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
      *(_QWORD *)(a1 + 136) = v17;
      if ( v18 )
        (**v18)(v18, 1LL);
      *(_DWORD *)(a1 + 24) = 2;
      if ( (*(_BYTE *)(a3 + 24) & 1) == 0 )
      {
        *(_QWORD *)(a1 + 144) = *(_QWORD *)std::chrono::steady_clock::now(&v36);
LABEL_18:
        SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, a2, a3);
        v19 = v34;
        v36 = v34;
        if ( v34 )
          _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
        tip2::details::shared_data<0,0,1>::begin_update(v19 + 8);
        *(_BYTE *)(v19 + 273) = 0;
        tip2::details::shared_data<0,0,0>::end_update(v19 + 8);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
        v20 = v34;
        v36 = v34;
        if ( v34 )
          _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
        tip2::details::shared_data<0,0,1>::begin_update(v20 + 8);
        *(_OWORD *)(v20 + 332) = *(_OWORD *)(a2 + 20);
        tip2::details::shared_data<0,0,0>::end_update(v20 + 8);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
        v21 = v34;
        v36 = v34;
        if ( v34 )
          _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
        tip2::details::shared_data<0,0,1>::begin_update(v21 + 8);
        *(_BYTE *)(v21 + 274) = 1;
        tip2::details::shared_data<0,0,0>::end_update(v21 + 8);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(&v36);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v36);
        tip2::details::shared_data<0,0,0>::complete_without_lock(v34 + 8);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v34);
        wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v33);
        return a2;
      }
    }
    else if ( *(_BYTE *)(a1 + 128) && ((v16 - 4) & 0xFFFFFFFB) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 136) + 8LL))(
        *(_QWORD *)(a1 + 136),
        a2,
        *(_QWORD *)(a1 + 32),
        a1 + 48,
        a3);
      v24 = MulDiv(100, *(_DWORD *)(a1 + 88), 96);
      v25 = *(_DWORD *)(a3 + 20) - v24;
      if ( *(_DWORD *)(a2 + 24) >= v25 )
        v25 = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v25;
      v26 = *(_DWORD *)(a3 + 20) + v24;
      if ( v26 >= *(_DWORD *)(a2 + 32) )
        v26 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v26;
      v27 = anonymous_namespace_::CreateRowLayout(&v36);
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
        a1 + 136,
        v27);
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v36);
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_43;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 2 )
    {
      if ( *(_DWORD *)(a3 + 32) == 2 )
      {
        if ( 1000000LL * *(_QWORD *)(a1 + 152) >= *(_QWORD *)std::chrono::steady_clock::now(&v36)
                                                - *(_QWORD *)(a1 + 144) )
          goto LABEL_18;
        goto LABEL_30;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 24) != 3 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1C2,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8007139FLL,
          v31);
      if ( *(_DWORD *)(a3 + 32) == 8 || *(_DWORD *)(a3 + 32) == 4 )
        goto LABEL_30;
    }
    LOBYTE(v15) = *(_BYTE *)(a1 + 128);
    v23 = anonymous_namespace_::CreateDefaultLayout(&v36, v15);
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::operator=(
      a1 + 136,
      v23);
    std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v36);
    *(_DWORD *)(a1 + 24) = 1;
  }
LABEL_30:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 136) + 8LL))(
    *(_QWORD *)(a1 + 136),
    a2,
    *(_QWORD *)(a1 + 32),
    a1 + 48,
    a3);
LABEL_43:
  v28 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v28 + 8);
  *(_BYTE *)(v28 + 273) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v36);
  v29 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v29 + 8);
  *(_OWORD *)(v29 + 316) = *(_OWORD *)(a2 + 4);
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v36);
  v30 = v34;
  v36 = v34;
  if ( v34 )
    _InterlockedAdd((volatile signed __int32 *)(v34 + 352), 1u);
  tip2::details::shared_data<0,0,1>::begin_update(v30 + 8);
  *(_OWORD *)(v30 + 332) = *(_OWORD *)(a2 + 20);
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(&v36);
  tip2::details::shared_data<0,0,0>::complete_without_lock(v34 + 8);
  tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(v32);
  return a2;
}
