/*
 * XREFs of PopIsWakeTimerImminent @ 0x140B6FA00
 * Callers:
 *     PopDeferDoze @ 0x1407748E0 (PopDeferDoze.c)
 * Callees:
 *     ExGetNextWakeTime @ 0x140C12EE0 (ExGetNextWakeTime.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall PopIsWakeTimerImminent(int a1, int a2, int a3, unsigned __int64 *a4, _QWORD *a5)
{
  unsigned __int64 v5; // r15
  PVOID v6; // rbx
  void *v7; // rsi
  int v8; // r10d
  __int64 v9; // rcx
  bool v10; // r14
  unsigned __int64 v11; // rdi
  int v12; // r13d
  char NextWakeTime; // al
  char v14; // al
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  void *v19; // [rsp+48h] [rbp-8h] BYREF
  int v21; // [rsp+A0h] [rbp+50h]

  v21 = a3;
  v5 = -1LL;
  v6 = 0LL;
  v18 = -1LL;
  v7 = 0LL;
  v16 = -1LL;
  v8 = a1;
  v19 = 0LL;
  v9 = qword_140F104F0;
  v10 = 0;
  *a5 = 0LL;
  v11 = -1LL;
  P = 0LL;
  if ( v9 && PopDozeDeferralMaxSeconds )
  {
    v12 = v9 + 10000000 * PopDozeDeferralMaxSeconds;
    if ( a2 )
    {
      LOBYTE(a3) = a2 == 2 && SLODWORD(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime) >= 0;
      NextWakeTime = ExGetNextWakeTime(v8, v12, a3, (unsigned int)&v18, (__int64)&v19);
      v5 = v18;
      v7 = v19;
      a3 = v21;
      v8 = a1;
      v10 = NextWakeTime != 0;
    }
    if ( a3
      && (a3 != 2 || SLODWORD(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime) < 0
        ? (LOBYTE(a3) = 0)
        : (LOBYTE(a3) = 1),
          v14 = ExGetNextWakeTime(v8, v12, a3, (unsigned int)&v16, (__int64)&P),
          v11 = v16,
          v6 = P,
          v14) )
    {
      v10 = 1;
    }
    else if ( !v10 )
    {
      return v10;
    }
    if ( v5 > v11 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0x53577254u);
      *a5 = v6;
      *a4 = v11;
    }
    else
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0x53577254u);
      *a5 = v7;
      *a4 = v5;
    }
  }
  return v10;
}
