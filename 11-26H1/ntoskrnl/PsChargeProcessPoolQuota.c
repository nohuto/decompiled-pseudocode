/*
 * XREFs of PsChargeProcessPoolQuota @ 0x1403C71D0
 * Callers:
 *     PsChargePoolQuota @ 0x1403C71A0 (PsChargePoolQuota.c)
 * Callees:
 *     PspExpandQuota @ 0x1403C7758 (PspExpandQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  NTSTATUS v5; // ebp
  _BOOL8 v6; // r15
  unsigned __int8 v7; // r12
  __int64 v8; // r13
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+60h] [rbp+8h] BYREF

  if ( Process == PsInitialSystemProcess )
    return 0;
  v5 = 0;
  v6 = PoolType == PagedPool;
  v7 = stru_140FC11F0.SchedulerApcFill3[8 * v6 + 40];
  v8 = 8 * v6;
  v9 = (unsigned __int64 *)(&Process[1].SchedulingGroup->Policy + 16 * v6);
  _m_prefetchw(v9);
  v10 = *v9;
  _InterlockedOr(v22, 0);
  while ( 2 )
  {
    v11 = v9[8];
LABEL_4:
    for ( i = v11; ; v11 = i )
    {
      v12 = v10 + Amount;
      if ( v10 + Amount < v10 )
        return *(_DWORD *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
      if ( v12 <= v11 )
        break;
      if ( (v7 & 1) == 0 || !v9[10] )
        return *(_DWORD *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
      v21 = _InterlockedExchange64((volatile __int64 *)v9 + 9, 0LL);
      if ( v21 )
      {
        v11 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, v21);
        goto LABEL_4;
      }
      if ( !(unsigned __int8)PspExpandQuota(v6, (_DWORD)v9, v10, Amount, (__int64)&i) )
        return *(_DWORD *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v12, v10);
    v13 = v10 == v14;
    v10 = v14;
    if ( !v13 )
      continue;
    break;
  }
  _m_prefetchw(v9 + 1);
  v15 = v9[1];
  do
  {
    if ( v12 <= v15 )
      break;
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 1, v12, v15);
  }
  while ( v15 != v16 );
  if ( (v7 & 4) != 0 )
  {
    v17 = Amount
        + _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&Process[1].ThreadListHead.Blink + v8), Amount);
    _m_prefetchw(&Process[1].DeepFreezeStartTime + v6);
    v18 = *(&Process[1].DeepFreezeStartTime + v6);
    do
    {
      if ( v17 <= v18 )
        break;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v6, v17, v18);
    }
    while ( v18 != v19 );
  }
  return v5;
}
