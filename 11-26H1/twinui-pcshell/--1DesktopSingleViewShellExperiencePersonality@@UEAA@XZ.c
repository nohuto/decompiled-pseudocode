/*
 * XREFs of ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ @ 0x1800C5060
 * Callers:
 *     ??_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z @ 0x1800C5020 (--_EDesktopSingleViewShellExperiencePersonality@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DesktopSingleViewShellExperiencePersonality::~DesktopSingleViewShellExperiencePersonality(
        DesktopSingleViewShellExperiencePersonality *this)
{
  *(_QWORD *)this = &DesktopSingleViewShellExperiencePersonality::`vftable';
  if ( *((_DWORD *)this + 8) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
