/*
 * XREFs of MiFillPhysicalPagesWithPtes @ 0x1406EBF70
 * Callers:
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPagesWithPtes(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // si
  unsigned __int64 *v3; // r14
  int v6; // r15d
  unsigned __int64 v7; // rax
  unsigned __int64 Phase0Mapping; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 17;
  v3 = 0LL;
  v12 = 17;
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v6 = 1;
    v7 = MiMapPageInHyperSpaceWorker(a1, &v12, 0x80000000);
    v2 = v12;
    Phase0Mapping = v7;
  }
  else
  {
    v6 = 0;
    Phase0Mapping = MxGetPhase0Mapping();
    v3 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v3 = MiMakeValidPte((unsigned __int64)v3, a1, -1610612732);
  }
  v9 = (_QWORD *)Phase0Mapping;
  v10 = 512LL;
  do
  {
    *v9++ = a2;
    --v10;
  }
  while ( v10 );
  if ( v6 )
    return MiUnmapPageInHyperSpaceWorker(Phase0Mapping, v2, 0x80000000);
  *v3 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return MiFlushSingleTbEntry(Phase0Mapping, 2LL);
}
