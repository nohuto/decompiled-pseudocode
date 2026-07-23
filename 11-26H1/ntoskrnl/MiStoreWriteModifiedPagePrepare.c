/*
 * XREFs of MiStoreWriteModifiedPagePrepare @ 0x1404022B0
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     MiStoreGetWriteSupport @ 0x140399F8C (MiStoreGetWriteSupport.c)
 *     MiStoreCheckCandidatePage @ 0x1403FD488 (MiStoreCheckCandidatePage.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14040353C (MiDerefPageFileSpaceBitmaps.c)
 *     MiUpdatePagefilePeakUsage @ 0x140479588 (MiUpdatePagefilePeakUsage.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1404A5504 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreLogNotCandidate @ 0x1404BDB30 (MiStoreLogNotCandidate.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404D0E00 (MiIsStoreVirtualPagefileFull.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiStoreWriteModifiedPagePrepare(__int64 *a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rbx
  void *v10; // rax
  ULONG ClearBits; // r13d
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 PageFilePte; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  __int64 v20; // rcx
  LONG result; // eax
  volatile signed __int64 *v22; // r9
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  PSLIST_ENTRY v25; // r9
  PVOID v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  _BYTE *v31; // r9
  int v32; // edi
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int128 v36; // [rsp+48h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v38; // [rsp+A0h] [rbp+8h] BYREF
  int v39; // [rsp+A8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+18h]
  __int64 v41; // [rsp+B8h] [rbp+20h]

  v3 = (unsigned int)a2;
  v4 = (unsigned int)a2;
  v39 = 0;
  v36 = 0LL;
  v5 = a1[5];
  v6 = *a1;
  v41 = a1[1];
  v33 = *(_QWORD *)(v41 + 72);
  v7 = a1[3];
  v35 = v5;
  Object = 0LL;
  v8 = *(_QWORD *)(v7 + 8LL * (unsigned int)a2 + 48);
  if ( v8 == qword_140E361B8 )
  {
    ++*((_DWORD *)a1 + 25);
LABEL_38:
    ++*((_DWORD *)a1 + 24);
    v19 = v4 >> 3;
    v20 = *(_QWORD *)(*(_QWORD *)(v6 + 1512) + 8LL);
    result = *(char *)(v20 + v19) | (1 << (v3 & 7));
    *(_BYTE *)(v20 + v19) = result;
    return result;
  }
  if ( *(_DWORD *)(v5 + 12) )
  {
    v9 = (__int64 *)a1[6];
    if ( *v9 != *(_QWORD *)(v5 + 80) )
    {
      if ( *v9 )
      {
        v10 = (void *)MiDerefPageFileSpaceBitmaps(v5, a1[6], 1LL);
        a1[6] = (__int64)v10;
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      v9 = a1 + 7;
      MiRefPageFileSpaceBitmaps(v5, a1 + 7);
      a1[6] = (__int64)(a1 + 7);
    }
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v9 + 1), 1u, *((_DWORD *)a1 + 27));
  }
  else
  {
    ClearBits = -1;
  }
  v34 = 48 * v8;
  v12 = 48 * v8 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  LODWORD(v38) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v38);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 && MiCanPfnOriginalPteBeLost(v12) )
  {
    PageFilePte = MiMakePageFilePte(0);
    v15 = *(_QWORD *)(v41 + 64);
    if ( (*(_BYTE *)(v15 + 172) & 0x40) != 0 )
      v16 = MiTransferSoftwarePte(PageFilePte, *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1300) + 22304), 4u, 0);
    else
      v16 = MiTransferSoftwarePte(PageFilePte, v15, (int)v3 + *((_DWORD *)a1 + 26), 1);
  }
  else
  {
    v16 = *(_QWORD *)(v12 + 16);
  }
  *(_QWORD *)(v33 + 8 * v3 + 96) = v16;
  if ( ClearBits == -1 || (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
    goto LABEL_33;
  v38 = 0LL;
  v17 = MiStoreCheckCandidatePage(v12, ClearBits, &v39, &v36, &v38);
  if ( v17 < 0 )
  {
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        if ( (*((_QWORD *)stru_140E366D8.FirstArgument + 2) & 0x400000000002LL) != 0 )
        {
          v18 = *((_QWORD *)stru_140E366D8.FirstArgument + 3);
          if ( (v18 & 0x400000000002LL) == v18 )
            MiStoreLogNotCandidate(v18, (unsigned int)v17, ClearBits);
        }
      }
    }
    goto LABEL_33;
  }
  if ( (BYTE8(v36) & 3) == 0 )
  {
    Object = (PVOID)v36;
    v22 = (volatile signed __int64 *)(v36 - 48);
    _m_prefetchw((const void *)(v36 - 48));
    v23 = *v22;
    if ( *v22 )
    {
      while ( 1 )
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange64(v22, v23 + 1, v23);
        if ( v24 == v23 )
          break;
        if ( !v23 )
          goto LABEL_33;
      }
      ObpTraceObjectReferenceIfActive((__int64)v22, 1, 0x66506D4Du);
      goto LABEL_46;
    }
LABEL_33:
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    goto LABEL_38;
  }
LABEL_46:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v25 = MiStoreGetWriteSupport((_SLIST_HEADER *)v6);
  v26 = Object;
  if ( !v25 )
  {
    *((_DWORD *)a1 + 28) = 1;
    if ( v26 )
      ObDereferenceObjectDeferDeleteWithTag(v26, 0x66506D4Du);
    goto LABEL_38;
  }
  v27 = v36;
  *((_QWORD *)&v25[1].Next + 1) = Object;
  v25[2].Next = 0LL;
  *((_DWORD *)&v25[2].Next + 2) = 56;
  v25[4].Next = 0LL;
  *((_QWORD *)&v25[4].Next + 1) = 4096LL;
  v28 = a1[2];
  *((_WORD *)&v25[2].Next + 5) |= 3u;
  *((_QWORD *)&v25[3].Next + 1) = v28;
  v25->Next = (_SLIST_ENTRY *)v41;
  LODWORD(v28) = v39;
  v25[5].Next = (_SLIST_ENTRY *)(v34 / 48);
  v29 = a1[4];
  *(_DWORD *)(v29 + 4) = v28;
  *(_QWORD *)(v29 + 32) = v38;
  *(_QWORD *)(v29 + 56) = &v25->Next + 1;
  *(_DWORD *)(v29 + 24) = v3;
  *(_OWORD *)(v29 + 8) = v27;
  *(_QWORD *)(v29 + 40) = v25 + 2;
  *(_QWORD *)(v29 + 48) = v25;
  a1[4] += 64LL;
  v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v35 + 200));
  v31 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 80) + 16LL) + ((unsigned __int64)ClearBits >> 3));
  *v31 |= 1 << (ClearBits & 7);
  *((_DWORD *)a1 + 27) = ClearBits + 1;
  *(_DWORD *)(v35 + 88) = ClearBits + 1;
  v32 = *(_DWORD *)(v35 + 12) - 1;
  *(_DWORD *)(v35 + 12) = v32;
  MiUpdatePagefilePeakUsage(v35);
  if ( (_BYTE)v30 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      result = 0;
      *(_DWORD *)(v35 + 200) = 0;
    }
    else
    {
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v35 + 200), retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      result = 0;
      *(_DWORD *)(v35 + 200) = 0;
    }
    else
    {
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v35 + 200), retaddr);
    }
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
    __writecr8(v30);
  }
  if ( !v32 )
  {
    result = MiIsStoreVirtualPagefileFull(v6);
    if ( result )
      return KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
  }
  return result;
}
