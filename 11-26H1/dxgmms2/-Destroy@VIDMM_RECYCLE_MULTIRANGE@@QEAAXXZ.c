/*
 * XREFs of ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400EFE4C
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400EEF40 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400F0C7C (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Destroy(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  VIDMM_RECYCLE_BLOCK *v4; // rcx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v1 = *((_QWORD *)this + 10);
  v3 = *(_QWORD *)(v1 + 152);
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 24);
    v8 = 144LL * *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v8 + v7) = 1;
    *(_QWORD *)(v8 + v7 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v8 + v7 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v1 + 152) + 32LL);
    v9 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v9 + 32) == *(_QWORD *)(v9 + 48) )
    {
      *(_QWORD *)(v9 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v1 + 152) + 40LL) = 1;
    }
  }
  v4 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v5 = *((_QWORD *)v4 + 1) - 1LL;
  v6 = *(_QWORD *)v4 == 0LL;
  *((_QWORD *)v4 + 1) = v5;
  if ( v6 && !v5 && v4 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v4);
  *((_BYTE *)this + 172) = 1;
}
