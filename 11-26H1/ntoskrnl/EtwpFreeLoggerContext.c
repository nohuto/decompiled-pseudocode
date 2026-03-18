/*
 * XREFs of EtwpFreeLoggerContext @ 0x140A6CBB4
 * Callers:
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     EtwpFreeCompression @ 0x140423294 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140423350 (KeRemoveQueueDpc.c)
 *     EtwpCancelPendingApcs @ 0x1404676B0 (EtwpCancelPendingApcs.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14048B090 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14048D7D0 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeGenericCallDpc @ 0x1404D1460 (KeGenericCallDpc.c)
 *     EtwpFreeApcPool @ 0x1404D9704 (EtwpFreeApcPool.c)
 *     EtwpClearPartitionContext @ 0x1404FA0F4 (EtwpClearPartitionContext.c)
 *     EtwpFreePmcData @ 0x140825E74 (EtwpFreePmcData.c)
 *     EtwpFreeLbrData @ 0x140830124 (EtwpFreeLbrData.c)
 *     EtwpDestructIptData @ 0x140830344 (EtwpDestructIptData.c)
 *     SeDeleteClientSecurity @ 0x1408E8BE0 (SeDeleteClientSecurity.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x140A6CF98 (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x140A6D194 (EtwpShutdownConsumers.c)
 *     EtwpFreeSoftRestartContext @ 0x140A6D2A4 (EtwpFreeSoftRestartContext.c)
 *     EtwpFreeStackCache @ 0x140ABDC1C (EtwpFreeStackCache.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int i; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rcx
  char *v16; // rdi
  char *v17; // rcx
  char *v18; // rdi
  _QWORD *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rcx
  char *v23; // rcx
  void *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)P + 170);
  EtwpShutdownConsumers();
  v3 = *(unsigned int *)P;
  EtwpCancelPendingApcs((union _SLIST_HEADER *)P + 52);
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpCancelPendingApcs((union _SLIST_HEADER *)P + 68);
  v4 = v3;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v3), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v3));
  if ( *((_WORD *)P + 664) )
  {
    v21 = (void *)*((_QWORD *)P + 167);
    *((_WORD *)P + 664) = 0;
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)P + 167) = 0LL;
  }
  v5 = *((_QWORD *)P + 168);
  if ( v5 )
  {
    v22 = *(_QWORD *)(v5 + 8);
    if ( v22 )
    {
      v26 = 0LL;
      v25 = 0LL;
      ExDeleteTimer(v22, 1, 1, (unsigned int *)&v25);
    }
    v24 = *(void **)(*((_QWORD *)P + 168) + 24LL);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    ExFreePoolWithTag(*((PVOID *)P + 168), 0);
    *((_QWORD *)P + 168) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  EtwpFreeSoftRestartContext(P);
  EtwpFreeTraceBufferPool(P);
  v6 = KeNumberProcessors_0;
  for ( i = 0; i < v6; *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v4) = 0LL )
  {
    v8 = *((_QWORD *)P + 170);
    if ( v8 == EtwpHostSiloState )
      v9 = *(_QWORD *)(KeGetPrcb(i) + 35816) + 320LL;
    else
      v9 = *(_QWORD *)(v8 + 4416) + ((unsigned __int64)i << 6);
    ++i;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)P + 23);
  if ( *((_QWORD *)P + 90) )
    SeDeleteClientSecurity((__int64)(P + 704));
  v12 = (void *)*((_QWORD *)P + 97);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v13 & 0xFFFFFFFFFFFFFFF0uLL, (v13 & 0xF) + 1, v10, v11);
  EtwpFreeApcPool((__int64)(P + 832));
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 131), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E28440.PriorityFloorCounts[8]);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((PVOID *)P + 132));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 4520), (unsigned __int8)P[818]);
  if ( *((_QWORD *)P + 133) )
    EtwpFreePmcData((__int64)P, v14);
  if ( *((_QWORD *)P + 134) )
    EtwpFreeLbrData((__int64)P, v14);
  if ( *((_QWORD *)P + 135) )
    EtwpDestructIptData((__int64)P, v14);
  if ( (*((_DWORD *)P + 205) & 2) != 0 )
    EtwpFreeApcPool((__int64)(P + 1088));
  v15 = (void *)*((_QWORD *)P + 194);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = (char *)*((_QWORD *)P + 12);
  while ( v16 != P + 96 )
  {
    v17 = v16;
    v16 = *(char **)v16;
    ExFreePoolWithTag(v17, 0);
  }
  v18 = (char *)*((_QWORD *)P + 163);
  while ( v18 != P + 1304 )
  {
    v23 = v18;
    v18 = *(char **)v18;
    ExFreePoolWithTag(v23, 0);
  }
  while ( 1 )
  {
    v19 = (_QWORD *)*((_QWORD *)P + 14);
    if ( !v19 )
      break;
    *((_QWORD *)P + 14) = *v19;
    ExFreePoolWithTag(v19, 0);
  }
  EtwpClearPartitionContext((__int64 *)P + 198);
  v20 = (void *)*((_QWORD *)P + 199);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 704) + 8 * v4));
  *(_QWORD *)(*(_QWORD *)(v1 + 712) + 8 * v4) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 4404));
}
