/*
 * XREFs of ??1AppViewIconLoader@@UEAA@XZ @ 0x1801E0A8C
 * Callers:
 *     ??_GAppViewIconLoader@@UEAAPEAXI@Z @ 0x1801E0A50 (--_GAppViewIconLoader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall AppViewIconLoader::~AppViewIconLoader(AppViewIconLoader *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)this);
}
