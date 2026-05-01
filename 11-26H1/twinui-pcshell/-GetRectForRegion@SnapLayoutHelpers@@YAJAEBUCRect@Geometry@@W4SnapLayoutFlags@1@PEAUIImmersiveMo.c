/*
 * XREFs of ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18016BE54
 * Callers:
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x1805A9BBC (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805AEB54 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B5C30 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805B5EF0 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18016D02C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x180281C14 (--C-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_co.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180281C50 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$c.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180282C10 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802B0CA4 (--1-$test_watcher@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802B0CD8 (--1-$test_data_control@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802B0D10 (--1-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B54D0 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AB428 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x1805AD2BC (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805ADD2C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapLayoutHelpers::GetRectForRegion(
        RECT *a1,
        char a2,
        SnapRectHelpers *a3,
        __int64 a4,
        struct tagRECT *lprc,
        __int64 a6)
{
  int v6; // r13d
  RECT v10; // xmm0
  RECT *v11; // rdi
  _QWORD *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int128 v16; // xmm6
  __int64 v17; // rdi
  struct IImmersiveMonitor *v18; // rdx
  unsigned int v19; // r12d
  int v20; // r15d
  unsigned int v21; // edi
  __int64 v22; // r14
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rbx
  int v26; // r13d
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int SnapRegionAnchorLocations; // eax
  LONG v31; // eax
  LONG v32; // eax
  __int64 v33; // rcx
  int v34; // ebx
  LONG v35; // eax
  int v36; // edi
  bool v37; // zf
  LONG v38; // eax
  __int64 v39; // rcx
  int v40; // ebx
  RECT v41; // xmm6
  RECT *v42; // rdi
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  RECT *v48; // [rsp+70h] [rbp-98h]
  LPRECT lprcDst; // [rsp+78h] [rbp-90h]
  void **v50; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v51[40]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v54[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-30h] BYREF
  RECT rcSrc; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v6 = a4;
  v54[0] = a4;
  v48 = a1;
  lprcDst = lprc;
  SetRectEmpty(lprc);
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
    *(_OWORD *)(a6 + 32) = 0LL;
  }
  v10 = *a1;
  rcSrc = *a1;
  if ( (a2 & 1) == 0 )
  {
    v43 = 0LL;
    v11 = *(RECT **)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v43);
    *(_QWORD *)&v53 = v11;
    if ( v11 )
      _InterlockedIncrement(&v11[23].right);
    tip2::details::shared_data<0,0,1>::begin_update(&v11->right);
    v11[17] = v10;
    tip2::details::shared_data<0,0,0>::end_update(&v11->right);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v53);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v53);
    if ( v43 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v43 + 8) )
      wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v43);
    v12 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v43);
    tip2::details::shared_data<0,0,0>::start(*v12 + 8LL, &v46);
    v50 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v51,
      (struct wil::details::IFailureCallback *)&v50,
      0LL,
      1);
    v52 = v43;
    if ( v43 )
      _InterlockedIncrement((volatile signed __int32 *)(v43 + 376));
    v55 = 0LL;
    v13 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v55);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A4,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v13);
      tip2::test_watcher<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_watcher<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(&v50);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v43);
      return v14;
    }
    v16 = v55;
    v17 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v43);
    *(_QWORD *)&v53 = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 376));
    tip2::details::shared_data<0,0,1>::begin_update(v17 + 8);
    *(_OWORD *)(v17 + 288) = v16;
    tip2::details::shared_data<0,0,0>::end_update(v17 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v53);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v53);
    v19 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a3, v18);
    v20 = 0;
    v21 = v19 + a1->top - DWORD1(v55) <= 2 * v19;
    if ( v19 + a1->bottom - HIDWORD(v55) <= 2 * v19 )
      v21 |= 4u;
    if ( a1->left - ((unsigned int)v55 - v19) <= 2 * v19 )
      v21 |= 2u;
    if ( v19 + a1->right - DWORD2(v55) <= 2 * v19 )
      v21 |= 8u;
    v22 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v43);
    *(_QWORD *)&v53 = v22;
    if ( v22 )
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 376));
    tip2::details::shared_data<0,0,1>::begin_update(v22 + 8);
    *(_DWORD *)(v22 + 320) = v21;
    tip2::details::shared_data<0,0,0>::end_update(v22 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v53);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v53);
    v44 = 0LL;
    v23 = 0;
    v45 = 0LL;
    if ( (v21 & 0xA) != 0xA )
    {
      v24 = SnapLayoutHelpers::DetermineFillWindow(
              v21,
              v6,
              (unsigned int)&SnapLayoutHelpers::IsVerticalEdge,
              (unsigned int)&SnapLayoutHelpers::HasComplementaryVerticalEdge);
      v23 = v45;
      if ( v24 < 0 )
        v23 = 0;
      LODWORD(v45) = v23;
    }
    v25 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v26 = 0;
    if ( (v21 & 5) != 5 )
    {
      v27 = SnapLayoutHelpers::DetermineFillWindow(
              v21,
              v54[0],
              (unsigned int)&SnapLayoutHelpers::IsHorizontalEdge,
              (unsigned int)&SnapLayoutHelpers::HasComplementaryHorizontalEdge);
      v20 = v47;
      if ( v27 < 0 )
        v20 = 0;
      LODWORD(v47) = v20;
      v26 = HIDWORD(v47);
      v25 = v46;
    }
    if ( v23 == 1 && v20 == 1 )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v44 + 48LL))(v44, v54);
      LODWORD(v53) = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v28, &v55, v19);
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 48LL))(v25, v54);
      SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(v29, &v55, v19);
      if ( (SnapRegionAnchorLocations & 0xA) == 0xA )
      {
        SnapLayoutHelpers::HasNonComplementaryEdge(v21, (unsigned int)v53, (char *)&v47 + 4);
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v46, &v44);
        v26 = HIDWORD(v47);
        v20 = v47;
        v25 = v46;
      }
      else
      {
        SnapLayoutHelpers::HasNonComplementaryEdge(v21, SnapRegionAnchorLocations, (char *)&v45 + 4);
        wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v44, &v46);
        v23 = v45;
      }
    }
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 48LL))(v25, &v53);
      if ( (v21 & 1) != 0 )
      {
        v31 = HIDWORD(v53);
        if ( v26 == 1 )
          v31 = DWORD1(v53);
        rcSrc.bottom = v31;
      }
      else if ( (v21 & 4) != 0 )
      {
        v32 = HIDWORD(v53);
        if ( v26 == 1 )
          v32 = DWORD1(v53);
        rcSrc.top = v32;
      }
      v33 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                         &v43,
                         v54);
      *(_OWORD *)(v33 + 348) = v53;
      if ( !*(_BYTE *)(v33 + 364) )
        *(_BYTE *)(v33 + 364) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v54);
      v34 = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v53, &v55, v19);
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                               &v43,
                               v54)
                + 368LL) = v34;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v54);
    }
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v44 + 48LL))(v44, &v53);
      if ( (v21 & 2) != 0 )
      {
        v35 = DWORD2(v53);
        v36 = HIDWORD(v45);
        if ( HIDWORD(v45) == 2 )
          v35 = v53;
        rcSrc.right = v35;
      }
      else
      {
        v37 = (v21 & 8) == 0;
        v36 = HIDWORD(v45);
        if ( !v37 )
        {
          v38 = DWORD2(v53);
          if ( HIDWORD(v45) == 2 )
            v38 = v53;
          rcSrc.left = v38;
        }
      }
      v39 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                         &v43,
                         v54);
      *(_OWORD *)(v39 + 324) = v53;
      if ( !*(_BYTE *)(v39 + 340) )
        *(_BYTE *)(v39 + 340) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v54);
      v40 = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v53, &v55, v19);
      *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::operator->(
                               &v43,
                               v54)
                + 344LL) = v40;
      tip2::test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>(v54);
    }
    else
    {
      v36 = HIDWORD(v45);
    }
    v41 = rcSrc;
    if ( a6 )
    {
      *(_DWORD *)a6 = v23;
      *(_DWORD *)(a6 + 4) = v20;
      *(_DWORD *)(a6 + 8) = v36;
      *(_DWORD *)(a6 + 12) = v26;
      *(RECT *)(a6 + 16) = *v48;
      *(RECT *)(a6 + 32) = v41;
    }
    v42 = *(RECT **)tip2::tip_test<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>>::ensure_data(&v43);
    *(_QWORD *)&v53 = v42;
    if ( v42 )
      _InterlockedIncrement(&v42[23].right);
    tip2::details::shared_data<0,0,1>::begin_update(&v42->right);
    v42[19] = v41;
    tip2::details::shared_data<0,0,0>::end_update(&v42->right);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::reset(&v53);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v53);
    if ( v43 )
      tip2::details::shared_data<0,0,0>::complete_without_lock(v43 + 8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v52);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v51);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>,wil::err_returncode_policy>(&v43);
  }
  CopyRect(lprcDst, &rcSrc);
  return 0LL;
}
