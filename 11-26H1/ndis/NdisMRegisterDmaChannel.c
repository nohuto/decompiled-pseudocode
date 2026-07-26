/*
 * XREFs of NdisMRegisterDmaChannel @ 0x140174470
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  int v9; // edx
  _INTERFACE_TYPE v10; // r14d
  __int64 Pool2; // rax
  __int64 v12; // rsi
  NDIS_STATUS v13; // ebx
  unsigned int *v14; // rcx
  char No; // al
  ULONG DmaPort; // eax
  _DEVICE_OBJECT *v17; // rcx
  ULONG v18; // r15d
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rbx
  struct _KEVENT *v23; // r12
  KIRQL v24; // r13
  int v25; // r15d
  __int64 v26; // rcx
  _QWORD *v27; // rax
  KIRQL v28; // r15
  char v30[8]; // [rsp+28h] [rbp-71h]
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  PNDIS_HANDLE v32; // [rsp+48h] [rbp-51h]
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+50h] [rbp-49h] BYREF

  v32 = MiniportDmaHandle;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  NumberOfMapRegisters = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      36,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle);
  }
  v10 = *((_DWORD *)MiniportAdapterHandle + 930);
  Pool2 = ExAllocatePool2(64LL, 176LL, 1650738254LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_21;
  }
  *(_DWORD *)Pool2 = 11534607;
  *(_QWORD *)(Pool2 + 8) = MiniportAdapterHandle;
  *(_QWORD *)(Pool2 + 32) = *((_QWORD *)MiniportAdapterHandle + 3);
  DeviceDescription.Master = (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 8) != 0;
  No = mem::ReadNoFence<unsigned long,void>(v14);
  DeviceDescription.DmaChannel = DmaChannel;
  DeviceDescription.ScatterGather = (No & 8) != 0;
  DeviceDescription.DemandMode = DmaDescription->DemandMode;
  DeviceDescription.AutoInitialize = DmaDescription->AutoInitialize;
  DeviceDescription.BusNumber = *((_DWORD *)MiniportAdapterHandle + 931);
  DeviceDescription.DmaWidth = DmaDescription->DmaWidth;
  DeviceDescription.DmaSpeed = DmaDescription->DmaSpeed;
  DmaPort = DmaDescription->DmaPort;
  DeviceDescription.MaximumLength = MaximumLength;
  v17 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 479);
  DeviceDescription.DmaPort = DmaPort;
  v18 = ((MaximumLength - 2) >> 12) + 2;
  DeviceDescription.Dma32BitAddresses = Dma32BitAddresses;
  DeviceDescription.InterfaceType = v10;
  DmaAdapter = IoGetDmaAdapter(v17, &DeviceDescription, &NumberOfMapRegisters);
  v20 = DmaAdapter;
  if ( DmaAdapter && NumberOfMapRegisters >= v18 )
  {
    v21 = ExAllocatePool2(64LL, 56LL, 1650738254LL);
    v22 = v21;
    if ( v21 )
    {
      v23 = (struct _KEVENT *)(v21 + 8);
      KeInitializeEvent((PRKEVENT)(v21 + 8), NotificationEvent, 0);
      *(_QWORD *)(v22 + 40) = MiniportAdapterHandle;
      *(_QWORD *)(v22 + 32) = v20;
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v24 = KfRaiseIrql(2u);
      v25 = v20->DmaOperations->AllocateAdapterChannel(
              v20,
              *((_DEVICE_OBJECT **)MiniportAdapterHandle + 478),
              v18,
              (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
              (void *)v22);
      if ( v24 != 2 )
        KeLowerIrql(v24);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      if ( v25 >= 0 )
      {
        ndisWaitForKernelObject(v23);
        KeClearEvent(v23);
        v27 = v32;
        *(_BYTE *)(v22 + 48) = 0;
        *(_QWORD *)(v12 + 40) = v20;
        *v27 = v22;
        v13 = 0;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 88));
        *((_QWORD *)MiniportAdapterHandle + 63) = v12;
        goto LABEL_21;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v30 = v25;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x25u,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          *(_QWORD *)v30);
      }
      ExFreePoolWithTag((PVOID)v22, 0);
      v13 = -1073741670;
      if ( (byte_14011D041 & 1) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v26,
          &AllocateAdapterChannelFailed,
          (const GUID *)((char *)MiniportAdapterHandle + 4008),
          v25,
          1,
          0);
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_18;
  }
  v13 = -1073741670;
  if ( DmaAdapter )
  {
LABEL_18:
    v28 = KfRaiseIrql(2u);
    v20->DmaOperations->PutDmaAdapter(v20);
    if ( v28 != 2 )
      KeLowerIrql(v28);
  }
  *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)MiniportAdapterHandle,
      v13);
  return v13;
}
