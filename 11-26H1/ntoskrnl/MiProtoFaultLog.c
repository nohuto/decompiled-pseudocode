/*
 * XREFs of MiProtoFaultLog @ 0x14044EAB0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MiProtoFaultLog(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v3; // r12
  __int64 v4; // rbp
  signed __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rbx
  unsigned int v8; // edx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // r8
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(a1 + 16);
  _m_prefetchw((const void *)(v4 + 64));
  v5 = *(_QWORD *)(v4 + 64);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 64), v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5;
  v8 = v5 & 0xF;
  v9 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v8 > 1 )
    goto LABEL_12;
  if ( v8 )
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 48), 0xFuLL);
    if ( v10 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v9, 0x10uLL, v10 + 15);
    _m_prefetchw((const void *)(v4 + 64));
    v11 = *(_QWORD *)(v4 + 64);
    while ( (v11 & 0xF) == 0 )
    {
      if ( v9 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 64), v11 + 15, v11);
      if ( v12 == v11 )
        goto LABEL_12;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_12:
    ObpTraceObjectReferenceIfActive(v9 - 48, 1, 0x63536D4Du);
    if ( v9 )
      goto LABEL_19;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  v9 = *(_QWORD *)(v4 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v9 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v4 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)(v4 + 72), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 72));
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(v4 + 72), retaddr);
  }
LABEL_19:
  if ( *v3 >= 0xFFFF800000000000uLL
    || (Process = KeGetCurrentThread()->ApcState.Process, (CycleTime = Process[1].CycleTime) == 0)
    || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
  {
    v15 = -1;
  }
  else
  {
    v15 = *(_DWORD *)(CycleTime + 8);
  }
  v16 = MiStartingOffset(*(__int64 **)(a1 + 8), *(_QWORD *)(v1 + 8) | 0x8000000000000000uLL, v15);
  PfSnLogPageFault(v9, v16, (*(_DWORD *)(v4 + 56) >> 5) & 1, v17);
  return ObFastDereferenceObjectDeferDelete((signed __int64 *)(v4 + 64), v9, 0x63536D4Du);
}
