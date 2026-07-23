/*
 * XREFs of PsReturnPoolQuota @ 0x1403C7570
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // r12
  unsigned __int8 v7; // r13
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  ULONG_PTR v12; // rdx
  __int64 *v13; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  unsigned __int64 v17; // rtt
  char *v18; // rbx
  _KSCHEDULING_GROUP *SchedulingGroup; // [rsp+30h] [rbp-48h]
  unsigned __int8 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  if ( Process != PsInitialSystemProcess )
  {
    v5 = PoolType == PagedPool;
    v6 = v5 << 7;
    SchedulingGroup = Process[1].SchedulingGroup;
    v7 = stru_140FC11F0.SchedulerApcFill3[8 * v5 + 40];
    v8 = (unsigned __int64 *)(&SchedulingGroup->Policy + 16 * v5);
    _m_prefetchw(v8);
    v9 = *v8;
    v10 = v8[8];
    if ( v8[10] )
    {
      v11 = 56 * v5;
      if ( v10 > v9 )
      {
        v12 = *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v11);
        if ( v10 - v9 > v12 )
        {
          if ( v12 > Amount )
            v12 = Amount;
          v17 = v8[8];
          if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 8, v10 - v12, v10)
            && v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 9, v12) > *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v11) )
          {
            v21 = _InterlockedExchange64((volatile __int64 *)v8 + 9, 0LL);
            if ( v21 )
            {
              v20 = 0;
              v18 = (char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v11;
              PspLockQuotaExpansion((char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v11, &v20);
              guard_dispatch_icall_no_overrides((unsigned int)v5, v21);
              PspUnlockQuotaExpansion(v18, v20);
            }
          }
        }
      }
    }
    v13 = (__int64 *)SchedulingGroup;
    BugCheckParameter4 = Amount;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = 0LL;
        if ( BugCheckParameter4 < v9 )
          v15 = v9 - BugCheckParameter4;
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v15, v9);
        if ( v9 == v16 )
          break;
        v9 = v16;
      }
      if ( BugCheckParameter4 < v9 )
        v9 = BugCheckParameter4;
      BugCheckParameter4 -= v9;
      if ( !BugCheckParameter4 )
        break;
      if ( v13 == &PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, (ULONG_PTR)Process, v5, Amount, BugCheckParameter4);
      v13 = &PspSystemQuotaBlock;
      v8 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v6);
      _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
      v9 = *(__int64 *)((char *)&PspSystemQuotaBlock + v6);
    }
    if ( (v7 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v5, -(__int64)Amount);
  }
}
