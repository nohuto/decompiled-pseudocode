/*
 * XREFs of ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x18010BC34
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010BA58 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180032444 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
        ViewSizePreferenceHelpers *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        enum APPLICATION_VIEW_SIZE_PREFERENCE *a3,
        HWND *a4)
{
  int v6; // edx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned int v10; // eax
  UINT32 v11; // edx
  HRESULT v12; // eax
  int v13; // edx
  __int64 v14; // r8
  int v15; // edx
  int v16; // edi
  unsigned int v17; // r8d
  unsigned int v19; // eax
  UINT32 v20; // edx
  HRESULT v21; // eax
  int v22; // edx
  __int64 v23; // r8
  int v24; // eax
  int v25; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+24h] [rbp-3Ch] BYREF
  ViewSizePreferenceHelpers *v27; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF

  *(_DWORD *)a2 = 0;
  *(_QWORD *)a3 = 0LL;
  v27 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  v25 = 0;
  v26 = 0;
  string = 0LL;
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( aViewsizeprefer[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v6, v7);
    __debugbreak();
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v9, v6, v7);
  v11 = v10 - 1;
  if ( (unsigned int)v9 < v10 )
    v11 = v9;
  v12 = WindowsCreateStringReference(L"ViewSizePreferences.SourceViewSizePreference", v11, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    __debugbreak();
  }
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v27, (__int64)string, v14, &v25);
  if ( v16 < 0 )
    goto LABEL_8;
  string = 0LL;
  do
    ++v8;
  while ( aViewsizeprefer_1[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v15, v17);
    __debugbreak();
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8, v15, v17);
  v20 = v19 - 1;
  if ( (unsigned int)v8 < v19 )
    v20 = v8;
  v21 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v20, &hstringHeader, &string);
  if ( v21 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    __debugbreak();
  }
  v24 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v27, (__int64)string, v23, &v26);
  if ( v24 < 0 )
  {
    v16 = v24;
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
    return (unsigned int)v16;
  }
  *(_DWORD *)a2 = v25;
  *(_QWORD *)a3 = v26;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  return 0LL;
}
