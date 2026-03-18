/*
 * XREFs of ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x14003CB00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchTimeoutSyncObject @ 0x14003CDFC (VidSchTimeoutSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x14003CED0 (VidSchiSignalRegisteredSyncObjects.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     McTemplateK0ppt_EtwWriteTransfer @ 0x14003D154 (McTemplateK0ppt_EtwWriteTransfer.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x140049328 (VidSchiUpdateNativeFenceCurrentValue.c)
 */

void __fastcall _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(
        _VIDSCH_SYNC_OBJECT *this,
        struct HwQueueStagingList *a2,
        char a3)
{
  HwQueueStagingList *v4; // rbp
  _VIDSCH_SYNC_OBJECT *v5; // rdi
  bool v6; // zf
  _BYTE *v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  v5 = this;
  if ( !*((_BYTE *)this + 29) )
  {
    v6 = *((_DWORD *)this + 12) == 6;
    *((_BYTE *)this + 29) = 1;
    if ( v6 )
    {
      v10 = *((_QWORD *)this + 1);
      v11 = *((_DWORD *)v5 + 20);
      a2 = (struct HwQueueStagingList *)*((_QWORD *)v5 + 8);
      if ( *(_BYTE *)(v10 + 7082) )
      {
        this = (_VIDSCH_SYNC_OBJECT *)*((unsigned int *)v5 + 20);
        *(_QWORD *)((char *)this + *((_QWORD *)a2 + 24)) = -1LL;
      }
      else
      {
        v13 = 0;
        VidSchiUpdateNativeFenceCurrentValue(v10, *((_QWORD *)v5 + 24), -1, *((_DWORD *)a2 + 48) + v11, (__int64)&v13);
      }
      v7 = (char *)v5 + 28;
    }
    else
    {
      v7 = (char *)this + 28;
      if ( !*((_BYTE *)this + 28) || a3 )
      {
        v8 = (volatile signed __int32 *)*((_QWORD *)this + 9);
        if ( *((_BYTE *)this + 30) )
          *(_QWORD *)v8 = -1LL;
        else
          _InterlockedAdd(v8, 0x3FFFFFFFu);
      }
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0ppt_EtwWriteTransfer(
        (_DWORD)this,
        (_DWORD)a2,
        a3,
        (_DWORD)v5,
        *((_QWORD *)v5 + 2),
        *((_BYTE *)v5 + 29));
    VidSchiUnwaitMonitoredFences(v4, *((_QWORD *)v5 + 1));
    if ( *v7 )
    {
      if ( a3 )
      {
        v9 = *((_QWORD *)v5 + 43);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 8), &LockHandle);
        *(_BYTE *)(v9 + 48) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        VidSchiPropagateCrossAdapterSignal(*((_QWORD *)v5 + 1), v5);
      }
    }
  }
}
