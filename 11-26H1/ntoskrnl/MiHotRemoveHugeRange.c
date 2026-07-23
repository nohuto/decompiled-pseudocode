/*
 * XREFs of MiHotRemoveHugeRange @ 0x1406F0BA4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlFindSetBitsAndClearEx @ 0x1402503A0 (RtlFindSetBitsAndClearEx.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiMakeEntireHugePfnGood @ 0x1406F1358 (MiMakeEntireHugePfnGood.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 *     MiClearMirrorBitmaps @ 0x1406F42D4 (MiClearMirrorBitmaps.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x1406F98B8 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiFlushCacheRange @ 0x140712124 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiHotRemoveHugeRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // r12
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rsi
  unsigned __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r14
  int v14; // edx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v16; // rax
  __int64 EntireHugePfnGood; // rax
  _QWORD *v18; // rdx
  bool v19; // r8
  _QWORD *v20; // r10
  unsigned int v21; // r9d
  _QWORD *v22; // rax
  ULONG_PTR v23; // r14
  ULONG_PTR v24; // rbx
  __int64 v25; // r13
  _QWORD *v26; // rsi
  KIRQL v27; // di
  unsigned __int64 v28; // rbx
  unsigned int v29; // r12d
  __int64 v30; // r15
  ULONG64 v31; // r8
  unsigned __int64 v32; // rdi
  unsigned __int8 v33; // r12
  int v34; // edx
  unsigned __int8 v35; // r14
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v37; // rsi
  PVOID v38; // rbx
  ULONG_PTR v40; // [rsp+28h] [rbp-20h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+90h] [rbp+48h] BYREF
  ULONG_PTR v43; // [rsp+98h] [rbp+50h] BYREF
  int v44; // [rsp+A0h] [rbp+58h]
  __int64 PoolMm; // [rsp+A8h] [rbp+60h]

  v44 = a3;
  v43 = a2;
  v3 = BugCheckParameter2 >> 18;
  v4 = BugCheckParameter2;
  PoolMm = a2;
  v5 = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  P = 0LL;
  v6 = a2;
  BitMapHeader.SizeOfBitMap = BugCheckParameter2 >> 18;
  v7 = a2;
  v8 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v5);
  v9 = MiHugePfnPartition(v8);
  if ( v10 )
  {
    v11 = v9;
    while ( 1 )
    {
      v40 = MiRestrictRangeToNode(v4, v7);
      v12 = v40 >> 18;
      v13 = v40;
      MiPageToNode(v4);
      if ( !(v40 >> 18) )
        goto LABEL_24;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
        }
        MiLockHugePfnAtDpc((__int64)v8);
        MiUpdateHugePageCounts(v11, v5, 1LL);
        v16 = *v8;
        if ( (*v8 & 8) == 0 )
          goto LABEL_18;
        EntireHugePfnGood = MiMakeEntireHugePfnGood(v5);
        v18 = P;
        v19 = 0;
        v20 = (_QWORD *)EntireHugePfnGood;
        if ( !P )
          goto LABEL_17;
        v21 = *(_QWORD *)(EntireHugePfnGood + 24) & 0x3FFFFF;
        while ( v21 < (v18[3] & 0x3FFFFFuLL) )
        {
          v22 = (_QWORD *)*v18;
          if ( !*v18 )
            goto LABEL_17;
LABEL_15:
          v18 = v22;
        }
        v22 = (_QWORD *)v18[1];
        if ( v22 )
          goto LABEL_15;
        v19 = 1;
LABEL_17:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v18, v19, v20);
        v16 = *v8;
LABEL_18:
        *v8 = v16 & 0xFFFFFFFFFFFF800FuLL | 0x4010;
        v14 = ~(1 << (((__int64)v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3));
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * (((((__int64)v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          v14);
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        ++v8;
        v5 = (v5 + 1) ^ (v5 ^ (v5 + 1)) & 0xFFFFFFFFFFC00000uLL;
        --v12;
      }
      while ( v12 );
      v13 = v40;
      v7 = PoolMm;
LABEL_24:
      if ( v44 )
        MiFlushCacheRange(v4, v13);
      MiMarkHugeRangeIoPfnDeleted(v4);
      v4 += v13;
      v7 -= v13;
      PoolMm = v7;
      if ( !v7 )
      {
        LODWORD(v3) = BitMapHeader.SizeOfBitMap;
        v6 = v43;
        break;
      }
    }
  }
  v23 = v6 >> 18;
  v24 = v3 & 0x3FFFFF;
  v25 = 0LL;
  v26 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v24);
  v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  MiClearMirrorBitmaps(1LL, (unsigned int)v24, v23);
  v28 = 0LL;
  if ( v23 )
  {
    v29 = v3 & 0x3FFFFF;
    do
    {
      MiLockHugePfnAtDpc((__int64)v26);
      *v26 = 0LL;
      RtlClearBitsEx((__int64)&stru_140E2ED08.SchedulingGroup, v29 + v28, 1uLL);
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v26 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v26 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      ++v26;
      ++v28;
    }
    while ( v28 < v23 );
  }
  if ( v27 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32]);
  else
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E2ED08.ApcStateFill[32], v27);
  while ( 1 )
  {
    v38 = P;
    if ( !P )
      break;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)P);
    if ( !v44 )
    {
      v30 = *((_QWORD *)v38 + 4);
      v31 = 0LL;
      BitMapHeader.Buffer = (unsigned __int64 *)v30;
      BitMapHeader.SizeOfBitMap = 0x40000LL;
      while ( 1 )
      {
        SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, v31);
        v37 = SetBitsAndClear;
        if ( SetBitsAndClear == -1LL )
          break;
        ++v25;
        v32 = 48 * (SetBitsAndClear + ((unsigned __int64)(*((_DWORD *)v38 + 6) & 0x3FFFFF) << 18)) - 0x220000000000LL;
        v33 = _bittest64((const signed __int64 *)(v30 + 0x8000), SetBitsAndClear);
        PoolMm = ExAllocatePoolMm(
                   64LL,
                   0x20uLL,
                   1816291661,
                   KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
        v35 = KeGetCurrentIrql();
        if ( v35 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v34) = 2;
          KiRaiseIrqlProcessIrqlFlags(v35, v34);
        }
        LODWORD(v43) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v43);
          while ( *(__int64 *)(v32 + 24) < 0 );
        }
        if ( v33 )
          *(_DWORD *)(v32 + 32) |= 0x80000000;
        MiSetPfnRemovalRequested(v32, 1LL, PoolMm);
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v35 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
          __writecr8(v35);
        }
        v31 = v37;
      }
    }
    ExFreePoolWithTag(*((PVOID *)v38 + 4), 0);
    ExFreePoolWithTag(v38, 0);
  }
  return v25;
}
