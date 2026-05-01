/*
 * XREFs of ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x1802B3C84
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18007D8E8 (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     RegExists @ 0x1801F96BC (RegExists.c)
 *     RegGetDword @ 0x1806792E0 (RegGetDword.c)
 */

char __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::IsAuditMode(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation *this)
{
  char v1; // bl

  v1 = 0;
  if ( (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status", L"AuditBoot")
    && (unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status")
    || (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) )
  {
    return 1;
  }
  return v1;
}
