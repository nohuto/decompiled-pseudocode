/*
 * XREFs of ??1?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C4038
 * Callers:
 *     _wil::MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$0 @ 0x1806DEFA2 (_wil--MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows--Internal--Shell--Uw.c)
 *     _Microsoft::WRL::Details::Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$0 @ 0x1806DEFD2 (_Microsoft--WRL--Details--Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows--Intern.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EC510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1800EC510.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyUwpWindowWrapper>::~ComPtr<LegacyUwpWindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
