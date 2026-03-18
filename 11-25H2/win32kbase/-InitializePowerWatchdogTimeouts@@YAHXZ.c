/*
 * XREFs of ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x140142D24
 * Callers:
 *     InitializePowerRequestList @ 0x1402EACAC (InitializePowerRequestList.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x140142DA8 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140142EEC (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 */

__int64 InitializePowerWatchdogTimeouts(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  const unsigned __int16 *v2; // rcx
  __int64 UserSessionState; // rsi
  unsigned __int64 v4; // rdi
  unsigned int *v5; // rbx
  const unsigned __int16 *v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  InitializePowerWatchdogTimeoutDefaults();
  UserSessionState = W32GetUserSessionState(v1, v0);
  v4 = 0LL;
  v5 = (unsigned int *)(UserSessionState + 384);
  while ( v4 < 5 )
  {
    v6 = (const unsigned __int16 *)*((_QWORD *)v5 - 1);
    v8 = 0;
    if ( GetConfigUlong(v2, v6, &v8) == 1 )
    {
      *v5 = v8;
    }
    else if ( *(_BYTE *)(UserSessionState + 528) != 1 )
    {
      return 0LL;
    }
    ++v4;
    v5 += 6;
  }
  return 1LL;
}
