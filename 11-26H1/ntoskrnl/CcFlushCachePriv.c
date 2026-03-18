/*
 * XREFs of CcFlushCachePriv @ 0x140398300
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcZeroEndOfLastPage @ 0x1402C6408 (CcZeroEndOfLastPage.c)
 *     CcFlushCacheToLsn @ 0x140396AF0 (CcFlushCacheToLsn.c)
 *     CcFlushCache @ 0x140396E80 (CcFlushCache.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x140464DC0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroData @ 0x14046D2D0 (CcZeroData.c)
 *     MiFlushDataSection @ 0x1404BD87C (MiFlushDataSection.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140398700 (ExpAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcFlushCacheAcquireRange @ 0x140399CFC (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x140399E5C (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 */

void __fastcall CcFlushCachePriv(const void *a1, __int64 a2, int a3, _QWORD *a4, char a5, __int128 *a6, __int64 a7)
{
  __int128 *v7; // rdi
  int v12; // edx
  void *PoolWithTagFromNode; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v7 = &v17;
  if ( a6 )
    v7 = a6;
  v17 = 0LL;
  if ( a7 )
  {
    v14 = a7;
  }
  else
  {
    *(_OWORD *)v16 = 0LL;
    v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    if ( (ExpPoolFlags & 8) != 0 )
    {
      v16[0] = 1LL;
      LODWORD(v16[1]) = 32;
      PoolWithTagFromNode = (void *)VfHandlePoolAlloc(
                                      NonPagedPool,
                                      0x42uLL,
                                      0x110uLL,
                                      0x42576343uLL,
                                      LowPoolPriority,
                                      (__int64)v16,
                                      1,
                                      retaddr);
    }
    else
    {
      PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(0, 66, 272, 1113023299, v12 | 0x80000000);
    }
    v14 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)v7 = -1073741670;
      return;
    }
    memset_0(PoolWithTagFromNode, 0, 0x110uLL);
  }
  *(_BYTE *)(v14 + 108) = a5;
  *(_QWORD *)(v14 + 96) = a2;
  *(_DWORD *)(v14 + 104) = a3;
  *(_QWORD *)(v14 + 112) = v7;
  *(_QWORD *)(v14 + 24) = a1;
  *(_QWORD *)(v14 + 72) = 0LL;
  if ( a4 )
  {
    *(_QWORD *)(v14 + 80) = *a4;
    *(_QWORD *)(v14 + 88) = v14 + 80;
  }
  if ( (unsigned __int8)CcFlushCachePreProcess(v14) )
  {
    if ( *(_BYTE *)(v14 + 132) )
      *(_QWORD *)(v14 + 96) = 0LL;
    v15 = *(_QWORD *)(v14 + 16);
    if ( v15 && (*(_DWORD *)(v15 + 152) & 0x4000000) == 0 )
    {
      do
      {
        if ( !(unsigned __int8)CcFlushCacheAcquireRange(v14) )
          break;
        CcFlushCacheOneRange(v14);
      }
      while ( (unsigned __int8)CcFlushCachePostProcessOneRange(v14) );
      if ( *(_QWORD *)(v14 + 232) )
      {
        if ( *(_DWORD *)(v14 + 248) )
          *(LARGE_INTEGER *)(v14 + 240) = KeQueryPerformanceCounter(0LL);
      }
    }
    CcFlushCachePostProcess(v14);
    if ( v14 != a7 )
      goto LABEL_19;
  }
  else
  {
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcFlushCachePriv: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      a1,
      *(_DWORD *)v7);
    if ( v14 != a7 )
LABEL_19:
      ExFreePoolWithTag((PVOID)v14, 0x42576343u);
  }
}
