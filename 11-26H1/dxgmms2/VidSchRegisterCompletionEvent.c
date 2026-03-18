/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1400EA5D8
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1400EB210 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1401189B0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x14011B6B8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdx

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  v4 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 32) = v4 | 0x20;
  v5 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
                return;
              v11 = a1 + 1976;
            }
            else
            {
              v11 = *(_QWORD *)(a2 + 24) + 176LL;
            }
          }
          else
          {
            v11 = a1 + 1960;
          }
        }
        else
        {
          v11 = *(_QWORD *)(a2 + 24) + 128LL;
        }
      }
      else
      {
        v12 = *(_QWORD *)(a2 + 24);
        v11 = v12 + 144;
        if ( !v12 )
          v11 = a1 + 1944;
      }
    }
    else
    {
      v11 = a1 + 1928;
    }
  }
  else if ( (v4 & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 24) + 384LL;
  }
  else if ( (v4 & 4) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 24) + 400LL;
  }
  else if ( (v4 & 1) != 0 )
  {
    v13 = *(unsigned int *)(a2 + 48);
    v14 = *(_QWORD **)(a1 + 696);
    if ( (unsigned int)v13 < *(_DWORD *)(a1 + 768) )
      v14 += v13;
    v11 = *v14 + 408LL;
  }
  else
  {
    v11 = a1 + 1912;
  }
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 2032), v11, (_QWORD *)a2, 0LL);
}
