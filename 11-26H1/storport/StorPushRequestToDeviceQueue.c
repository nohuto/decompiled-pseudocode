/*
 * XREFs of StorPushRequestToDeviceQueue @ 0x140057990
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     StorAttemptInsertDeviceQueue @ 0x14003F570 (StorAttemptInsertDeviceQueue.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140043110 (NvmeControllerSubmitCommandToSQ.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     NvmeControllerProcessExtendedCommandForResetRecovery @ 0x1400F8C8C (NvmeControllerProcessExtendedCommandForResetRecovery.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPushRequestToDeviceQueue(__int64 a1, unsigned int a2, signed __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // bp
  signed __int32 v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r8
  ULONG_PTR v10; // rbx
  unsigned __int32 v11; // edi
  signed __int32 v12; // ecx
  struct _SLIST_ENTRY *v13; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a2;
  v6 = KfRaiseIrql(2u);
  if ( **(_DWORD **)(a1 + 8 * v4 + 24) > 1u )
  {
LABEL_9:
    v10 = *(_QWORD *)(a1 + 8 * v4 + 24);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 64));
    _InterlockedOr(v14, 0);
    v11 = *(_DWORD *)(v10 + 4);
    if ( ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v10 + 32) + 16LL * v11)) >= 0xF800u )
    {
      v12 = 0;
      if ( v11 + 1 < *(_DWORD *)(v10 + 12) )
        v12 = v11 + 1;
      if ( v12 == *(_DWORD *)(v10 + 8) )
        KeBugCheckEx(0x176u, 1uLL, v10, *(_QWORD *)(v10 + 24), 0LL);
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4), v12, v11);
    }
    if ( **(_DWORD **)(v10 + 24) == 1314278989 )
      v13 = (struct _SLIST_ENTRY *)((a3 + 135) & 0xFFFFFFFFFFFFFFF0uLL);
    else
      v13 = (struct _SLIST_ENTRY *)(a3 + 32);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(v10 + 32) + 16LL * v11), v13);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 64));
  }
  else
  {
    do
    {
      v7 = 0;
      v8 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v4 + 24) + 48LL);
      if ( (unsigned int)(v8 + 1) < *(_DWORD *)(a1 + 4) )
        v7 = v8 + 1;
      v9 = *(_QWORD *)(a1 + 8 * v4 + 24);
      if ( v7 == *(_DWORD *)(v9 + 52) )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v9, 2, 1);
        goto LABEL_9;
      }
    }
    while ( (_DWORD)v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 48), v7, v8) );
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(8 * v8 + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 24) + 56LL)),
              a3,
              0LL) )
      ;
  }
  KeLowerIrql(v6);
}
