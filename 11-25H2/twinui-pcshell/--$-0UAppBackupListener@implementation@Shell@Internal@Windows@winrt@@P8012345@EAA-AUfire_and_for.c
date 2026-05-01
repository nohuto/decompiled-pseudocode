/*
 * XREFs of ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x180201EB8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1805F0C80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     ??$?0V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@Z @ 0x180201EF4 (--$-0V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@-$TypedEventHandler@UTile@StartScreen@UI@Windo.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
        __int64 a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v3; // rax
  __int128 v5; // xmm0
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v3 = *a2;
  *a2 = 0LL;
  v5 = *a3;
  v7 = v3;
  v8 = v5;
  winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
    a1,
    &v7);
  return a1;
}
