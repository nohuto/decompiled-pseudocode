/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCServiceHostComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180583D84
 * Callers:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCServiceHostComponentWithGITSite@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180583DAC (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCServiceH.c)
 *     ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x1805845DC (--_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x180583F24 (--1CServiceHostComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CServiceHostComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CServiceHostComponent>(
        CWRLObjectWithGITSite *this)
{
  CServiceHostComponent::~CServiceHostComponent((CWRLObjectWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
