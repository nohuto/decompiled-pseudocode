/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A849C (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A8618 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019D2A0 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9090 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetAccessEnabledFlag(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rax

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20468);
  if ( (v3 & 1) != 0 )
    goto LABEL_2;
  v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20468);
  if ( (v3 & 4) != 0 )
    goto LABEL_2;
  v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20572);
  if ( (v3 & 1) != 0
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20572), (v3 & 4) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 21044), (v3 & 4) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20580), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20580), (v3 & 4) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20916), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20916), (v3 & 4) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20948), (v3 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 66800) & 0x8000) != 0 )
  {
LABEL_2:
    UserSessionState = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(UserSessionState + 66800) |= 0x100u;
  }
  else
  {
    v5 = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(v5 + 66800) &= ~0x100u;
  }
}
