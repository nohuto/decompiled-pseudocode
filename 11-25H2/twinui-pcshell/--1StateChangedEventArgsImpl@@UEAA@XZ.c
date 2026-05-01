/*
 * XREFs of ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x1802CCF64
 * Callers:
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x18023C6A0 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GStateChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x180548560 (--_GStateChangedEventArgsImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall StateChangedEventArgsImpl::~StateChangedEventArgsImpl(HSTRING *this)
{
  WindowsDeleteString(this[8]);
  this[8] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>((__int64)this);
}
