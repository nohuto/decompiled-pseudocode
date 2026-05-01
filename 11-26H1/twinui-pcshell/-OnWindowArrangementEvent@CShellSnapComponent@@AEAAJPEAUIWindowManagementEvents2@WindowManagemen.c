/*
 * XREFs of ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A0510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006BC68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18006F23C (-IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180077F40 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18008D36C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800E3714 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$WindowArrangementEvent@AEB_KAEBIAEBH@CSnapComponentTelemetry@@SAXAEB_KAEBIAEBH@Z @ 0x1801E5FBC (--$WindowArrangementEvent@AEB_KAEBIAEBH@CSnapComponentTelemetry@@SAXAEB_KAEBIAEBH@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1802174AC (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023A2D4 (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?SnapEducation_WindowSnapped@CSnapComponentTelemetry@@SAXXZ @ 0x1802C652C (-SnapEducation_WindowSnapped@CSnapComponentTelemetry@@SAXXZ.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___ @ 0x18059CCC8 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Windows--Foundation--Re.c)
 *     ?BringUpDeferredZOrderWindow@CShellSnapComponent@@AEAAXPEAUHWND__@@@Z @ 0x18059E71C (-BringUpDeferredZOrderWindow@CShellSnapComponent@@AEAAXPEAUHWND__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805A1534 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement@@@details@.c)
 *     ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1805A1620 (-SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV-$com_ptr_t@UIAp.c)
 *     ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1805A171C (-SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRE.c)
 *     ?WindowId@?$consume_WindowsUdk_UI_Shell_ISuggestedWindowPosition@UISuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805A394C (-WindowId@-$consume_WindowsUdk_UI_Shell_ISuggestedWindowPosition@UISuggestedWindowPosition@Shell.c)
 *     ?GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA?AV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@XZ @ 0x1805B3D38 (-GetGuidedSnapAssistRegions@SnapFlyoutHost@@QEAA-AV-$vector@URect@Foundation@Windows@@V-$allocat.c)
 *     ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3E38 (-GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA-AV-$vector@USuggestedWindowPosition@Shell@UI@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CShellSnapComponent::OnWindowArrangementEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  _DWORD *v5; // r12
  int *v6; // r13
  bool v7; // bl
  __int64 v8; // rdx
  char v9; // r8
  HWND v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  struct IApplicationView *v16; // rdx
  unsigned int v17; // ebx
  struct IImmersiveApplication *ApplicationFromView; // rax
  struct IImmersiveApplication *v20; // rbx
  HMONITOR v21; // r9
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, HMONITOR, __int64 *); // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  struct IApplicationView *v27; // rdx
  unsigned int v28; // r15d
  unsigned int v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // r14d
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v37; // rdx
  __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rax
  float *v42; // rax
  float v43; // xmm1_4
  float v44; // xmm0_4
  int v45; // eax
  int v46; // eax
  SnapLayoutProvider *v47; // rcx
  int *v48; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-31h]
  int v50; // [rsp+4Ch] [rbp-2Dh]
  __int128 v51; // [rsp+50h] [rbp-29h] BYREF
  _OWORD v52[2]; // [rsp+60h] [rbp-19h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v53[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v54; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v56; // [rsp+E0h] [rbp+67h] BYREF
  ApplicationViewHelpers *v57; // [rsp+F0h] [rbp+77h] BYREF
  struct IImmersiveApplication *v58; // [rsp+F8h] [rbp+7Fh] BYREF

  v5 = (_DWORD *)((char *)a3 + 16);
  v6 = (int *)((char *)a3 + 8);
  v48 = (int *)((char *)a3 + 8);
  CSnapComponentTelemetry::WindowArrangementEvent<unsigned __int64 const &,unsigned int const &,int const &>(
    a3,
    (int *)a3 + 2,
    (int *)a3 + 4);
  v7 = *v5 != -1 && *v5 && (*(_BYTE *)v5 & 2) == 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
  v10 = *(HWND *)a3;
  if ( *v6 == 1 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      v9);
    if ( (__int64)(*((_QWORD *)this + 96) - *((_QWORD *)this + 95)) >> 4 )
    {
      CShellSnapComponent::BringUpDeferredZOrderWindow(this, v10);
    }
    else if ( *((_BYTE *)this + 752) )
    {
      if ( *((HWND *)this + 92) == v10 && v10 != GetForegroundWindow() )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, int))(**((_QWORD **)this + 49) + 24LL))(
          *((_QWORD *)this + 49),
          *((_QWORD *)this + 92),
          *((_QWORD *)this + 93),
          0LL,
          3,
          1,
          2);
      *((_BYTE *)this + 752) = 0;
    }
    if ( !v7 || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 32LL))(*((_QWORD *)this + 30)) )
      goto LABEL_45;
    v57 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 28);
    v14 = *v13;
    v57 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, HWND, ApplicationViewHelpers **))(v14 + 48))(v13, v10, &v57);
    v17 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B6,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
      return v17;
    }
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v57, v16);
    v20 = ApplicationFromView;
    v58 = ApplicationFromView;
    if ( ApplicationFromView )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)ApplicationFromView + 8LL))(ApplicationFromView);
    if ( !v20 || (v21 = MonitorFromWindow(v10, 0)) == 0LL )
    {
LABEL_28:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
      if ( !ApplicationViewHelpers::IsTopMostView(
              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v57,
              v27) )
      {
        v28 = *((_DWORD *)a3 + 5);
        if ( v28 == 1 )
        {
          v29 = 1;
        }
        else
        {
          v29 = 0;
          if ( v28 == 4 )
            v29 = 2;
        }
        LOBYTE(v56) = 0;
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 74) + 64LL))(
                *((_QWORD *)this + 74),
                &v56);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5D5,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v30);
        if ( !(_BYTE)v56 )
        {
          if ( *((_BYTE *)this + 921) && (*(_BYTE *)v5 & 4) != 0 )
          {
            SnapFlyoutHost::GetGuidedSnapAssistRegions(*((_QWORD *)this + 114), v52);
            *(_OWORD *)v53 = 0LL;
            v54 = 0LL;
            std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___(
              (__int64 *)&v58,
              *(float **)&v52[0],
              *((float **)&v52[0] + 1),
              (__int64)v53);
            CShellSnapComponent::SendSnapBarUsage(v31, v28, &v57, v53);
            v32 = (__int64)(*((_QWORD *)&v52[0] + 1) - *(_QWORD *)&v52[0]) >> 4;
            if ( v32 )
            {
              v33 = (*(__int64 (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD, winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *, _DWORD))(**((_QWORD **)this + 31) + 40LL))(
                      *((_QWORD *)this + 31),
                      v57,
                      v29,
                      v53[0],
                      v32);
              if ( v33 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x5E8,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v33);
            }
            std::vector<Geometry::CRect>::_Tidy((__int64 *)v53);
            std::vector<Geometry::CRect>::_Tidy((__int64 *)v52);
          }
          else
          {
            v34 = (*(__int64 (__fastcall **)(_QWORD, ApplicationViewHelpers *, _QWORD, _QWORD))(**((_QWORD **)this + 31)
                                                                                              + 32LL))(
                    *((_QWORD *)this + 31),
                    v57,
                    *((unsigned int *)this + 268),
                    v29);
            if ( v34 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5ED,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v34);
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
LABEL_45:
      if ( *((_BYTE *)this + 921) && (*(_BYTE *)v5 & 8) != 0 )
      {
        SnapFlyoutHost::GetSuggestedWindowPositions(*((_QWORD *)this + 114), v53);
        v35 = *((_DWORD *)a3 + 5);
        LODWORD(v56) = v35;
        v36 = 0;
        v37 = v53[1];
        v11 = (__int64 *)v53[0];
        if ( (v53[1] - v53[0]) >> 3 )
        {
          v38 = 0LL;
          v39 = 0LL;
          do
          {
            v40 = *(_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_ISuggestedWindowPosition<winrt::WindowsUdk::UI::Shell::ISuggestedWindowPosition>::WindowId(
                               &v11[v38],
                               &v57);
            winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
              (__int64 *)v53[0] + v38,
              &v51);
            v41 = v40;
            if ( v36 )
              v41 = v39;
            v39 = v41;
            v52[0] = v51;
            (*(void (__fastcall **)(char *, __int64, __int64, _OWORD *, int))(*((_QWORD *)this + 16) + 56LL))(
              (char *)this + 128,
              v40,
              v41,
              v52,
              v36++ != 0 ? 8 : 4);
            v38 = v36;
            v37 = v53[1];
            v11 = (__int64 *)v53[0];
          }
          while ( v36 < (unsigned __int64)((v53[1] - v53[0]) >> 3) );
          v6 = v48;
          v35 = v56;
        }
        if ( (v37 - (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11) >> 3 )
        {
          v42 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                           v11,
                           v52);
          v43 = v42[1];
          v44 = *v42;
          LODWORD(v48) = (int)*v42;
          HIDWORD(v48) = (int)v43;
          v49 = (int)(float)(v44 + v42[2]);
          v50 = (int)(float)(v43 + v42[3]);
          CShellSnapComponent::SendSnapBarUsageForSuggestions(v49, v35, &v48, v53);
          v37 = v53[1];
          v11 = (__int64 *)v53[0];
        }
        if ( v11 )
        {
          std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
            (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11,
            v37);
          std::_Deallocate<16>(
            v53[0],
            (struct std::nothrow_t *)((v54 - (unsigned __int64)v53[0]) & 0xFFFFFFFFFFFFFFF8uLL));
        }
      }
      if ( *((_DWORD *)this + 288) != -1 )
      {
        CSnapComponentTelemetry::SnapEducation_WindowSnapped((__int64)v11);
        v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 28) + 104LL))(
                *((_QWORD *)this + 28),
                *((unsigned int *)this + 288));
        if ( v45 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x610,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v45);
        *((_DWORD *)this + 288) = -1;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
        1u,
        v12);
      if ( **((_DWORD **)this + 182) == 1 )
        CSnapComponentTelemetry::OnSnappingCancelled::Stop((CShellSnapComponent *)((char *)this + 1184), 0);
      goto LABEL_63;
    }
    v56 = 0LL;
    v22 = *((_QWORD *)this + 27);
    v23 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v22 + 48LL);
    v56 = 0LL;
    v24 = v23(v22, v21, &v56);
    v25 = retaddr;
    if ( v24 >= 0 )
    {
      v24 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)v20 + 224LL))(
              v20,
              v56,
              0LL);
      v25 = retaddr;
      if ( v24 >= 0 )
      {
LABEL_27:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
        goto LABEL_28;
      }
      v26 = 1477LL;
    }
    else
    {
      v26 = 1475LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_27;
  }
LABEL_63:
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SnapHotkeyNarratorAnnouncement>::GetImpl'::`2'::impl,
    v8);
  (*(void (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 30) + 48LL))(
    *((_QWORD *)this + 30),
    v10,
    (unsigned int)*v6);
  v46 = CShellSnapComponent::_SendAppSnapUnsnapEvent((__int64)this, v10, *v6);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x646,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v46);
  v47 = (SnapLayoutProvider *)*((_QWORD *)this + 73);
  if ( v47 )
    SnapLayoutProvider::Reset(v47);
  return 0LL;
}
