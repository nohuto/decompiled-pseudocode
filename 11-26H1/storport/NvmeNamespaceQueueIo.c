/*
 * XREFs of NvmeNamespaceQueueIo @ 0x1400210B0
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400FFB24 (NvmeProcessIoForResetRecovery.c)
 *     NvmeNamespaceQueueRequest @ 0x14010C2DC (NvmeNamespaceQueueRequest.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     StorPushRequestToDeviceQueue @ 0x140057990 (StorPushRequestToDeviceQueue.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall NvmeNamespaceQueueIo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v6; // rbp
  unsigned __int8 *v7; // rax
  __int64 v8; // rdi
  signed __int32 v9; // eax
  __int64 v10; // r8
  signed __int32 *v11; // rax
  __int64 v12; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v15 = 0LL;
  *(_BYTE *)(v3 + 3) |= 1u;
  v6 = a3;
  if ( (int)IoGetIoAttributionHandle(a2, &v15) >= 0 )
  {
    v7 = *(unsigned __int8 **)(a2 + 184);
    v8 = v15;
    v16 = 0LL;
    LODWORD(v16) = 1;
    v17 = 0LL;
    DWORD1(v16) = *v7 | 0x300;
    *((_QWORD *)&v17 + 1) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&v17 + 1);
    IoRecordIoAttribution(v8, &v16);
  }
  StorPushRequestToDeviceQueue(*(_QWORD *)(a1 + 256), (unsigned int)v6, a2);
  _InterlockedOr(v14, 0);
  v9 = _InterlockedCompareExchange(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 256) + 8 * v6 + 24), 1, 0);
  if ( !v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 952LL));
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(signed __int32 **)(v10 + 1288);
    if ( !v11 || (v9 = *v11) == 0 )
    {
      v9 = _InterlockedCompareExchange(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6) + 128LL),
             1,
             0);
      if ( !v9 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v10 + 1104) + 8 * v6);
        LOBYTE(v9) = KeSetTimer(*(PKTIMER *)(v12 + 16), (LARGE_INTEGER)-600LL, *(PKDPC *)(v12 + 8));
      }
    }
  }
  return v9;
}
