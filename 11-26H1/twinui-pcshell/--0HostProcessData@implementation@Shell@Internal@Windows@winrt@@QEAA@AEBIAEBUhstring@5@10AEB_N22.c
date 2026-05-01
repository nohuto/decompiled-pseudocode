/*
 * XREFs of ??0HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBIAEBUhstring@5@10AEB_N22222@Z @ 0x18066757C
 * Callers:
 *     ??$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U76@AEAIAEA_NAEA_NAEA_NAEA_NAEA_NAEA_N@std@@YA?AV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@0@AEAIAEAUhstring@winrt@@$$QEAU23@0AEA_N33333@Z @ 0x180647290 (--$make_shared@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@AEAIAEAUhstring@6@U.c)
 *     ??$?0AEBIUhstring@winrt@@U01@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@?$_Ref_count_obj2@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBI$$QEAUhstring@winrt@@1AEAK222222@Z @ 0x180661528 (--$-0AEBIUhstring@winrt@@U01@AEAKAEAKAEAKAEAKAEAKAEAKAEAK@-$_Ref_count_obj2@UHostProcessData@imp.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::HostProcessData *__fastcall winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData(
        winrt::Windows::Internal::Shell::implementation::HostProcessData *this,
        const unsigned int *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4,
        const unsigned int *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  unsigned int v13; // r8d

  *(_DWORD *)this = *a2;
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::HostProcessData *)((char *)this + 8),
    a3,
    (unsigned int)a3);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::implementation::HostProcessData *)((char *)this + 16),
    a4,
    v13);
  *((_DWORD *)this + 6) = *a5;
  *((_BYTE *)this + 28) = *a6;
  *((_BYTE *)this + 29) = *a7;
  *((_BYTE *)this + 30) = *a8;
  *((_BYTE *)this + 31) = *a9;
  *((_BYTE *)this + 32) = *a10;
  *((_BYTE *)this + 33) = *a11;
  return this;
}
