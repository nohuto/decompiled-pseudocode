/*
 * XREFs of MiCreateDecayPfn @ 0x14045A320
 * Callers:
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPrepareDecayNodeForReuse @ 0x14045A694 (MiPrepareDecayNodeForReuse.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR MiCreateDecayPfn()
{
  PSLIST_ENTRY v0; // rax
  ULONG_PTR v1; // rbx
  int v2; // ecx
  unsigned int v3; // r11d
  __int64 v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  char v14; // di
  unsigned __int64 v15; // r14
  unsigned __int16 *v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  signed __int64 v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int v23; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v0 = RtlpInterlockedPopEntrySList(&stru_140E34940);
    v1 = (ULONG_PTR)v0;
    if ( v0 )
    {
      v13 = (__int64)&v0[0x22000000000LL] / 48;
    }
    else
    {
      v23 = 0;
      v2 = (qword_140E34960 & 4) != 0 ? 0x20 : 0;
      v3 = v2 + dword_140E34958 - 1;
      v4 = (qword_140E34960 & 4) != 0 ? 4 : 0;
      v5 = (_QWORD *)(qword_140E34960 - v4);
      if ( !dword_140E34958 )
        return 0LL;
      v6 = ~*v5 | ((1LL << v2) - 1);
      v7 = (_QWORD *)(qword_140E34960 - v4);
      while ( v6 == -1 )
      {
        if ( ++v7 > &v5[(unsigned __int64)v3 >> 6] )
          return 0LL;
        v6 = ~*v7;
      }
      _BitScanForward64(&v8, ~v6);
      v9 = ((unsigned int)(v7 - v5) << 6) + v8;
      if ( v9 > v3 )
        return 0LL;
      if ( v9 == -1 )
        return 0LL;
      v10 = v9 - ((qword_140E34960 & 4) != 0 ? 0x20 : 0);
      if ( v10 == -1 )
        return 0LL;
      v12 = v10;
      v13 = v10 + qword_140E34930;
      v1 = 48 * v13 - 0x220000000000LL;
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v1 + 24) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34950);
      v14 = v10 & 7;
      v15 = v12 >> 3;
      if ( ((*(char *)(qword_140E34960 + v15) >> v14) & 1) != 0 )
        *(_BYTE *)(qword_140E34960 + v15) &= ~(1 << v14);
      else
        v13 = -1LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E34950 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34950, retaddr);
      if ( v13 != -1 )
        MiPrepareDecayNodeForReuse(v13);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  while ( v13 == -1 );
  v16 = *(unsigned __int16 **)(stru_140E2ED08.ThreadLock
                             + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((v13 & 0xFFFFFFFFFFLL) << 12) | 0x880;
  if ( qword_140E2D8C0 )
  {
    v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((v13 & 0xFFFFFFFFFFLL) << 12) | 0x890;
    if ( (qword_140E2D8C0 & v17) == 0 )
      v18 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((v13 & 0xFFFFFFFFFFLL) << 12) | 0x880;
    v17 = v18;
  }
  *(_QWORD *)(v1 + 16) = v17;
  v19 = *(_QWORD *)(v1 + 40);
  v20 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v1 + 40),
          v13 ^ (v13 ^ v19) & 0xFFFFFF0000000000uLL,
          v19);
  if ( v19 != v20 )
  {
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v1 + 40),
              v13 ^ (v13 ^ v20) & 0xFFFFFF0000000000uLL,
              v20);
    }
    while ( v21 != v20 );
  }
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  *(_DWORD *)(v1 + 32) |= 0x8000000u;
  *(_QWORD *)(v1 + 40) = ((unsigned __int64)*v16 << 43) ^ (((unsigned __int64)*v16 << 43) ^ *(_QWORD *)(v1 + 40)) & 0xFFE007FFFFFFFFFFuLL;
  if ( (*(_QWORD *)(v1 + 40) & 0x20000000000000LL) == 0 )
    *(_DWORD *)(v1 + 32) = *(_DWORD *)(v1 + 32) & 0xF8FFFFFF | 0x5000000;
  MiInsertPageInList(v1, 4u);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v1;
}
