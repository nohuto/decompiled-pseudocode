/*
 * XREFs of NvmeControllerIoQueuesInitialize @ 0x1400F71AC
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeAllocateDmaBuffer @ 0x140044FB4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerCompletionQueueInit @ 0x1400F19C8 (NvmeControllerCompletionQueueInit.c)
 *     NvmeControllerInitializeCQIoPolling @ 0x1400F6160 (NvmeControllerInitializeCQIoPolling.c)
 *     NvmeControllerInitializeCompletionQueueDPC @ 0x1400F63DC (NvmeControllerInitializeCompletionQueueDPC.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F6F30 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400FB3FC (NvmeControllerSubmissionQueueInit.c)
 *     CreateNVMePrpListBufferPool @ 0x1401192A8 (CreateNVMePrpListBufferPool.c)
 *     CreateNVMeSplitIoContextPool @ 0x14011979C (CreateNVMeSplitIoContextPool.c)
 *     StorInitOutstandingRequestBitmap @ 0x14011E3A0 (StorInitOutstandingRequestBitmap.c)
 *     NvmeControllerCreateNVMCommandZombieLists @ 0x14011FBF8 (NvmeControllerCreateNVMCommandZombieLists.c)
 */

__int64 __fastcall NvmeControllerIoQueuesInitialize(__int64 a1)
{
  unsigned int v2; // r13d
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 Pool; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int NVMePrpListBufferPool; // ebx
  __int64 v10; // rax
  unsigned int i; // esi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned int v15; // ebx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r15d
  unsigned int j; // esi
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+40h] [rbp-18h]
  unsigned int v23; // [rsp+48h] [rbp-10h]
  __int64 v24; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF
  void *v26; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+60h]

  if ( *(_WORD *)(a1 + 26) && *(_WORD *)(a1 + 22) )
  {
    v2 = *(_DWORD *)(a1 + 8) << 6;
    v3 = (unsigned __int64)*(unsigned __int16 *)(a1 + 26) << 7;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL);
    LODWORD(v24) = 16 * *(_DWORD *)(a1 + 8);
    v23 = v2;
    Pool = RaidAllocatePool(72LL, v3, 1380147538LL, v4);
    *(_QWORD *)(a1 + 864) = Pool;
    if ( Pool
      && (v10 = RaidAllocatePool(
                  72LL,
                  192LL * *(unsigned __int16 *)(a1 + 22),
                  1380147538LL,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
          (*(_QWORD *)(a1 + 728) = v10) != 0LL)
      && (v22 = RaidAllocatePool(
                  72LL,
                  16 * *(unsigned __int16 *)(a1 + 22) * (unsigned __int64)*(unsigned int *)(a1 + 8),
                  1380147538LL,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) != 0
      && (v27 = RaidAllocatePool(
                  72LL,
                  (*(unsigned __int16 *)(a1 + 22) * (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 8) - 1)) << 7,
                  1380147538LL,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) != 0 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 22); ++i )
      {
        v12 = *(_QWORD *)(a1 + 728);
        v25 = 0LL;
        v26 = 0LL;
        v13 = 192LL * i;
        v14 = v13 + v12;
        *(_QWORD *)(v14 + 88) = a1;
        *(_DWORD *)(v14 + 124) = *(_DWORD *)(a1 + 8);
        NVMePrpListBufferPool = NvmeAllocateDmaBuffer(a1, v2, v7, &v26, &v25, 1);
        if ( NVMePrpListBufferPool < 0 )
          goto LABEL_5;
        NvmeControllerSubmissionQueueInit(
          a1,
          v14,
          i + 1,
          (_DWORD)v26,
          v25,
          v22 + 16 * i * (unsigned __int64)*(unsigned int *)(a1 + 8),
          v27 + ((i * (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 8) - 1)) << 7));
        InitializeSListHead((PSLIST_HEADER)(v14 + 64));
        v15 = 0;
        if ( *(_DWORD *)(a1 + 8) != 1 )
        {
          do
          {
            v16 = (unsigned __int64)v15 << 7;
            *(_WORD *)(v16 + *(_QWORD *)(v14 + 32) + 54) = v15;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 64), (PSLIST_ENTRY)(v16 + *(_QWORD *)(v14 + 32)));
            ++v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 8) - 1 );
          v2 = v23;
        }
        StorInitOutstandingRequestBitmap(v13 + *(_QWORD *)(a1 + 728));
      }
      v17 = v24;
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 26) && j < *(unsigned __int16 *)(a1 + 22); ++j )
      {
        v24 = 0LL;
        v19 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)j << 7);
        v25 = 0LL;
        *(_QWORD *)(v19 + 48) = a1;
        NVMePrpListBufferPool = NvmeAllocateDmaBuffer(a1, v17, v7, (void **)&v25, &v24, 1);
        if ( NVMePrpListBufferPool < 0 )
          goto LABEL_5;
        NvmeControllerCompletionQueueInit(a1, v19, j + 1, v25, v24);
        NVMePrpListBufferPool = NvmeControllerInitializeCompletionQueueDPC(v21, v20);
        if ( NVMePrpListBufferPool < 0 )
          goto LABEL_5;
        NVMePrpListBufferPool = NvmeControllerInitializeCQIoPolling((_QWORD *)a1, v19);
        if ( NVMePrpListBufferPool < 0 )
          goto LABEL_5;
      }
      NVMePrpListBufferPool = CreateNVMePrpListBufferPool(a1);
      if ( NVMePrpListBufferPool >= 0 )
      {
        NVMePrpListBufferPool = CreateNVMeSplitIoContextPool(a1);
        if ( NVMePrpListBufferPool >= 0 )
        {
          NVMePrpListBufferPool = NvmeControllerCreateNVMCommandZombieLists(a1);
          if ( NVMePrpListBufferPool >= 0 )
            return 0;
        }
      }
    }
    else
    {
      NVMePrpListBufferPool = -1073741670;
    }
LABEL_5:
    NvmeControllerIoQueuesFreeResources(a1, v6, v7);
    return (unsigned int)NVMePrpListBufferPool;
  }
  return 3221225701LL;
}
