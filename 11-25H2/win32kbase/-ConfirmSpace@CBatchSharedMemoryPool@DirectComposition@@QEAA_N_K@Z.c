/*
 * XREFs of ?ConfirmSpace@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_K@Z @ 0x1400E4D44
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x140023FC4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBatchSharedMemoryPool::ConfirmSpace(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2 + *((_QWORD *)this + 4);
  v4 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 4) = v3;
  if ( !v4 || *((_QWORD *)this + 5) != v3 )
    return 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v6 )
      MmUnmapViewOfSection(v6, v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  return 1;
}
