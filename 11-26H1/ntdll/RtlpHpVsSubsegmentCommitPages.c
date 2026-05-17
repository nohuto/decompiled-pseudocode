/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1800EC488
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180013304 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18006B040 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v11; // r12d
  __int64 v12; // rdi
  volatile signed __int64 *v13; // rbp
  __int64 v14; // rcx
  int v15; // r14d
  unsigned __int64 v16; // rax

  _BitScanForward64(&v6, a3);
  _BitScanReverse64(&v7, a3);
  v8 = a4;
  LODWORD(v7) = v7 - v6;
  v9 = a2 + (unsigned int)((_DWORD)v6 << 12);
  v11 = ((_DWORD)v7 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v7 + 1)) - 1) << v6;
  if ( (*(_BYTE *)(a1 + 5) & 1) != 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = (volatile signed __int64 *)(a2 + 24);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 24), a2);
  }
  v14 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
            v14,
            v9,
            v11,
            0LL);
    if ( v15 < 0 )
      goto LABEL_7;
    *(_QWORD *)(a2 + 16) |= v12;
    v16 = v8;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(v14, v9, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v16 = -(int)v8;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v16);
  v15 = 0;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(v13);
  return (unsigned int)v15;
}
