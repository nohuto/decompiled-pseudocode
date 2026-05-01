/*
 * XREFs of ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180530B00 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktop2@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805333F0 (-SwitchDesktop2@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805334A0 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180533630 (-SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180533870 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805343A0 (-SwitchRemoteDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchTyp.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A2584 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800F4048 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F4380 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800F452C (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800F4574 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?_Buy_nonzero@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1800F45BC (-_Buy_nonzero@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180194050 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1801F4E5C (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F4F44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x18020C66C (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18020C980 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180228D0C (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x18026A5DC (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180295E10 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296D24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C9160 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1802CD8BC (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CF4F8 (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$a.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18052D478 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E6F4 (--1-$test_data_control@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18052E72C (--1-$test_watcher@V-$merged_data@U_tip_VDSlideAnimationPerfTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x18052F970 (-FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesk.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x18052FF44 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x180534678 (-UpdateCurrentDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternalPrivate(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  unsigned int v3; // r13d
  int CurrentDesktopInternal; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  struct IVirtualDesktop *v10; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rax
  int updated; // eax
  unsigned __int64 v18; // rdx
  __int64 *v19; // r13
  __int64 *v20; // rbx
  __int64 *i; // r15
  __int64 (__fastcall **v22)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  CVirtualDesktopManager *v33; // rcx
  int v34; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v36; // eax
  __int64 v37; // rbx
  int (__fastcall *v38)(__int64, HSTRING *); // r12
  HSTRING v39; // r15
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, HSTRING *); // r12
  HSTRING v45; // r15
  int v46; // eax
  int v47; // r15d
  volatile signed __int32 *v48; // rbx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int SwitcherType; // eax
  HSTRING v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v55; // [rsp+38h] [rbp-C8h] BYREF
  struct IVirtualDesktop *v56; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v62; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v65; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v66; // [rsp+98h] [rbp-68h] BYREF
  __int128 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  char v70[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v71[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v72[48]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v73; // [rsp+100h] [rbp+0h]
  _QWORD v74[42]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v3 = a3;
  LODWORD(v54) = a3;
  v62 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                             (CVirtualDesktopManager *)(a1 + 8),
                             (struct IVirtualDesktop **)&v62);
  v7 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x240,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
    goto LABEL_76;
  }
  if ( SHIsSameObject(a2, v62) )
  {
    v8 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(a1, a2, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x244,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v8);
    v7 = 0;
    goto LABEL_76;
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v74,
    (__int64)"VirtualDesktopSwitchedActivity");
  v74[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v74);
  if ( *(_DWORD *)(a1 + 204) )
  {
    v7 = -2147019873;
    v9 = 585LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
LABEL_10:
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v74);
    goto LABEL_76;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 104) + 32LL))(
          *(_QWORD *)(a1 + 104),
          a2) )
  {
    v7 = -2147024809;
    v9 = 586LL;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v7 = -2147417848;
    v9 = 587LL;
    goto LABEL_9;
  }
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)&v56,
    (__int64 *)&v62);
  v10 = v56;
  CVirtualDesktopManager::UpdateCurrentDesktop((CVirtualDesktopManager *)a1, v56, (struct IVirtualDesktop *)a2);
  v55 = 0LL;
  v11 = *(__int64 **)(a1 + 112);
  v12 = *v11;
  v55 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v12 + 24))(v11, &v55);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 593LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
    goto LABEL_10;
  }
  v57 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v55 + 24))(v55, &v57);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = 596LL;
    goto LABEL_17;
  }
  CVirtualDesktopManager::GetCurrentDesktopCollection(a1, &v64);
  v15 = 0;
  if ( v57 )
  {
    while ( 1 )
    {
      v59 = 0LL;
      v16 = *v55;
      v59 = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v16 + 32))(
                  v55,
                  v15,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v59);
      v7 = updated;
      if ( updated < 0 )
        break;
      v67 = 0LL;
      v68 = 0LL;
      v18 = v65 - v64;
      if ( v18 )
      {
        std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Buy_nonzero(&v67, v18);
        v19 = v65;
        v20 = (__int64 *)v67;
        for ( i = v64; i != v19; ++i )
          wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
            v20++,
            i);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v20, v20);
        *((_QWORD *)&v67 + 1) = v20;
        v69 = 0LL;
        std::_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(&v69);
      }
      updated = CVirtualDesktopManager::UpdateViewVisibility(a1, v59, &v67);
      v7 = updated;
      if ( updated < 0 )
      {
        v24 = 602LL;
        goto LABEL_36;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
      if ( ++v15 >= v57 )
      {
        v3 = (unsigned int)v54;
        goto LABEL_31;
      }
    }
    v24 = 601LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v59);
    goto LABEL_37;
  }
LABEL_31:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    3u);
  v58 = 0LL;
  v22 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v10;
  v58 = 0LL;
  v23 = (*v22)(v10, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, (__int64 *)&v58);
  v7 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v23);
LABEL_33:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
LABEL_37:
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy((__int64)&v64);
    goto LABEL_18;
  }
  v54 = 0LL;
  v25 = *v58;
  v54 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v25 + 48))(v58, &v54) < 0 || (v28 = 1, v54) )
    v28 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
    1u,
    v26,
    v27);
  if ( v28 && !CVirtualDesktopManager::IsSlideShowEnabled(v30, v29, v31, v32) )
  {
    v63 = 0LL;
    if ( (int)CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v33, &v63) >= 0 )
    {
      if ( v63 )
      {
        v34 = CVirtualDesktopManager::AssignWallpaperToDesktop((CVirtualDesktopManager *)a1, v10, v63);
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x273,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v34);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v63);
  }
  string = 0LL;
  lpVtbl = a2->lpVtbl;
  v61 = 0LL;
  v36 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
          a2,
          &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
          &v61);
  v7 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x279,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v36);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v61);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v54);
    goto LABEL_33;
  }
  v37 = v61;
  v38 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v61 + 48LL);
  v39 = string;
  if ( string )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)v70);
    WindowsDeleteString(v39);
    wil::last_error_context::~last_error_context((wil::last_error_context *)v70);
  }
  string = 0LL;
  if ( v38(v37, &string) < 0 || !string )
  {
    v43 = (__int64)v58;
    v44 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*v58 + 48);
    v45 = v54;
    if ( v54 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)v71);
      WindowsDeleteString(v45);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v71);
    }
    v54 = 0LL;
    v46 = v44(v43, &v54);
    if ( v46 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x282,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v46);
    v40 = CVirtualDesktopManager::AssignWallpaperToDesktop(
            (CVirtualDesktopManager *)a1,
            (struct IVirtualDesktop *)a2,
            v54);
    v41 = retaddr;
    if ( v40 >= 0 )
      goto LABEL_63;
    v42 = 643LL;
    goto LABEL_62;
  }
  v40 = CVirtualDesktopManager::SetDesktopWallpaperInternal(
          (CVirtualDesktopManager *)a1,
          (struct IVirtualDesktop *)a2,
          string);
  v41 = retaddr;
  if ( v40 < 0 )
  {
    v42 = 637LL;
LABEL_62:
    wil::details::in1diag3::_Log_Hr(
      v41,
      (void *)v42,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v40);
  }
LABEL_63:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v61);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v54);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
  LockSetForegroundWindow(2u);
  v47 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 136) + 24LL))(
          *(_QWORD *)(a1 + 136),
          a2);
  if ( v47 < 0 )
  {
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>>((struct wil::details::IFailureCallback *)v72);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v73 + 2)) )
    {
      v48 = v73;
      v66 = v73;
      if ( v73 )
      {
        _InterlockedIncrement(v73 + 86);
        v10 = v56;
      }
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v48 + 2));
      *((_BYTE *)v48 + 272) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_data_control<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((void **)&v66);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v73 + 2));
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>::~test_watcher<tip2::details::merged_data<_tip_VDSlideAnimationPerfTest,_tip_VDSlideAnimationPerfTest>>((__int64)v72);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x294,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v47);
  }
  v49 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 144) + 32LL))(
          *(_QWORD *)(a1 + 144),
          a2);
  if ( v49 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x297,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v49);
  v50 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, struct IUnknown *))(**(_QWORD **)(a1 + 128) + 80LL))(
          *(_QWORD *)(a1 + 128),
          v10,
          a2);
  if ( v50 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v50);
  v51 = CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(a1, a2, v3);
  if ( v51 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v51);
  SwitcherType = CVirtualDesktopManager::GetSwitcherType(a1);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
    (__int64)v74,
    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v10,
    (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2,
    SwitcherType);
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy((__int64)&v64);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v74);
  v7 = 0;
LABEL_76:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v62);
  return v7;
}
