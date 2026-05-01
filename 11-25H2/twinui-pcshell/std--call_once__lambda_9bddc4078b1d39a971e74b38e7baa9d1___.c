/*
 * XREFs of std::call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1___ @ 0x18043E138
 * Callers:
 *     ?get_Current@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801F92D0 (-get_Current@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B500C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18043E8E8 (--1_Init_once_completer@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // [rsp+20h] [rbp-30h] BYREF
  union _RTL_RUN_ONCE *v6; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h]
  WINBOOL fPending; // [rsp+38h] [rbp-18h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v6 = a1;
    v7 = 4LL;
    v4 = operator new(0x50uLL);
    memset_0(v4, 0, 0x50uLL);
    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *)v4);
    *v4 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vftable';
    v5 = v4 + 3;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(*(_QWORD *)a2 + 40LL), (__int64 *)&v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    LODWORD(v7) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v6);
  }
}
