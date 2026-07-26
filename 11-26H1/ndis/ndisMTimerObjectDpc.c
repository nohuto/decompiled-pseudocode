/*
 * XREFs of ndisMTimerObjectDpc @ 0x14001AFB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14001BD40 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1400756A0 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _NDIS_MINIPORT_TIMER **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 Clock; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r14
  KIRQL v8; // bp
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  char v11; // bp
  KIRQL v12; // al
  ULONG_PTR v13; // r9
  KIRQL v14; // di
  __int64 v15; // r11
  unsigned __int8 j; // cl
  _BYTE *v17; // r10
  char v18; // al
  KIRQL v20; // dl
  ULONG_PTR v21; // rsi
  unsigned int v22; // edx
  int v23; // ecx
  int v24; // edx
  KIRQL v25; // bl
  struct _NDIS_M_DRIVER_BLOCK **k; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v27; // rcx
  PVOID v28; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v33; // edx
  $95652AEF7AC0E86A2C59B298DC827175 *i; // rcx
  __int64 v35; // rax

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[3];
  Clock = 0LL;
  if ( v4->Header.Type != 17 )
    return;
  DriverHandle = v4->DriverHandle;
  v8 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  if ( DriverHandle->Ref.Closing )
  {
LABEL_35:
    v20 = v8;
    goto LABEL_28;
  }
  ReferenceCount = DriverHandle->Ref.ReferenceCount;
  if ( ReferenceCount >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_35;
  }
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)DriverHandle->Ref.RefCountTracker;
  DriverHandle->Ref.ReferenceCount = ReferenceCount + 1;
  NdisReferenceWithTag(RefCountTracker, 0xAu);
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v8);
  if ( HIBYTE(dword_14011EFA0) )
  {
    v11 = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v11 = 0;
  }
  if ( (DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
    for ( i = &v4->560; i->TimerQueue; i = ($95652AEF7AC0E86A2C59B298DC827175 *)i->TimerQueue )
    {
      if ( (_NDIS_MINIPORT_TIMER **)i->TimerQueue == DeferredContext )
      {
        if ( !*((_DWORD *)DeferredContext + 23) )
          i->TimerQueue = *DeferredContext;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v4->TimerQueueLock);
  }
  if ( (v4->PnPFlags & 0x1000000) == 0 )
    ((void (__fastcall *)(_QWORD, _NDIS_MINIPORT_TIMER *, _QWORD, _QWORD))DeferredContext[21])(
      0LL,
      DeferredContext[23],
      0LL,
      0LL);
  if ( v11 )
  {
    v35 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v35 - Clock);
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
  v13 = (ULONG_PTR)DriverHandle->Ref.RefCountTracker;
  v14 = v12;
  if ( v13 != 2 && v13 != 3 )
  {
    if ( v13 < 2 )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 3uLL, v13, 0LL);
    if ( *(_BYTE *)(v13 + 2) <= 0xAu )
      KeBugCheckEx(0x7Cu, 0x1EuLL, 2uLL, v13, 0xAuLL);
    if ( *(_BYTE *)(v13 + 1) )
    {
      if ( *(_BYTE *)(v13 + 1) == 1 )
      {
        v21 = v13 + 648;
        v22 = *(_DWORD *)(v13 + 704);
        v23 = (unsigned __int16)v22 >> 1;
        if ( v22 >> 17 < 0x3FFE && v23 == (v22 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 648));
          *(_DWORD *)(v21 + 56) &= 0x10001u;
        }
        else
        {
          if ( v23 == 0 && (v22 & 1) == 0 )
            KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v13, 0xAuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 648), 0);
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
      if ( v15 )
      {
        for ( j = 0; j < *(_BYTE *)(v13 + 3); ++j )
        {
          v17 = (_BYTE *)(v15 + 2LL * j);
          if ( *v17 == 10 )
          {
            v18 = v17[1];
            if ( v18 )
            {
              v17[1] = v18 - 1;
              goto LABEL_26;
            }
          }
        }
      }
      if ( !_bittestandreset((signed __int32 *)(v13 + 16), 0xAu) )
        KeBugCheckEx(0x7Cu, 0x1EuLL, 0LL, v13, 0xAuLL);
    }
  }
LABEL_26:
  if ( DriverHandle->Ref.ReferenceCount-- != 1 )
  {
    v20 = v14;
LABEL_28:
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v20);
    return;
  }
  if ( !DriverHandle->Ref.ZeroBased )
  {
    NdisFreeRefCount((ULONG_PTR)DriverHandle->Ref.RefCountTracker);
    DriverHandle->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
  }
  KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v14);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      23,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)DriverHandle);
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( k = &ndisMiniDriverList; ; k = &v27->NextDriver )
  {
    v27 = *k;
    if ( !*k )
      break;
    if ( v27 == DriverHandle )
    {
      v28 = ndisDriverObject;
      *k = DriverHandle->NextDriver;
      ObfDereferenceObject(v28);
      break;
    }
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
  Buffer = DriverHandle->ImageName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    DriverHandle->ImageName.Buffer = 0LL;
  }
  NdisDriverInfo = DriverHandle->NdisDriverInfo;
  if ( NdisDriverInfo )
  {
    ExFreePoolWithTag(NdisDriverInfo, 0);
    DriverHandle->NdisDriverInfo = 0LL;
  }
  if ( (DriverHandle->Flags & 1) != 0 )
  {
    PendingDeviceList = DriverHandle->PendingDeviceList;
    if ( PendingDeviceList )
    {
      do
      {
        Next = PendingDeviceList->Next;
        ExFreePoolWithTag(PendingDeviceList, 0);
        PendingDeviceList = Next;
      }
      while ( Next );
    }
  }
  KeSetEvent(&DriverHandle->MiniportsRemovedEvent, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v33,
      20,
      24,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)DriverHandle);
  }
}
