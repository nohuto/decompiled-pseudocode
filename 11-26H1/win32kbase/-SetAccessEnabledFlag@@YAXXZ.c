/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400DF284 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1401A5F48 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1401B9CA4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212890 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetAccessEnabledFlag(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v7; // rax

  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 20500);
  if ( (v4 & 1) != 0 )
    goto LABEL_2;
  v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20500);
  if ( (v4 & 4) != 0 )
    goto LABEL_2;
  v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20604);
  if ( (v4 & 1) != 0
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20604), (v4 & 4) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 21076), (v4 & 4) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20612), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20612), (v4 & 4) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20948), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20948), (v4 & 4) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20980), (v4 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 66792) & 0x8000) != 0 )
  {
LABEL_2:
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(UserSessionState + 66792) |= 0x100u;
  }
  else
  {
    v7 = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(v7 + 66792) &= ~0x100u;
  }
}
