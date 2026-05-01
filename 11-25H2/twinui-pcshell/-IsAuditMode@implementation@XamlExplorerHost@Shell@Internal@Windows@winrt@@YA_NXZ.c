/*
 * XREFs of ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x1802BD7C0
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B588C (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     RegExists @ 0x180205348 (RegExists.c)
 *     RegGetDword @ 0x180653394 (RegGetDword.c)
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
