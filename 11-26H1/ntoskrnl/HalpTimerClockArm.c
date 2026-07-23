/*
 * XREFs of HalpTimerClockArm @ 0x140208A30
 * Callers:
 *     HalpTimerSwitchToNormalClock @ 0x140522964 (HalpTimerSwitchToNormalClock.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     HalpTimerSwitchToNormalClock @ 0x140522964 (HalpTimerSwitchToNormalClock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerClockArm(int a1, ULONG_PTR a2, unsigned __int64 *a3)
{
  ULONG_PTR v3; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rdi
  int v8; // r11d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  int v12; // r8d
  int v13; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  __int64 v23; // rcx

  v3 = HalpClockTimer;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a2;
  if ( a2 > HalpTimerMaxIncrement )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, a2, 0LL);
  if ( a2 < (unsigned int)HalpTimerMinIncrement )
    v7 = (unsigned int)HalpTimerMinIncrement;
  if ( (CurrentPrcb->PendingTickFlags & 2) != 0 )
    HalpTimerSwitchToNormalClock(0LL);
  v8 = *(_DWORD *)(v3 + 224);
  if ( a1 == 1 )
  {
    v9 = 0LL;
    if ( (v8 & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(v3 + 192);
      v11 = v10 * v7;
      if ( is_mul_ok(v10, v7) && v11 + 9999999 >= v11 )
      {
        v20 = *(_DWORD *)(v3 + 220);
        v21 = (v11 + 9999999) / 0x989680;
        if ( v20 >= 0x40 || v21 < 1LL << v20 )
        {
          if ( is_mul_ok(v21, 0x2540BE400uLL) )
            v22 = v21 * (unsigned __int128)0x2540BE400uLL / v10;
          else
            v22 = HalpTimerScaleCounter(v21, *(_QWORD *)(v3 + 192), 10000000000LL);
          *(_QWORD *)(v3 + 16) = v21;
          *(_DWORD *)(v3 + 52) = 1;
          v9 = v22 / 0x3E8;
          if ( (*(_DWORD *)(v3 + 224) & 0x10000) != 0 )
            v23 = *(_QWORD *)(v3 + 72) + *(_DWORD *)(v3 + 80) * KeGetPcr()->Prcb.Number;
          else
            v23 = *(_QWORD *)(v3 + 72);
          v12 = guard_dispatch_icall_no_overrides(v23, 3LL, v21);
          if ( v12 < 0 )
            HalpTimerSetProblemEx(v3, 18, v12, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 810);
        }
        else
        {
          v12 = -1073741811;
        }
      }
      else
      {
        v12 = -1073741675;
      }
    }
    else
    {
      HalpTimerLastProblem = 17;
      *(_QWORD *)(v3 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      v12 = -1073741637;
      *(_QWORD *)(v3 + 252) = 17LL;
      *(_DWORD *)(v3 + 272) = 699;
    }
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
    if ( (v8 & 0x50) != 0 )
    {
      v15 = *(_QWORD *)(v3 + 192);
      if ( is_mul_ok(v15, v7) )
      {
        v16 = *(_DWORD *)(v3 + 220);
        v17 = v15 * v7 / 0x989680;
        if ( v16 < 0x40 && v17 >= 1LL << v16 )
        {
          v9 = 0LL;
          v12 = -1073741811;
          goto LABEL_29;
        }
        if ( is_mul_ok(v17, 0x2540BE400uLL) )
          v18 = v17 * (unsigned __int128)0x2540BE400uLL / v15;
        else
          v18 = HalpTimerScaleCounter(v17, *(_QWORD *)(v3 + 192), 10000000000LL);
        *(_QWORD *)(v3 + 16) = v17;
        *(_DWORD *)(v3 + 52) = 1;
        v14 = v18 / 0x3E8;
        if ( (v8 & 0x10000) != 0 )
          v19 = *(_QWORD *)(v3 + 72) + *(_DWORD *)(v3 + 80) * KeGetPcr()->Prcb.Number;
        else
          v19 = *(_QWORD *)(v3 + 72);
        LOBYTE(v13) = (v8 & 0x40) != 0;
        v12 = guard_dispatch_icall_no_overrides(v19, (unsigned int)(v13 + 1), v17);
        if ( v12 < 0 )
          HalpTimerSetProblemEx(v3, 18, v12, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 810);
      }
      else
      {
        v12 = -1073741675;
      }
      v9 = v14;
      goto LABEL_29;
    }
    HalpTimerLastProblem = 17;
    v9 = 0LL;
    *(_QWORD *)(v3 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
    v12 = -1073741637;
    *(_QWORD *)(v3 + 252) = 17LL;
    *(_DWORD *)(v3 + 272) = 711;
  }
LABEL_29:
  *a3 = v9;
  if ( v12 < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v3, HalpTimerLastProblem, v12);
  return (unsigned int)v12;
}
