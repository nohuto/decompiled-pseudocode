/*
 * XREFs of ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804079A0
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008EC8C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003A5C0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180406FF8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HWND, __int64 *); // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+28h] [rbp-50h] BYREF
  int v18; // [rsp+2Ch] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  *a4 = 0;
  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
    a2);
  v17 = 0;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AAMShim.CallingProcessId", 0x19u, 0x18u);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v20, v22, v7, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E3,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_14;
  }
  v16 = 0LL;
  v10 = *((_QWORD *)this + 29);
  v11 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v10 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v9 = v11(v10, a3, &v16);
  if ( v9 < 0 )
  {
LABEL_4:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    goto LABEL_14;
  }
  HolographicPositioner::_FindViewHostItem((__int64)this, &v19);
  v12 = v19;
  if ( v19 )
  {
    v18 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 72LL))(v19, &v18);
    v9 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5EC,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v13);
      v14 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_4;
    }
    *a4 = v18 == v17;
    v12 = v19;
  }
  if ( v12 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v9 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  return (unsigned int)v9;
}
