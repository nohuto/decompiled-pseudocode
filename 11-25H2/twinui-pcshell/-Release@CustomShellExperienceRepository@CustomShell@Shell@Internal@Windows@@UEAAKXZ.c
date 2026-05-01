/*
 * XREFs of ?Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAKXZ @ 0x18031C790
 * Callers:
 *     ?Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@W7EAAKXZ @ 0x18031C7A0 (-Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAKXZ @ 0x18031C7B0 (-Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAKXZ @ 0x18031C7C0 (-Release@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(this);
}
