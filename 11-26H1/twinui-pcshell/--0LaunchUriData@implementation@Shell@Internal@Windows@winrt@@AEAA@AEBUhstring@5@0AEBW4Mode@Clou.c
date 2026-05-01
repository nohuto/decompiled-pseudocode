/*
 * XREFs of ??0LaunchUriData@implementation@Shell@Internal@Windows@winrt@@AEAA@AEBUhstring@5@0AEBW4Mode@CloudPCHelpers@@AEBW4BootModeType@8@AEB_N33333@Z @ 0x180666BEC
 * Callers:
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666D54 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::LaunchUriData *__fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::LaunchUriData(
        winrt::Windows::Internal::Shell::implementation::LaunchUriData *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const enum CloudPCHelpers::Mode *a4,
        const enum CloudPCHelpers::BootModeType *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  unsigned int v14; // r8d

  winrt::hstring::hstring(this, a2, (unsigned int)a3);
  winrt::hstring::hstring((winrt::Windows::Internal::Shell::implementation::LaunchUriData *)((char *)this + 8), a3, v14);
  *((_DWORD *)this + 4) = *(_DWORD *)a4;
  *((_DWORD *)this + 5) = *(_DWORD *)a5;
  *((_BYTE *)this + 24) = *a6;
  *((_BYTE *)this + 25) = *a7;
  *((_BYTE *)this + 26) = *a8;
  *((_BYTE *)this + 27) = *a9;
  *((_BYTE *)this + 28) = *a10;
  *((_BYTE *)this + 29) = *a11;
  return this;
}
