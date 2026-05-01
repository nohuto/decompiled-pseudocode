/*
 * XREFs of _Microsoft::WRL::Details::Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$0 @ 0x1806B79FE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CCBCC (--1-$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const___enum_WindowCreatedType_unsigned___int64____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return Microsoft::WRL::ComPtr<LegacyUwpWindowWrapper>::~ComPtr<LegacyUwpWindowWrapper>(*(__int64 **)(a2 + 176));
  }
  return result;
}
