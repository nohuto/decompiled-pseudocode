/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCAppLayoutOperation@@U?$ChainInterfaces@UIBackOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804F1BA8
 * Callers:
 *     ??1DesktopOperation@@UEAA@XZ @ 0x1804F1C2C (--1DesktopOperation@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UIDesktopOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804F1C70 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCAppLayoutOpera.c)
 * Callees:
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x1804F1BD0 (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>(
        __int64 a1)
{
  CAppLayoutOperation::~CAppLayoutOperation((CAppLayoutOperation *)(a1 + 24));
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
