/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804077AC
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008EC8C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180161744 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x180172068 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801CC690 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HWND, _QWORD); // rbx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PCWSTR, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v27; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
    a2);
  *a4 = 0;
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)off_180760368, v7);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
          (HSTRING)v8[1].Reserved.Reserved1,
          v9,
          &string);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v22 = 0LL;
    v12 = *((_QWORD *)this + 29);
    v13 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
    v11 = v13(v12, a3, &v22);
    if ( v11 >= 0 )
    {
      v23 = 0LL;
      v24 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v22, &v24);
      if ( v11 >= 0 )
      {
        v14 = v24;
        v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        v16 = v15(v14, &v23);
        v11 = v16;
        if ( v16 >= 0 )
        {
          v18 = v23;
          v19 = *(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v23 + 88LL);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v16 = v19(v18, StringRawBuffer, a4);
          v11 = v16;
          if ( v16 >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
            v11 = 0;
            goto LABEL_13;
          }
          v17 = 1542LL;
        }
        else
        {
          v17 = 1540LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v16);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FB,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v10);
  }
LABEL_13:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  return (unsigned int)v11;
}
