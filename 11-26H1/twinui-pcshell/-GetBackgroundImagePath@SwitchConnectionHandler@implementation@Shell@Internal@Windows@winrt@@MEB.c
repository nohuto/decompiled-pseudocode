/*
 * XREFs of ?GetBackgroundImagePath@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x18066B830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18066B874 (-GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetBackgroundImagePath(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath(a2);
  return a2;
}
