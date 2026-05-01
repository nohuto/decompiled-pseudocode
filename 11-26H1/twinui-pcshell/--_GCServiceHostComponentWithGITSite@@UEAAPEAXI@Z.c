/*
 * XREFs of ??_GCServiceHostComponentWithGITSite@@UEAAPEAXI@Z @ 0x1805845DC
 * Callers:
 *     ??_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z @ 0x180584470 (--_ECServiceHostComponentWithGITSite@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCServiceHostComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180583D84 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_180583D84.c)
 */

CServiceHostComponentWithGITSite *__fastcall CServiceHostComponentWithGITSite::`scalar deleting destructor'(
        CServiceHostComponentWithGITSite *this,
        char a2)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CServiceHostComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CServiceHostComponent>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
