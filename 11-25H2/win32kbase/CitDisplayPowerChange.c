/*
 * XREFs of CitDisplayPowerChange @ 0x14007F0D4
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x140141314 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140156A6C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v7; // rdi
  struct _CIT_IMPACT_CONTEXT *v8; // rcx
  struct tagPROCESSINFO *v9; // r8

  if ( CitIsEnabled(a1, a2) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18912) + 32LL);
    v6 = *(_DWORD *)(a1 + 72);
    if ( (*(_DWORD *)(v5 + 200) == 0) == (v6 == 0) )
    {
      *(_DWORD *)(v5 + 200) = v6;
    }
    else
    {
      v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !*(_DWORD *)(a1 + 72) )
      {
        CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v5, (unsigned int)v7, 0LL, 0LL);
        CitpContextFlush((struct _CIT_IMPACT_CONTEXT *)v5, v7);
      }
      *(_DWORD *)(v5 + 200) = *(_DWORD *)(a1 + 72);
      if ( *(_DWORD *)(a1 + 72) && (unsigned int)CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v5) )
      {
        v9 = *(struct tagPROCESSINFO **)(v5 + 128);
        if ( v9 )
          CitpSetForegroundProcess(v8, (unsigned int)v7, v9, 0LL);
      }
    }
  }
}
