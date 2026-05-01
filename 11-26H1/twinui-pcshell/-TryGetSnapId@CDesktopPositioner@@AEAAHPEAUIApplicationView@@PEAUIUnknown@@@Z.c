/*
 * XREFs of ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18022FFA4
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180254A40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x180510380 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 *     ?SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x180511860 (-SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAU.c)
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x180511E64 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x1802DBE64 (--$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z @ 0x18050E05C (--$-0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::TryGetSnapId(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3)
{
  struct IApplicationView *v5; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  const unsigned __int16 (*v7)[14]; // rdx
  HSTRING *v8; // rax
  unsigned int v9; // ebx
  HWND WindowForView; // rax
  HWND v12; // rbx
  unsigned int PropW; // edi
  _BYTE v14[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-3Ch]
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+38h] [rbp-28h] BYREF

  v14[0] = 0;
  if ( (*(int (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), v14) < 0
    || !v14[0] )
  {
    return 0xFFFFFFFFLL;
  }
  if ( a3 )
  {
    lpVtbl = a3->lpVtbl;
    v16 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))lpVtbl->QueryInterface)(
           a3,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v16) >= 0 )
    {
      v15 = 0;
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
        v16);
      v8 = (HSTRING *)Windows::Internal::StringReference::StringReference(&string, v7);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
                  *v8) >= 0 )
      {
        v9 = v15;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
        return v9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v5);
  v12 = WindowForView;
  if ( !WindowForView )
    return 0xFFFFFFFFLL;
  PropW = (unsigned int)GetPropW(WindowForView, L"SnapWindow.Id");
  if ( !PropW )
    return 0xFFFFFFFFLL;
  RemovePropW(v12, L"SnapWindow.Id");
  return PropW;
}
