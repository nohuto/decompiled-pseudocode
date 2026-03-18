/*
 * XREFs of ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14017F8F4
 * Callers:
 *     InitializePowerRequestList @ 0x1402F51D0 (InitializePowerRequestList.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x14017F97C (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x14017FAD0 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 */

__int64 InitializePowerWatchdogTimeouts(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  const unsigned __int16 *v3; // rcx
  __int64 UserSessionState; // rsi
  unsigned __int64 v5; // rdi
  unsigned int *v6; // rbx
  const unsigned __int16 *v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  InitializePowerWatchdogTimeoutDefaults();
  UserSessionState = W32GetUserSessionState(v1, v0, v2);
  v5 = 0LL;
  v6 = (unsigned int *)(UserSessionState + 384);
  while ( v5 < 5 )
  {
    v7 = (const unsigned __int16 *)*((_QWORD *)v6 - 1);
    v9 = 0;
    if ( GetConfigUlong(v3, v7, &v9) == 1 )
    {
      *v6 = v9;
    }
    else if ( *(_BYTE *)(UserSessionState + 528) != 1 )
    {
      return 0LL;
    }
    ++v5;
    v6 += 6;
  }
  return 1LL;
}
