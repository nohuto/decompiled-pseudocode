/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState_::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState___lambda_619067457216c3990f36ed941ddd13a8___ @ 0x18033AB98
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState_::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState___lambda_619067457216c3990f36ed941ddd13a8___(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // rax

  v4 = operator new(0x20uLL);
  v4[2] = 1;
  *((_QWORD *)v4 + 2) = 0LL;
  if ( v4 + 4 != (_DWORD *)a2 )
  {
    *((_QWORD *)v4 + 2) = *a2;
    *a2 = 0LL;
  }
  *((_QWORD *)v4 + 3) = a2[1];
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = off_180732718;
  *a1 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return a1;
}
