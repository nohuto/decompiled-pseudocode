/*
 * XREFs of ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007655C
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801D0920 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180076CF0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180076DD0 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076E00 (-_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@F.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x180076EC0 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x18009015C (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801C8F7C (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D70D0 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802C7E44 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802C99E8 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@$$QEAI@Z @ 0x1803F5BA0 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SA.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1803FCF54 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803FCF94 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803FD174 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall HolographicPositioner::_IsViewPropertySetHeuristicHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  bool v6; // al
  HWND ForegroundWindow; // rax
  HolographicPositioner *v8; // rcx
  HWND v9; // rbx
  __int64 v11; // rax
  struct IApplicationView **p_ApplicationViewUniqueIdForTracing; // rdx
  struct IApplicationView **v13; // rcx
  int v14; // ebx
  int v15; // [rsp+20h] [rbp-50h] BYREF
  int v16; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  struct IApplicationView *v19; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-18h]

  v19 = a2;
  if ( IsHolographicWin32SlatesFeatureEnabled() )
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v18, &v19);
    if ( v18 )
    {
      v15 = 0;
      v14 = 6;
      if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v15) >= 0 )
        v14 = v15;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      v6 = v14 == 0;
      goto LABEL_3;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  }
  v6 = 0;
LABEL_3:
  if ( v6 && !*((_BYTE *)this + 312) )
    return 0;
  ForegroundWindow = GetForegroundWindow();
  v9 = ForegroundWindow;
  if ( ForegroundWindow )
  {
    v15 = 0;
    if ( (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(ForegroundWindow, 0LL, &v15) >= 0
      && v15 == 1 )
    {
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
        a3);
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_180735908);
      if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
             *(HSTRING *)(v11 + 24)) )
      {
        v16 = 0;
        if ( (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a3, v9, &v16) >= 0 )
        {
          if ( v16 )
          {
            ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
            LODWORD(v19) = 1;
            p_ApplicationViewUniqueIdForTracing = (struct IApplicationView **)&ApplicationViewUniqueIdForTracing;
            v13 = &v19;
LABEL_26:
            HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
              v13,
              p_ApplicationViewUniqueIdForTracing);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
            return 1;
          }
        }
      }
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"AAMShim.CallingProcessId",
        0x19u,
        0x18u);
      if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
             v21) )
      {
        v16 = 0;
        if ( (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(this, a3, v9, &v16) >= 0 )
        {
          if ( v16 )
          {
            LODWORD(v19) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
            ApplicationViewUniqueIdForTracing = 0;
            p_ApplicationViewUniqueIdForTracing = &v19;
            v13 = (struct IApplicationView **)&ApplicationViewUniqueIdForTracing;
            goto LABEL_26;
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    }
  }
  if ( HolographicPositioner::_IsPropertySetCallerProcessExplorer(v8, a3)
    || !HolographicPositioner::_IsDisplayContextHolographic(this)
    || !HolographicPositioner::_IsInputContextHolographic(this)
    || (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
  {
    return 0;
  }
  LODWORD(v19) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
  ApplicationViewUniqueIdForTracing = 2;
  HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic,unsigned int>(
    &ApplicationViewUniqueIdForTracing,
    &v19);
  return 1;
}
