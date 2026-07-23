/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x14047F8C8
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024D340 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // r14d
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]

  _BitScanForward64(&v6, a3);
  _BitScanReverse64(&v7, a3);
  v8 = (unsigned int)a4;
  v9 = a2 + (unsigned int)((_DWORD)v6 << 12);
  v18 = 0LL;
  v11 = ((1LL << ((unsigned __int8)v7 - (unsigned __int8)v6 + 1)) - 1) << v6;
  v12 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v17 = 0LL;
  if ( v12 )
    RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 24), *(unsigned __int8 *)(a1 + 3), (__int64)&v17, a4);
  v13 = *(_QWORD *)(a1 + 8) ^ a1;
  if ( a5 )
  {
    v14 = guard_dispatch_icall_no_overrides(v13, v9);
    if ( v14 < 0 )
      goto LABEL_7;
    *(_QWORD *)(a2 + 16) |= v11;
    v15 = v8;
  }
  else
  {
    guard_dispatch_icall_no_overrides(v13, v9);
    *(_QWORD *)(a2 + 16) &= ~v11;
    v15 = -(int)v8;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), v15);
  v14 = 0;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v17);
  return (unsigned int)v14;
}
