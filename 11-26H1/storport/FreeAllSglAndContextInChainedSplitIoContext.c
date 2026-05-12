/*
 * XREFs of FreeAllSglAndContextInChainedSplitIoContext @ 0x140119C60
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400FFB24 (NvmeProcessIoForResetRecovery.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall FreeAllSglAndContextInChainedSplitIoContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebp
  unsigned __int16 *v5; // r15
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int8 v11; // di
  KIRQL v12; // r13
  __int64 v13; // rdx

  v2 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 136), 0x20u) )
  {
    v4 = 0;
    v5 = (unsigned __int16 *)(a2 + 32);
    v6 = *(_WORD *)(a2 + 32);
    if ( v6 )
    {
      do
      {
        v7 = v6;
        if ( v2 )
        {
          v8 = *(_QWORD *)(v2 + 88);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 24);
            if ( v9 )
            {
              v10 = *(_QWORD *)(a1 + 128);
              v11 = *(_BYTE *)(v8 + 126) & 1;
              v12 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 1160) + 8LL) + 96LL))(
                *(_QWORD *)(v10 + 1160),
                v9,
                v11 ^ 1u);
              if ( v12 < 2u )
                KeLowerIrql(v12);
            }
            v13 = *(_QWORD *)(v2 + 88);
            *(_QWORD *)(v13 + 24) = 0LL;
            *(_QWORD *)(v13 + 88) = 0LL;
            *(_BYTE *)(v13 + 126) = 0;
            ExpInterlockedPushEntrySList(
              *(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * *(unsigned int *)(v13 + 120)),
              (PSLIST_ENTRY)v13);
            v7 = *v5;
          }
          v2 = *(_QWORD *)(v2 + 96);
        }
        v6 = v7;
        ++v4;
      }
      while ( v4 < v7 );
    }
  }
}
