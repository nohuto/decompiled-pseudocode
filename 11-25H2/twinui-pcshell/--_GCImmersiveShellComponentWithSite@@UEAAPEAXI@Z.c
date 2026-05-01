/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x180322EEC
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z @ 0x180322E90 (--_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B3620 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_1801B3620.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveShellComponentWithSite *__fastcall CImmersiveShellComponentWithSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithSite *this,
        char a2)
{
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
