/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x1403BCE40
 * Callers:
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiCreateCloneChain @ 0x140776874 (MiCreateCloneChain.c)
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     MiCreateAweInfoBitMap @ 0x140878888 (MiCreateAweInfoBitMap.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiCreatePlaceholderStorage @ 0x1409C684C (MiCreatePlaceholderStorage.c)
 *     MiCreateVadEvent @ 0x1409CE5DC (MiCreateVadEvent.c)
 *     MiBuildNewCloneDescriptor @ 0x140B558E4 (MiBuildNewCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     ViIrpAllocateLockedPacket @ 0x140C2C7B0 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspExpandQuota @ 0x1403BD8E8 (PspExpandQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v5; // rsi
  unsigned __int8 v6; // bp
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp+8h] BYREF

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  v5 = *(unsigned __int64 **)(a1 + 760);
  v6 = stru_140FC01F0.SchedulerApcFill3[48];
  _m_prefetchw(v5);
  v7 = *v5;
  _InterlockedOr(v19, 0);
  v8 = 0;
  while ( 2 )
  {
    v9 = v5[8];
LABEL_5:
    for ( i = v9; ; v9 = i )
    {
      v10 = v7 + a2;
      if ( v7 + a2 < v7 )
        return *(unsigned int *)&stru_140FC01F0.SchedulerApcFill5[52];
      if ( v10 <= v9 )
        break;
      if ( (v6 & 1) == 0 || !v5[10] )
        return *(unsigned int *)&stru_140FC01F0.SchedulerApcFill5[52];
      v18 = _InterlockedExchange64((volatile __int64 *)v5 + 9, 0LL);
      if ( v18 )
      {
        v9 = v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, v18);
        goto LABEL_5;
      }
      if ( !(unsigned __int8)PspExpandQuota(0, (_DWORD)v5, v7, a2, (__int64)&i) )
        return *(unsigned int *)&stru_140FC01F0.SchedulerApcFill5[52];
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v10, v7);
    v11 = v7 == v12;
    v7 = v12;
    if ( !v11 )
      continue;
    break;
  }
  _m_prefetchw(v5 + 1);
  v13 = v5[1];
  do
  {
    if ( v10 <= v13 )
      break;
    v14 = v13;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 1, v10, v13);
  }
  while ( v13 != v14 );
  if ( (v6 & 4) != 0 )
  {
    v15 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 512), a2);
    _m_prefetchw((const void *)(a1 + 528));
    v16 = *(_QWORD *)(a1 + 528);
    do
    {
      if ( v15 <= v16 )
        break;
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 528), v15, v16);
    }
    while ( v16 != v17 );
  }
  return v8;
}
