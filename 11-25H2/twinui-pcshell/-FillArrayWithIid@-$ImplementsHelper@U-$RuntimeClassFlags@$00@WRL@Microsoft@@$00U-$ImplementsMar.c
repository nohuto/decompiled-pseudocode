/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18031C420
 * Callers:
 *     ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18031C4D0 (-GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(a3 + 16LL * v3) = GUID_24c002a6_7ad5_5f1d_bfb2_89e6ce87e67a;
  result = v3 + 1;
  *a2 = result;
  return result;
}
