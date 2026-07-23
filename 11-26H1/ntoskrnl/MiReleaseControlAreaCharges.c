/*
 * XREFs of MiReleaseControlAreaCharges @ 0x14047A210
 * Callers:
 *     MiInsertUnusedSegment @ 0x14047A120 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiIncludeSharedCommit @ 0x140447760 (MiIncludeSharedCommit.c)
 *     MiAweControlArea @ 0x140489730 (MiAweControlArea.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140534348 (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rdi
  KIRQL v7; // r9
  int v8; // ecx
  BOOL v9; // r10d
  __int64 v10; // r8
  int v11; // r11d

  if ( (unsigned int)MiAweControlArea(a1, a2, a3, (unsigned int)a2) || !(unsigned int)MiIncludeSharedCommit(v4) )
    return 0LL;
  v6 = 0LL;
  if ( v5 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_DWORD *)(a1 + 56);
  if ( (v8 & 0x8000000) != 0 )
  {
    *(_DWORD *)(a1 + 56) = v8 & 0xF7FFFFFF;
    v9 = (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v10 = a1 + 128;
    if ( a1 != -128 )
    {
      v11 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x10000) != 0 )
          goto LABEL_17;
        if ( (v11 & *(_DWORD *)(v10 + 48)) == v11 || v9 )
          break;
LABEL_18:
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_19;
      }
      v6 += MiComputeCrossPartitionSectionCharges(v10);
LABEL_17:
      if ( v9 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v7 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
  return v6;
}
