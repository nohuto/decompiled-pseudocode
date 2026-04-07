/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180086EF8
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009311C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
