/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x18031F76C
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z @ 0x18031F710 (--_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180092088 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_180092088.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
