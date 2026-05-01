/*
 * XREFs of ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU76@@winrt@@YA?A_PAEBUhstring@0@00@Z @ 0x18063CC08
 * Callers:
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FDF0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0RegistrationData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@00@Z @ 0x1806611F8 (--0RegistrationData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@00@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,winrt::hstring const &>(
        _QWORD *a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  winrt::Windows::Internal::Shell::implementation::RegistrationData *v9; // [rsp+50h] [rbp+8h]

  v9 = (winrt::Windows::Internal::Shell::implementation::RegistrationData *)operator new(0x30uLL);
  winrt::Windows::Internal::Shell::implementation::RegistrationData::RegistrationData(v9, a2, a3, a4);
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
  *a1 = (char *)v9 + 16;
  return a1;
}
