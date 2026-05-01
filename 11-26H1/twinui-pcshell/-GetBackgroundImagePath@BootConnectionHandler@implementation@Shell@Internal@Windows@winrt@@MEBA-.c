/*
 * XREFs of ?GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x1806689C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668E40 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::GetBackgroundImagePath(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(a2);
  return a2;
}
