/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1400EA1E8
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x14004992C (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E95E8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 *     VidSchiAllocateDmaPacket @ 0x1400E9AF0 (VidSchiAllocateDmaPacket.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400E9BD0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1400EB210 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchiAllocateQueuePacket @ 0x140108F9C (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x140109138 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1401189B0 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x14011AC68 (VidSchiWaitForDrainFlipQueue.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x14011B6B8 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x14011D524 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x14012733C (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x140035D80 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x140035DA0 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchiPrepareToResetEngine @ 0x1400C0880 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v12; // r12d
  __int64 v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // r13
  int v17; // r14d
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  if ( (_DWORD)a3 != -1 && bTracingEnabled && (byte_14008A201 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, &EventBlockThread, a3, a3);
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v14 = *(unsigned int *)(a2 + 48);
    v15 = *(__int64 **)(a1 + 696);
    if ( (unsigned int)v14 < *(_DWORD *)(a1 + 768) )
      v15 += v14;
    v6 = *v15;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v20 = *(_QWORD *)(a2 + 24);
      v21 = *(int *)(a2 + 16);
      if ( v20 )
      {
        v22 = 56 * v21 + 328;
      }
      else
      {
        v20 = 56 * v21;
        if ( (v5 & 1) != 0 )
        {
          v7 = v6 + v20 + 240;
          goto LABEL_12;
        }
        v22 = a1 + 1688;
      }
      v7 = v20 + v22;
    }
LABEL_12:
    *(_QWORD *)(a2 + 72) = v7;
    *(_DWORD *)(a2 + 64) = 1;
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_13:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v10 = 10000000LL * g_TdrConfig[1],
          *(_QWORD *)(a2 + 56) = &v23,
          v11 = *(_DWORD *)(a2 + 20) == 1,
          v23 = -v10,
          v11)
      && VidSchiCheckTimeoutForced(a1) )
    {
      v9 = 1;
      v12 = 258;
    }
    else
    {
      v12 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v12 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
       || !v6
       || !*(_DWORD *)(v6 + 2148) && !*(_DWORD *)(v6 + 2152)) )
    {
      return v12;
    }
    v16 = 0LL;
    if ( v9 )
    {
      v17 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v17 = 3;
    }
    else
    {
      v17 = 2;
      v16 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 444LL) & 0x200) != 0 )
    {
      v18 = __rdtsc();
      v19 = __readmsr(0x400000F6u);
      v24 = 10 * (v18 - v19) / *((unsigned int *)KeGetCurrentPrcb() + 17);
      WdLogSingleEntry3(8LL, v19, v18, v24);
      WdLogGlobalForLineNumber = 4732;
      if ( v19 > v18 || v24 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v17 != 2 || !*(_BYTE *)(a1 + 52) )
    {
      if ( !v6 )
        goto LABEL_32;
      if ( v17 != 2 )
        goto LABEL_62;
      goto LABEL_60;
    }
    if ( !v6 )
      goto LABEL_32;
    if ( *(_DWORD *)(v6 + 2152) )
    {
LABEL_60:
      if ( *(_DWORD *)(v6 + 2152) )
        v17 = (*(_BYTE *)(v6 + 2145) != 0) + 10;
LABEL_62:
      *(_BYTE *)(v6 + 2145) = 0;
      *(_DWORD *)(v6 + 2148) = 0;
      *(_BYTE *)(v6 + 2146) = 0;
      *(_DWORD *)(v6 + 2152) = 0;
LABEL_32:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v17, v16) )
        return v12;
    }
    else
    {
      v24 = 0LL;
      if ( !VidSchiPrepareToResetEngine(v6, (__int64 *)&v24) || !VidSchiResetEngines(v6, v24) )
      {
        v17 = 9;
        *(_DWORD *)(v6 + 2148) = 0;
        *(_BYTE *)(v6 + 2146) = 0;
        goto LABEL_32;
      }
      *(_DWORD *)(v6 + 2148) = 0;
      *(_BYTE *)(v6 + 2146) = 0;
    }
  }
}
