/*
 * XREFs of ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1805B9E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18020E460 (-attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??$as@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1805B8764 (--$as@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknow.c)
 *     ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBUDisplayRegion@WindowManagement@UI@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBUDisplayRegion@WindowManagement@UI@71@@Z @ 0x1805B89EC (--$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@She_ea_1805B89EC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 *v7; // rsi
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v8; // rax
  void *v9; // r8
  __int64 (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rbx
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, __int64 *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  v15 = a2;
  v14 = a1;
  if ( a4 )
    *a4 = 0LL;
  v16 = 0LL;
  v7 = a5;
  *a5 = 0LL;
  try
  {
    v8 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::UI::WindowManagement::DisplayRegion const &>((struct winrt::Windows::UI::WindowManagement::DisplayRegion *)&v15);
    *((_QWORD *)v8 + 3) = a3;
    v14 = 0LL;
    winrt::attach_abi(
      (winrt *)&v14,
      (struct IUnknown *)(((unsigned __int64)v8 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v8 >> 64)),
      v9);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v16, &v14);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    v10 = v16;
    winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v14,
      v16);
    v11 = v14;
    v14 = 0LL;
    *v7 = v11;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    if ( a4 )
    {
      v12 = v10;
      v10 = 0LL;
      v16 = 0LL;
      *a4 = v12;
    }
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v14);
  }
  return result;
}
