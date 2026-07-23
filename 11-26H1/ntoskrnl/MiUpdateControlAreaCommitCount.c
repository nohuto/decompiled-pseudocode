/*
 * XREFs of MiUpdateControlAreaCommitCount @ 0x14047ED48
 * Callers:
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUpdateControlAreaCommitCount(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v5; // rsi
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // rbx

  _InterlockedAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF)) + 23480LL),
    a2);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 16LL) += a2;
    return 0LL;
  }
  else
  {
    v5 = (volatile LONG *)(a1 + 72);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(a1 + 120) = (*(_QWORD *)(a1 + 120) + a2) ^ (*(_QWORD *)(a1 + 120) ^ (*(_QWORD *)(a1 + 120) + a2)) & 0xFFFFFFF000000000uLL;
    v7 = *(_QWORD *)(a1 + 128);
    if ( (*(_DWORD *)(v7 + 56) & 0xA0) == 0x80 )
      v7 = a1;
    v8 = *(_DWORD *)(v7 + 176) & 0x3FFFFFFF;
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockExclusive(v5, v6);
    return v8;
  }
}
