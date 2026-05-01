/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803189A0
 * Callers:
 *     ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180318A50 (-GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = *a2;
  v4 = *a2 + 1;
  *(GUID *)(a3 + 16LL * *a2) = GUID_00000038_0000_0000_c000_000000000046;
  result = (unsigned int)(v3 + 2);
  *a2 = result;
  *(GUID *)(a3 + 16 * v4) = GUID_24c002a6_7ad5_5f1d_bfb2_89e6ce87e67a;
  return result;
}
