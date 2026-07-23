/*
 * XREFs of MiBuildMappedClusterFillMdl @ 0x14042AA84
 * Callers:
 *     MiBuildMappedCluster @ 0x14042A81C (MiBuildMappedCluster.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiPteContentsOkToMappedWrite @ 0x14042ACFC (MiPteContentsOkToMappedWrite.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReleaseMappedPages @ 0x1404FB928 (MiReleaseMappedPages.c)
 */

unsigned __int64 __fastcall MiBuildMappedClusterFillMdl(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r15
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  unsigned __int16 v8; // r9
  unsigned __int64 *v9; // r12
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // rbp
  __int64 v12; // rdx
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int16 v18; // [rsp+60h] [rbp+8h]
  int v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+18h]

  result = *a1;
  v4 = a1[1];
  v5 = (unsigned __int64 *)(a1[2] + (a1[9] & 0xFFF));
  v6 = a1[9];
  v7 = 0LL;
  v8 = *(_WORD *)*a1;
  v18 = v8;
  v9 = (unsigned __int64 *)(v4 + 48);
  *((_DWORD *)a1 + 22) = 1;
  while ( v6 <= a1[10] )
  {
    if ( v6 == a1[6] )
    {
      result = a1[5];
LABEL_14:
      *v9 = result;
      v7 += 8LL;
      ++v9;
      *(_DWORD *)(v4 + 40) += 4096;
      goto LABEL_15;
    }
    if ( *((_DWORD *)a1 + 22) == 3 )
    {
      result = v7 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (__int64)(v7 & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
        break;
    }
    v10 = *v5;
    result = MiPteContentsOkToMappedWrite(*v5, v8);
    if ( !(_DWORD)result )
      break;
    v20 = (v10 >> 12) & ((unsigned __int64)qword_140E2D8C8 >> 12) & 0xFFFFFFFFFFLL;
    v11 = 48 * v20 - 0x220000000000LL;
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    if ( v10 == *v5 )
    {
      if ( !(unsigned int)MiPteContentsOkToMappedWrite(v10, v18) )
      {
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        break;
      }
      v12 = (a1[2] >> 9) & 0x7FFFFFFFF8LL;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      v13 = KiIrqlFlags == 0;
      *(_QWORD *)(v12 - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( !v13 )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
      __writecr8(2uLL);
      v14 = MiReferencePageForModifiedWrite(v11, 0);
      v15 = a1[4];
      *((_DWORD *)a1 + 22) = v14;
      v16 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000);
      a1[2] = v16;
      v5 = (unsigned __int64 *)(v16 + ((unsigned __int16)v5 & 0xFFF));
      result = *((unsigned int *)a1 + 22);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !(_DWORD)result )
        break;
      result = v20;
      v8 = v18;
      goto LABEL_14;
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v18;
    --v5;
    v6 -= 8LL;
LABEL_15:
    v6 += 8LL;
    ++v5;
  }
  v17 = a1[2];
  if ( v17 )
  {
    LOBYTE(a2) = *((_BYTE *)a1 + 24);
    result = MiUnmapPageInHyperSpaceWorker(v17, a2, 0x80000000LL);
    a1[2] = 0LL;
  }
  if ( v6 < a1[6] )
  {
    result = MiReleaseMappedPages(*a1, v4);
    *(_DWORD *)(v4 + 40) = 0;
  }
  return result;
}
