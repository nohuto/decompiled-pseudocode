/*
 * XREFs of NvmeControllerRestart @ 0x1400FA9B4
 * Callers:
 *     NvmeAdapterRestart @ 0x1400DC7F4 (NvmeAdapterRestart.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerRestartRoutine @ 0x1400FAAC0 (NvmeControllerRestartRoutine.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     StorRestartDeviceIoQueue @ 0x140031C58 (StorRestartDeviceIoQueue.c)
 *     StorRestartDeviceCommandQueue @ 0x14003BC0C (StorRestartDeviceCommandQueue.c)
 */

void __fastcall NvmeControllerRestart(__int64 a1)
{
  __int64 v2; // rax
  char v3; // si
  ULONGLONG *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 ***v8; // rdi
  __int64 **i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1288);
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(ULONGLONG **)(v2 + 40);
  *v4 = KeQueryUnbiasedInterruptTime();
  _interlockedbittestandreset(*(volatile signed __int32 **)(a1 + 1024), 2u);
  StorRestartDeviceCommandQueue(*(_QWORD *)(a1 + 1024));
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 160);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 76);
        if ( (v7 & 2) != 0 )
        {
          if ( (v7 & 0x20) != 0 )
            return;
          v3 = 1;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 572) == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
    v8 = (__int64 ***)(a1 + 640);
    for ( i = *v8; i != (__int64 **)v8; i = (__int64 **)*i )
    {
      if ( !v3 || *((_BYTE *)i[13] + 1) != 1 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)i[29], 2u);
        StorRestartDeviceIoQueue((__int64)i[29]);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
