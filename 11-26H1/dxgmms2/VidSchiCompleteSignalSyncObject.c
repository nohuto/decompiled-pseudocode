/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x140010F00
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000F5A0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x140013210 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10 (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x14003C62C (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x140049328 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(
        HwQueueStagingList *this,
        struct _VIDSCH_SYNC_OBJECT *a2,
        char a3,
        unsigned __int64 *a4,
        char a5)
{
  __int64 v5; // r12
  int v7; // edx
  unsigned int *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rax
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  struct _VIDSCH_SYNC_OBJECT *v19; // r14
  _QWORD *v20; // r14
  unsigned __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned int v26; // ecx
  struct _VIDSCH_SYNC_OBJECT *v27; // rdx
  char *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 *v30; // rdi
  struct _VIDSCH_SYNC_OBJECT *v31; // r14
  char *v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r9
  char *v39; // r13
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  void *v42; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a2 + 1);
  v7 = *((_DWORD *)a2 + 12);
  if ( v7 == 6 )
  {
LABEL_2:
    if ( *((_BYTE *)a2 + 29) )
      goto LABEL_13;
    if ( v7 == 6 )
    {
      v12 = *(_QWORD *)(*((unsigned int *)a2 + 20) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 192LL));
    }
    else
    {
      v11 = (unsigned int *)*((_QWORD *)a2 + 9);
      if ( *((_BYTE *)a2 + 30) )
        v12 = *(_QWORD *)v11;
      else
        v12 = *v11;
    }
    WdLogSingleEntry3(4LL, a2, v12, *a4);
    v13 = *((_DWORD *)a2 + 12) == 6;
    v14 = *a4;
    WdLogGlobalForLineNumber = 27733;
    if ( v13 )
    {
      if ( a3 || v14 > *(_QWORD *)(*((unsigned int *)a2 + 20) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 192LL)) )
      {
        v36 = *((_QWORD *)a2 + 1);
        v37 = *((unsigned int *)a2 + 20);
        v38 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 192LL);
        if ( *(_BYTE *)(v36 + 7082) )
        {
          *(_QWORD *)(v38 + v37) = v14;
        }
        else
        {
          LODWORD(v44) = 0;
          VidSchiUpdateNativeFenceCurrentValue(v36, *((_QWORD *)a2 + 24), v14, v37 + v38, (__int64)&v44);
        }
      }
    }
    else if ( *((_BYTE *)a2 + 30) )
    {
      v15 = (unsigned __int64 *)*((_QWORD *)a2 + 9);
      if ( a3 || v14 > *v15 )
        *v15 = v14;
    }
    else
    {
      v16 = (_DWORD *)*((_QWORD *)a2 + 9);
      if ( a3 || *v16 - (int)v14 < 0 )
        *v16 = v14;
    }
    if ( *((_DWORD *)a2 + 12) != 6 )
    {
      VidSchiUnwaitMonitoredFences(this);
      goto LABEL_13;
    }
    v17 = -1LL;
    v18 = *(_QWORD *)(*((unsigned int *)a2 + 20) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 192LL));
    v19 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 26);
    if ( v19 == (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
    {
LABEL_20:
      v20 = (_QWORD *)*((_QWORD *)a2 + 32);
      while ( v20 != (_QWORD *)((char *)a2 + 256) )
      {
        v42 = (void *)v20[2];
        v20 = (_QWORD *)*v20;
        v44 = -1LL;
        if ( !UnblockCpuWaiter(v42, a2, &v44) && v44 < v17 )
          v17 = v44;
      }
      if ( v17 == -1LL )
      {
        v22 = (2 * *((_DWORD *)a2 + 13)) >> 1;
        if ( v22 != 3 && v22 != 4 && !*((_BYTE *)a2 + 28) )
        {
          v23 = *((_QWORD *)a2 + 1);
          v24 = *((unsigned int *)a2 + 36);
          v25 = *(_QWORD *)(*((_QWORD *)a2 + 16) + 192LL);
          if ( *(_BYTE *)(v23 + 7082) )
            *(_QWORD *)(v25 + v24) = -1LL;
          else
            VidSchiUpdateNativeFenceMonitoredValue(v23, *((_QWORD *)a2 + 24), -1LL, v24 + v25);
        }
      }
      else
      {
        v21 = *(_QWORD *)(*((unsigned int *)a2 + 36) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 192LL));
        if ( v17 > v21 )
        {
          WdLogSingleEntry3(4LL, v18, v21, v17);
          WdLogGlobalForLineNumber = 27460;
        }
      }
      goto LABEL_13;
    }
    while ( 1 )
    {
      v39 = (char *)v19 - 312;
      v40 = *((_QWORD *)v19 + 2);
      v19 = *(struct _VIDSCH_SYNC_OBJECT **)v19;
      if ( !*((_BYTE *)a2 + 29) )
      {
        if ( *((_DWORD *)a2 + 12) == 6 || *((_BYTE *)a2 + 30) )
        {
          if ( v18 < v40 )
          {
LABEL_74:
            if ( v40 < v17 )
              v17 = v40;
            goto LABEL_81;
          }
        }
        else if ( (int)v18 - (int)v40 < 0 )
        {
          goto LABEL_74;
        }
      }
      v41 = *((_QWORD *)v39 + 11);
      if ( v41 )
        v44 = *(_QWORD *)(v41 + 104);
      else
        v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 12) + 40LL) + 8LL);
      if ( (*((_DWORD *)v39 + 70) & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(this);
      VidSchiUnwaitWaitQueuePacket(this);
      VidSchiCheckPendingDeviceCommand(v44);
LABEL_81:
      if ( v19 == (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
        goto LABEL_20;
    }
  }
  switch ( v7 )
  {
    case 0:
      *((_QWORD *)a2 + 8) = 0LL;
      v27 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 26);
      if ( v27 != (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
      {
        v28 = (char *)v27 - 296;
        v29 = *((_QWORD *)v28 + 11);
        if ( !v29 )
          v29 = *((_QWORD *)v28 + 12);
        *((_QWORD *)a2 + 8) = v29;
        VidSchiUnwaitWaitQueuePacket(this);
      }
      break;
    case 1:
      v26 = *((_DWORD *)a2 + 16);
      if ( v26 < *((_DWORD *)a2 + 17) )
      {
        *((_DWORD *)a2 + 16) = v26 + 1;
        if ( *((struct _VIDSCH_SYNC_OBJECT **)a2 + 26) != (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
        {
          *((_DWORD *)a2 + 16) = v26;
          VidSchiUnwaitWaitQueuePacket(this);
        }
      }
      break;
    case 2:
      if ( *((_BYTE *)a2 + 28) )
      {
        v35 = *((_QWORD *)a2 + 43);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v35 + 8), &LockHandle);
        if ( *(_QWORD *)(v35 + 32) < *a4 )
          *(_QWORD *)(v35 + 32) = *a4;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v30 = (unsigned __int64 *)((char *)a2 + 80);
      }
      else
      {
        v30 = (unsigned __int64 *)((char *)a2 + 80);
        if ( *((_QWORD *)a2 + 10) < *a4 )
          *v30 = *a4;
      }
      if ( *((_DWORD *)a2 + 10) )
        VidSchiUnblockUnorderedWaiter(this);
      v31 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 26);
      while ( v31 != (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
      {
        v32 = (char *)v31 - 296;
        v31 = *(struct _VIDSCH_SYNC_OBJECT **)v31;
        if ( *((_BYTE *)a2 + 28) )
          v33 = *(_QWORD *)(*((_QWORD *)a2 + 43) + 32LL);
        else
          v33 = *v30;
        if ( *((_QWORD *)v32 + 41) <= v33 )
          VidSchiUnwaitWaitQueuePacket(this);
      }
      break;
    case 3:
      if ( *((_BYTE *)a2 + 32) )
        ((void (__fastcall *)(_QWORD))DxgCoreInterface[72])(*((_QWORD *)a2 + 9));
      else
        KeSetEvent(*((PRKEVENT *)a2 + 8), 0, 0);
      break;
    case 4:
    case 5:
      goto LABEL_2;
    default:
      break;
  }
LABEL_13:
  if ( *((_BYTE *)a2 + 28) )
  {
    if ( a5 )
    {
      v34 = *((_DWORD *)a2 + 12);
      if ( v34 == 2 || (unsigned int)(v34 - 4) <= 2 )
        VidSchiPropagateCrossAdapterSignal(v5, a2);
    }
  }
}
