/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x18064BEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)a2 = 0;
  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_OWORD *)(a2 + 4) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
