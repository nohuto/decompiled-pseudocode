/*
 * XREFs of ?clear@?$com_array@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1801F99D0
 * Callers:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F993C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$com_array@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x180241F2C (--1-$com_array@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<winrt::WindowsUdk::Services::Iris::IrisCreative>::clear(__int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v1; // rbx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rsi

  v1 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v1
                                                                                            + 8
                                                                                            * *(unsigned int *)(a1 + 8));
    while ( v1 != v3 )
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v1);
      v1 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)v1 + 8);
    }
    CoTaskMemFree_0(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
