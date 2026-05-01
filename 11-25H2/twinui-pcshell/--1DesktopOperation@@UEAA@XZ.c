/*
 * XREFs of ??1DesktopOperation@@UEAA@XZ @ 0x1804F1C2C
 * Callers:
 *     ??_EDesktopOperation@@UEAAPEAXI@Z @ 0x1804F1CC0 (--_EDesktopOperation@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DesktopOperation::~DesktopOperation(DesktopOperation *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>((__int64)this);
}
