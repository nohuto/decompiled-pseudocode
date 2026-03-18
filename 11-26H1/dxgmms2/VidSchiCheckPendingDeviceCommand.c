/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1400124DC
 * Callers:
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140005C68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14001D1F0 (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1400277A0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x140027C1C (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140041574 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x140004898 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x140030D00 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x140031278 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400319F0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140039868 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD **v4; // rbx
  _QWORD *v5; // r10
  __int64 j; // rcx
  __int64 v7; // r8
  _VIDSCH_SYNC_POINT *v8; // r14
  _VIDSCH_SYNC_POINT **v9; // r13
  _VIDSCH_SYNC_POINT *v10; // rdx
  _VIDSCH_SYNC_POINT *v11; // rdi
  __int64 v12; // r11
  unsigned int i; // ecx
  __int64 v14; // r9
  unsigned int v15; // r10d
  _QWORD *v16; // rbx
  __int64 *v17; // rbx
  _VIDSCH_SYNC_POINT *v18; // rcx
  _VIDSCH_SYNC_POINT **v19; // rax
  __int64 *v20; // rsi
  __int64 *v21; // r10
  __int64 **v22; // rax
  VIDMM_GLOBAL ***v23; // r10
  _QWORD *v24; // rsi
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  _QWORD *v29; // r9
  _QWORD *v30; // r9
  _QWORD *v31; // rdi
  _QWORD *v32; // r10
  struct VIDMM_ALLOC *v33; // r11
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 **v37; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v1 = a1[5];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 2048), &LockHandle);
  v4 = (_QWORD **)(v1 + 2080);
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v31 = (_QWORD *)*v5;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v3, v5 - 92) )
      {
        v34 = *v32;
        if ( *(_QWORD **)(*v32 + 8LL) != v32 || (v35 = (_QWORD *)v32[1], (_QWORD *)*v35 != v32) )
LABEL_36:
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        VidMmAddPendingTermination(v33);
      }
      v5 = v31;
    }
    while ( v31 != v4 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = (_VIDSCH_SYNC_POINT *)a1[234];
  while ( 1 )
  {
    v9 = (_VIDSCH_SYNC_POINT **)v8;
    if ( v8 == (_VIDSCH_SYNC_POINT *)(a1 + 234) )
      break;
    v10 = v8;
    v11 = v8;
    v8 = *(_VIDSCH_SYNC_POINT **)v8;
    v12 = *((_QWORD *)v10 + 2);
    if ( v12 > a1[233] )
    {
      for ( i = 0; i < *((_DWORD *)v10 + 16); ++i )
      {
        v7 = *((_QWORD *)v11 + 3);
        v14 = *(_QWORD *)(v7 + 16LL * i);
        if ( v14 && *(_QWORD *)(v14 + 168) < *(_QWORD *)(v7 + 16LL * i + 8) )
          return;
      }
      v15 = *((_DWORD *)v10 + 32);
      for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
      {
        v27 = *((_QWORD *)v11 + 9);
        v7 = *(_QWORD *)(v27 + 24 * j);
        if ( v7 && *(_DWORD *)(v7 + 148) )
        {
          v28 = 0;
          v7 += 64LL;
          v29 = (_QWORD *)(v27 + 8 * (3 * j + 1));
          while ( v28 < 2 )
          {
            if ( *(_QWORD *)v7 < *v29 )
              return;
            ++v28;
            ++v29;
            v7 += 24LL;
          }
        }
      }
      a1[233] = v12;
    }
    v16 = (_QWORD *)*((_QWORD *)v11 + 19);
    while ( v16 != (_QWORD *)((char *)v11 + 152) )
    {
      v24 = v16;
      v25 = v16 - 94;
      v16 = (_QWORD *)*v16;
      if ( (_QWORD *)v16[1] != v24 )
        goto LABEL_36;
      v26 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v26 != v24 )
        goto LABEL_36;
      *v26 = v16;
      v16[1] = v26;
      VidMmOfferAllocationCallback(v25);
      *v24 = 0LL;
      v24[1] = 0LL;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    v17 = (__int64 *)*((_QWORD *)v11 + 17);
    while ( v17 != (__int64 *)((char *)v11 + 136) )
    {
      v20 = v17;
      v21 = v17 - 92;
      v17 = (__int64 *)*v17;
      if ( (__int64 *)v17[1] != v20 )
        goto LABEL_36;
      v22 = (__int64 **)v20[1];
      if ( *v22 != v20 )
        goto LABEL_36;
      *v22 = v17;
      v17[1] = (__int64)v22;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(j, v21) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(*v23[1], (struct VIDMM_ALLOC *)v23);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[5] + 2048LL), &LockHandle);
        v36 = a1[5] + 2080LL;
        v37 = *(__int64 ***)(a1[5] + 2088LL);
        if ( *v37 != (__int64 *)v36 )
          goto LABEL_36;
        v20[1] = (__int64)v37;
        *v20 = v36;
        *v37 = v20;
        *(_QWORD *)(v36 + 8) = v20;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v18 = *v9;
    if ( *((_VIDSCH_SYNC_POINT **)*v9 + 1) != v11 )
      goto LABEL_36;
    v19 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v11 + 1);
    if ( *v19 != v11 )
      goto LABEL_36;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    if ( (byte_14008A201 & 1) != 0 )
    {
      v30 = (_QWORD *)a1[1];
      if ( !v30 )
        v30 = a1;
      McTemplateK0pp_EtwWriteTransfer(v18, &EventRetireSyncPoint, v7, v30, *((_QWORD *)v11 + 2));
    }
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v11);
  }
}
