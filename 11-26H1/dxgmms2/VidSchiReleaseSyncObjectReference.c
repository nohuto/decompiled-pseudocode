/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1400127F0
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140014EB8 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1401193BC (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     VidMmFreeFenceStorageSlot @ 0x140036E30 (VidMmFreeFenceStorageSlot.c)
 *     VmBusSendSignalGuestEvent @ 0x14003D3E0 (VmBusSendSignalGuestEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  KSPIN_LOCK *v5; // rcx
  __int64 v6; // rdx
  char **v7; // rax
  char *v8; // rsi
  void *v9; // rcx
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rcx
  char **v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 )
  {
    v3 = *((_DWORD *)P + 12);
    if ( v3 != 5 )
    {
      v4 = v3 - 3;
      if ( !v4 )
      {
        if ( P[32] )
        {
          v10 = P + 72;
          if ( P[33] )
          {
            LOBYTE(a2) = 1;
            VmBusSendSignalGuestEvent(*v10, a2);
          }
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[94])(*v10);
          *v10 = 0LL;
        }
        else
        {
          ObfDereferenceObject(*((PVOID *)P + 8));
          *((_QWORD *)P + 8) = 0LL;
        }
LABEL_5:
        if ( !P[28] )
        {
LABEL_6:
          ExFreePoolWithTag(P, 0);
          return;
        }
        v5 = (KSPIN_LOCK *)(*((_QWORD *)P + 1) + 3432LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
        v6 = *((_QWORD *)P + 41);
        if ( *(char **)(v6 + 8) == P + 328 )
        {
          v7 = (char **)*((_QWORD *)P + 42);
          if ( *v7 == P + 328 )
          {
            *v7 = (char *)v6;
            *(_QWORD *)(v6 + 8) = v7;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v8 = P + 280;
            if ( !*((_QWORD *)P + 35) )
              goto LABEL_15;
            v11 = (KSPIN_LOCK *)(*((_QWORD *)P + 43) + 8LL);
            memset(&v15, 0, sizeof(v15));
            KeAcquireInStackQueuedSpinLock(v11, &v15);
            v12 = *(_QWORD *)v8;
            if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
            {
              v13 = (char **)*((_QWORD *)P + 36);
              if ( *v13 == v8 )
              {
                *v13 = (char *)v12;
                *(_QWORD *)(v12 + 8) = v13;
                KeReleaseInStackQueuedSpinLock(&v15);
LABEL_15:
                v9 = (void *)*((_QWORD *)P + 43);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
                  ExFreePoolWithTag(v9, 0);
                goto LABEL_6;
              }
            }
          }
        }
        __fastfail(3u);
      }
      if ( v4 != 1 )
        goto LABEL_5;
    }
    if ( !*((_QWORD *)P + 2) )
      VidMmFreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 64));
    goto LABEL_5;
  }
}
