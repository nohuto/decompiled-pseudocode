/*
 * XREFs of NvmeControllerCreatePendingIoQueueContext @ 0x1400F2460
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     NvmeControllerDeletePendingIoQueueContext @ 0x1400F2980 (NvmeControllerDeletePendingIoQueueContext.c)
 */

__int64 __fastcall NvmeControllerCreatePendingIoQueueContext(_QWORD *DeferredContext, int a2)
{
  _DWORD *v2; // r13
  unsigned int v3; // r12d
  unsigned int v4; // edi
  __int64 Pool; // rax
  ULONG i; // r14d
  unsigned __int16 *v8; // rdx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _KTIMER *v12; // rcx
  __int64 v13; // rbx
  struct _KDPC *v14; // rcx
  __int64 v15; // rbx
  struct _KDPC *v16; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF

  v2 = g_CpuInfo;
  v3 = 8 * a2 + 264;
  v4 = 0;
  ProcNumber = 0;
  if ( DeferredContext[138] )
    NvmeControllerDeletePendingIoQueueContext(DeferredContext);
  Pool = RaidAllocatePool(72LL, (unsigned int)(8 * v2[2]), 1414095186LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[138] = Pool;
  if ( Pool )
  {
    for ( i = 0; i < v2[2]; ++i )
    {
      if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0 )
      {
        v8 = *(unsigned __int16 **)(56LL * i + *((_QWORD *)v2 + 4) + 48);
        if ( v8 )
          v9 = *v8;
        else
          v9 = 0x80000000;
        *(_QWORD *)(DeferredContext[138] + 8LL * i) = RaidAllocatePoolEx(
                                                        72LL,
                                                        v3,
                                                        1414095186LL,
                                                        *(_QWORD *)(DeferredContext[16] + 8LL),
                                                        v9);
        v10 = DeferredContext[138];
        if ( !*(_QWORD *)(v10 + 8LL * i) )
          goto LABEL_16;
        v11 = *(_QWORD *)(v10 + 8LL * i);
        *(_QWORD *)(v11 + 16) = RaidAllocatePoolEx(72LL, 64LL, 1414095186LL, *(_QWORD *)(DeferredContext[16] + 8LL), v9);
        v12 = *(struct _KTIMER **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 16LL);
        if ( !v12 )
          goto LABEL_16;
        KeInitializeTimer(v12);
        v13 = *(_QWORD *)(DeferredContext[138] + 8LL * i);
        *(_QWORD *)(v13 + 8) = RaidAllocatePoolEx(72LL, 64LL, 1414095186LL, *(_QWORD *)(DeferredContext[16] + 8LL), v9);
        v14 = *(struct _KDPC **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL);
        if ( !v14 )
          goto LABEL_16;
        KeInitializeDpc(v14, NvmePendingIoDpcRoutine, DeferredContext);
        KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL), MediumHighImportance);
        KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 8LL), &ProcNumber);
        InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 192LL));
        v15 = *(_QWORD *)(DeferredContext[138] + 8LL * i);
        *(_QWORD *)(v15 + 24) = RaidAllocatePoolEx(72LL, 64LL, 1414095186LL, *(_QWORD *)(DeferredContext[16] + 8LL), v9);
        v16 = *(struct _KDPC **)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL);
        if ( !v16 )
          goto LABEL_16;
        KeInitializeDpc(v16, NvmeIoCompletionRedirectDpcRoutine, DeferredContext);
        KeSetImportanceDpc(*(PRKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL), MediumHighImportance);
        KeSetTargetProcessorDpcEx(*(PKDPC *)(*(_QWORD *)(DeferredContext[138] + 8LL * i) + 24LL), &ProcNumber);
      }
    }
  }
  else
  {
LABEL_16:
    v4 = -1073741670;
    NvmeControllerDeletePendingIoQueueContext(DeferredContext);
  }
  return v4;
}
