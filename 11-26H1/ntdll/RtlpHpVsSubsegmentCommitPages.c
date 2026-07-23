/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1800EB658
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  char *v9; // r14
  unsigned int v11; // r12d
  __int64 v12; // rdi
  _RTL_SRWLOCK *v13; // rbp
  __int64 v14; // rcx
  int v15; // r14d
  unsigned __int64 v16; // rax

  _BitScanForward64(&v6, a3);
  _BitScanReverse64(&v7, a3);
  v8 = a4;
  LODWORD(v7) = v7 - v6;
  v9 = (char *)a2 + (unsigned int)((_DWORD)v6 << 12);
  v11 = ((_DWORD)v7 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v7 + 1)) - 1) << v6;
  if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = a2 + 3;
    RtlAcquireSRWLockExclusive(a2 + 3);
  }
  v14 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, char *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            v14,
            v9,
            v11,
            0LL);
    if ( v15 < 0 )
      goto LABEL_7;
    a2[2].Value |= v12;
    v16 = v8;
  }
  else
  {
    ((void (__fastcall *)(__int64, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(v14, v9, v11);
    a2[2].Value &= ~v12;
    v16 = -(int)v8;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v16);
  v15 = 0;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(v13);
  return (unsigned int)v15;
}
