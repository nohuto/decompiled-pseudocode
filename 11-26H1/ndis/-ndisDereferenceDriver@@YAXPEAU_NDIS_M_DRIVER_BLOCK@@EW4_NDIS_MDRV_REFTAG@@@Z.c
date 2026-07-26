/*
 * XREFs of ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370
 * Callers:
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400122F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140048740 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x140050310 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisFreeIoWorkItem @ 0x140054650 (NdisFreeIoWorkItem.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140058EC0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     NdisAllocateIoWorkItem @ 0x14005CBA0 (NdisAllocateIoWorkItem.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140076300 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400819F0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x140095180 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisEtwRundownMiniportDrivers @ 0x140098E64 (ndisEtwRundownMiniportDrivers.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA224 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1400BB184 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140139848 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014197C (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140174AA0 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1401790B0 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016770 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140016830 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisDereferenceDriver(struct _NDIS_M_DRIVER_BLOCK *a1, char a2, unsigned __int8 a3)
{
  _REFERENCE_EX *p_Ref; // rdi
  __int64 v4; // rbx
  KIRQL v7; // r12
  KIRQL v8; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v10; // bp
  __int64 v11; // r9
  unsigned __int8 j; // cl
  _BYTE *v13; // rdx
  char v14; // al
  ULONG_PTR v16; // rsi
  unsigned int v17; // edx
  int v18; // ecx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rbx
  ULONG_PTR v20; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v22; // rax
  struct _NDIS_REFCOUNT_BLOCK *v23; // rbx
  int v24; // edx
  struct _NDIS_M_DRIVER_BLOCK **k; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v26; // rcx
  PVOID v27; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  int v31; // edx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx

  p_Ref = &a1->Ref;
  v4 = a3;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = (ULONG_PTR)p_Ref->RefCountTracker;
  v10 = v8;
  if ( RefCountTracker != 2 && RefCountTracker != 3 )
  {
    if ( RefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
    if ( (_BYTE)v4 == 0xFF )
    {
      if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0xFFuLL);
      *(_BYTE *)RefCountTracker &= ~2u;
    }
    else
    {
      if ( (unsigned __int8)v4 >= *(_BYTE *)(RefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, (unsigned int)v4);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
        {
          v16 = RefCountTracker + (v4 << 6);
          v17 = *(_DWORD *)(v16 + 64);
          v18 = (unsigned __int16)v17 >> 1;
          if ( v17 >> 17 < 0x3FFE && v18 == (v17 >> 17) + 1 )
          {
            for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v16 + 8);
                  i;
                  i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)(v16 + 8) )
            {
              *(_QWORD *)(v16 + 8) = i->Next;
              ndisFreeRefCountStacksInBlock(i);
              ExFreePoolWithTag(i, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v16 + 8));
            *(_DWORD *)(v16 + 64) &= 0x10001u;
          }
          else
          {
            if ( v18 == 0 && (v17 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)p_Ref->RefCountTracker, v4);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v16 + 8), 0);
          }
        }
      }
      else
      {
        v11 = *(_QWORD *)(RefCountTracker + 8);
        if ( v11 )
        {
          for ( j = 0; j < *(_BYTE *)(RefCountTracker + 3); ++j )
          {
            v13 = (_BYTE *)(v11 + 2LL * j);
            if ( *v13 == (_BYTE)v4 )
            {
              v14 = v13[1];
              if ( v14 )
              {
                v13[1] = v14 - 1;
                goto LABEL_17;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), v4) )
          ndisReportRefcountImbalance(RefCountTracker, v4);
      }
    }
  }
LABEL_17:
  if ( p_Ref->ReferenceCount-- == 1 )
  {
    if ( !p_Ref->ZeroBased )
    {
      v20 = (ULONG_PTR)p_Ref->RefCountTracker;
      if ( v20 )
      {
        AnyActiveRefTag = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
        if ( AnyActiveRefTag != -2 )
          ndisBugCheckEx(0x1EuLL, 4uLL, v20, AnyActiveRefTag);
        v22 = ndisRefCountBlockFromRefCountHandle(v20);
        v23 = v22;
        if ( v22 )
        {
          ndisFreeRefCountAuxiliaryMemory(v22);
          ExFreePoolWithTag(v23, 0);
        }
      }
      p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v24,
        20,
        23,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a1);
    }
    if ( !a2 )
      v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    for ( k = &ndisMiniDriverList; ; k = &v26->NextDriver )
    {
      v26 = *k;
      if ( !*k )
        break;
      if ( v26 == a1 )
      {
        v27 = ndisDriverObject;
        *k = a1->NextDriver;
        ObfDereferenceObject(v27);
        break;
      }
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    Buffer = a1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      a1->ImageName.Buffer = 0LL;
    }
    NdisDriverInfo = a1->NdisDriverInfo;
    if ( NdisDriverInfo )
    {
      ExFreePoolWithTag(NdisDriverInfo, 0);
      a1->NdisDriverInfo = 0LL;
    }
    if ( (a1->Flags & 1) != 0 )
    {
      PendingDeviceList = a1->PendingDeviceList;
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
    KeSetEvent(&a1->MiniportsRemovedEvent, 0, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v31,
        20,
        24,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&p_Ref->SpinLock, v10);
  }
}
