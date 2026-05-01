/*
 * XREFs of ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x1801FF75C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x180615350 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     ??0_lambda_75456b8a2c5d34b3c7a4799327b9064c_@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBQ8AppBackupListener@implementation@Shell@Internal@Windows@2@EAA?AUfire_and_forget@2@UTileCollection@StartScreen@UI@WindowsUdk@2@UTileRemovedEventArgs@StartScreen@UI@WindowsUdk@2@@Z@Z @ 0x1802C19F4 (--0_lambda_75456b8a2c5d34b3c7a4799327b9064c_@@QEAA@$$QEAU-$com_ptr@UAppBackupListener@implementa.c)
 *     ??$?0V_lambda_5925feec7b76d92a7ad4b41012d30f9b_@@@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_5925feec7b76d92a7ad4b41012d30f9b_@@@Z @ 0x1806101E4 (--$-0V_lambda_5925feec7b76d92a7ad4b41012d30f9b_@@@-$TypedEventHandler@UTile@StartScreen@UI@Windo.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = _lambda_75456b8a2c5d34b3c7a4799327b9064c_::_lambda_75456b8a2c5d34b3c7a4799327b9064c_(v6, a2, a3);
  winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
    a1,
    v4);
  return a1;
}
