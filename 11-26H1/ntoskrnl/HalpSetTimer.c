/*
 * XREFs of HalpSetTimer @ 0x140208790
 * Callers:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     HalpSetTimerAnyMode @ 0x140435C08 (HalpSetTimerAnyMode.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1404EED40 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140586B0C (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerSetTimerBackedProfileInterval @ 0x140586BDC (HalpTimerSetTimerBackedProfileInterval.c)
 *     HalpTimerStartProfileInterrupt @ 0x140586C74 (HalpTimerStartProfileInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerWatchdogStart @ 0x140587AB0 (HalpTimerWatchdogStart.c)
 *     HalpWatchdogDelayExpiration @ 0x140587C80 (HalpWatchdogDelayExpiration.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetTimer(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4, unsigned __int64 *a5)
{
  unsigned int v6; // r11d
  unsigned __int64 v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int128 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r10d
  unsigned int v20; // edx

  v6 = a2;
  v8 = 0LL;
  if ( a2 == 3 )
  {
    v9 = *(_DWORD *)(a1 + 224);
    if ( (v9 & 0x20) == 0 )
    {
      HalpTimerLastProblem = 17;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      v18 = -1073741637;
      *(_QWORD *)(a1 + 252) = 17LL;
      *(_DWORD *)(a1 + 272) = 699;
      goto LABEL_16;
    }
  }
  else
  {
    v20 = a2 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
      {
LABEL_26:
        v18 = -1073741811;
        goto LABEL_16;
      }
      v9 = *(_DWORD *)(a1 + 224);
      if ( (v9 & 0x50) == 0 )
      {
        HalpTimerLastProblem = 17;
        *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
        v18 = -1073741637;
        *(_QWORD *)(a1 + 252) = 17LL;
        *(_DWORD *)(a1 + 272) = 711;
        goto LABEL_16;
      }
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 224);
      if ( (v9 & 0x10) == 0 )
      {
        HalpTimerSetProblemEx(a1, 17, 0, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 720);
        goto LABEL_16;
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 192);
  v11 = v10 * a3;
  if ( !is_mul_ok(v10, a3) )
    goto LABEL_24;
  if ( v6 != 3 )
    goto LABEL_7;
  if ( v10 * a3 + 9999999 < v11 )
  {
LABEL_24:
    v18 = -1073741675;
    goto LABEL_16;
  }
  v11 = v10 * a3 + 9999999;
LABEL_7:
  v12 = v11 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v13 = *(_DWORD *)(a1 + 220);
  v14 = *((_QWORD *)&v12 + 1) >> 23;
  if ( v13 < 0x40 && v14 >= 1LL << v13 )
    goto LABEL_26;
  if ( is_mul_ok(v14, 0x2540BE400uLL) )
    v15 = v14 * (unsigned __int128)0x2540BE400uLL / v10;
  else
    v15 = HalpTimerScaleCounter(v14, v10, 10000000000LL);
  *(_QWORD *)(a1 + 16) = v14;
  *(_DWORD *)(a1 + 52) = 1;
  v8 = v15 / 0x3E8;
  if ( v6 == 2 && (v9 & 0x40) == 0 )
    v6 = 1;
  if ( a4 )
  {
    if ( (v9 & 0x10000) != 0 )
      v16 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
    else
      v16 = *(_QWORD *)(a1 + 72);
    v17 = guard_dispatch_icall_no_overrides(v16, v6, v14);
    v18 = v17;
    if ( v17 < 0 )
      HalpTimerSetProblemEx(a1, 18, v17, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 810);
  }
  else
  {
    v18 = 0;
  }
LABEL_16:
  *a5 = v8;
  return v18;
}
