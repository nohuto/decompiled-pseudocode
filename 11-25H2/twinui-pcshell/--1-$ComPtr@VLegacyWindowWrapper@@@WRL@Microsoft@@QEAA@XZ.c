/*
 * XREFs of ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180407F9C
 * Callers:
 *     _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___&_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x1806C1CD1 (_Microsoft--WRL--Details--Make_LegacyWindowWrapper_WindowEventDispatcher___Windows--Internal--Ap.c)
 *     _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1806C1D01 (_Microsoft--WRL--Details--Make_LegacyWindowWrapper_WindowEventDispatcher___Windows-_ea_1806C1D01.c)
 *     _wil::MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1806C1DBE (_wil--MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher___Windows--Internal--ApplicationMode.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180412450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_180412450.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyWindowWrapper>::~ComPtr<LegacyWindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
