/*
 * XREFs of ??0RegistrationData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBUhstring@5@00@Z @ 0x1806611F8
 * Callers:
 *     ??$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@impl@winrt@@YAPEAURegistrationData@implementation@Shell@Internal@Windows@1@AEBUhstring@1@0AEAY00$$CBG@Z @ 0x18063C8DC (--$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU76@@winrt@@YA?A_PAEBUhstring@0@00@Z @ 0x18063CC08 (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::RegistrationData *__fastcall winrt::Windows::Internal::Shell::implementation::RegistrationData::RegistrationData(
        winrt::Windows::Internal::Shell::implementation::RegistrationData *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  unsigned int v7; // r8d
  unsigned int v8; // r8d

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::Windows::Internal::Shell::IRegistrationData>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::RegistrationData::`vftable';
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RegistrationData *)((char *)this + 24),
    a2,
    (unsigned int)a3);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RegistrationData *)((char *)this + 32),
    a3,
    v7);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::RegistrationData *)((char *)this + 40),
    a4,
    v8);
  return this;
}
