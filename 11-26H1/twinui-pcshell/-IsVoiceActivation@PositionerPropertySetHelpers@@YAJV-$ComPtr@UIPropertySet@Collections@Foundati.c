/*
 * XREFs of ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18007D220
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007B740 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008DDC0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x18007D2D8 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PositionerPropertySetHelpers::IsVoiceActivation(__int64 *a1, _BYTE *a2)
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v8[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-20h] BYREF

  v8[1] = (__int64)a1;
  v8[0] = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"IsVoiceActivation", 0x11u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    JUMPOUT(0x18007D2CELL);
  }
  *a2 = Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)v8,
          string);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  return 0LL;
}
