/*
 * XREFs of VidSchiProcessPrimariesTerminationList @ 0x140030C50
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x140054C70 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400C458C (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x140030D00 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140031278 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiProcessPrimariesTerminationList(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rbx
  _QWORD *v4; // r10
  _QWORD *v5; // rdi
  _QWORD *v6; // r10
  __int64 v7; // rdx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2048), &LockHandle);
  v3 = (_QWORD **)(a1 + 2080);
  v4 = *v3;
  if ( *v3 != v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v2, v4 - 92) )
      {
        v7 = *v6;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        VidMmAddPendingTermination((struct VIDMM_ALLOC *)(v6 - 92));
      }
      v4 = v5;
    }
    while ( v5 != v3 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
