/*
 * XREFs of PspChargeQuota @ 0x1403C7410
 * Callers:
 *     PsChargeProcessQuota @ 0x1403C7134 (PsChargeProcessQuota.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     PsChargeSharedPoolQuota @ 0x1409B9190 (PsChargeSharedPoolQuota.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1409BDB00 (PsChargeProcessPagedPoolQuota.c)
 *     RtlpAllocateAtom @ 0x140AA4C00 (RtlpAllocateAtom.c)
 * Callees:
 *     PspExpandQuota @ 0x1403C7758 (PspExpandQuota.c)
 */

__int64 __fastcall PspChargeQuota(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 *v7; // rbx
  __int64 v8; // r12
  unsigned __int8 v9; // r15
  unsigned __int64 v10; // rsi
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

  v4 = a3;
  v7 = (unsigned __int64 *)(a1 + ((__int64)a3 << 7));
  v8 = 8LL * a3;
  v9 = stru_140FC11F0.SchedulerApcFill3[v8 + 40];
  _m_prefetchw(v7);
  v10 = *v7;
  _InterlockedOr(v22, 0);
  while ( 2 )
  {
    v11 = v7[8];
LABEL_3:
    for ( i = v11; ; v11 = i )
    {
      v12 = v10 + a4;
      if ( v10 + a4 < v10 )
        return *(unsigned int *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
      if ( v12 <= v11 )
        break;
      if ( (v9 & 1) == 0 || !v7[10] )
        return *(unsigned int *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
      v21 = _InterlockedExchange64((volatile __int64 *)v7 + 9, 0LL);
      if ( v21 )
      {
        v11 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, v21);
        goto LABEL_3;
      }
      if ( !(unsigned __int8)PspExpandQuota(v4, (_DWORD)v7, v10, a4, (__int64)&i) )
        return *(unsigned int *)&stru_140FC11F0.SchedulerApcFill5[v8 + 44];
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v12, v10);
    v13 = v10 == v14;
    v10 = v14;
    if ( !v13 )
      continue;
    break;
  }
  _m_prefetchw(v7 + 1);
  v15 = v7[1];
  do
  {
    if ( v12 <= v15 )
      break;
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 1, v12, v15);
  }
  while ( v15 != v16 );
  if ( a2 && (v9 & 4) != 0 )
  {
    v17 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + a2 + 512), a4);
    _m_prefetchw((const void *)(a2 + 8 * v4 + 528));
    v18 = *(_QWORD *)(a2 + 8 * v4 + 528);
    do
    {
      if ( v17 <= v18 )
        break;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 8 * v4 + 528), v17, v18);
    }
    while ( v18 != v19 );
  }
  return 0LL;
}
