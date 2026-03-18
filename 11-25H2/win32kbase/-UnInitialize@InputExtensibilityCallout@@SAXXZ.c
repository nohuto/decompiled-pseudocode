/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400CF07C
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020E848 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1401A2640 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  char *v8; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16408) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16408));
    v8 = *(char **)(W32GetUserSessionState(v6, v5) + 16408);
    if ( v8 )
      GreDeleteFastMutex(v8);
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 16408) = 0LL;
  }
}
