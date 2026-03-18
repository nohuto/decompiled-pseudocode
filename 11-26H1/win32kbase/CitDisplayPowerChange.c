/*
 * XREFs of CitDisplayPowerChange @ 0x1400EA4D4
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D5B48 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400D7518 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400EB994 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  unsigned __int64 v9; // rdi
  int v10; // eax
  struct _CIT_IMPACT_CONTEXT *v11; // rcx
  struct tagPROCESSINFO *v12; // r8

  if ( CitIsEnabled(a1, a2, a3) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18952) + 32LL);
    v8 = *(_DWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v7 + 200) == 0) == (v8 == 0) )
    {
      *(_DWORD *)(v7 + 200) = v8;
    }
    else
    {
      v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !*(_DWORD *)(a1 + 72) )
      {
        CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v7, v9, 0LL, 0LL);
        CitpContextFlush((struct _CIT_IMPACT_CONTEXT *)v7, v9);
      }
      *(_DWORD *)(v7 + 200) = *(_DWORD *)(a1 + 72);
      if ( *(_DWORD *)(a1 + 72) )
      {
        LOBYTE(v10) = CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v7);
        if ( v10 )
        {
          v12 = *(struct tagPROCESSINFO **)(v7 + 128);
          if ( v12 )
            CitpSetForegroundProcess(v11, v9, v12, 0LL);
        }
      }
    }
  }
}
