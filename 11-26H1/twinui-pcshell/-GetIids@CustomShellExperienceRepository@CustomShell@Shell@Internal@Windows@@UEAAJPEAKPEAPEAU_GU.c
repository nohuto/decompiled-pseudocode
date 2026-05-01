/*
 * XREFs of ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180318A50
 * Callers:
 *     ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180318AD0 (-GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1803189A0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMar.c)
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::GetIids(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax
  __int64 v7; // rcx
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    v10 = 1;
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::FillArrayWithIid(
      v7,
      &v10,
      (__int64)v6);
    *a2 = 3;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
