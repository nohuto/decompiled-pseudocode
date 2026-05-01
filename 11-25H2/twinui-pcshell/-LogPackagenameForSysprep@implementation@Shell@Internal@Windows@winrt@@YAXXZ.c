/*
 * XREFs of ?LogPackagenameForSysprep@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x1805B1084
 * Callers:
 *     _lambda_edd22ea2698d38aa4454b60a8c07f089_::operator() @ 0x1805A9850 (_lambda_edd22ea2698d38aa4454b60a8c07f089_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18013EC10 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::LogPackagenameForSysprep(
        winrt::Windows::Internal::Shell::implementation *this)
{
  signed int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SHRegSetBOOL(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Dsh\\Widgets\\WidgetOnLock",
         L"Microsoft.WidgetsPlatformRuntime_8wekyb3d8bbwe",
         1);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x959,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v1);
}
