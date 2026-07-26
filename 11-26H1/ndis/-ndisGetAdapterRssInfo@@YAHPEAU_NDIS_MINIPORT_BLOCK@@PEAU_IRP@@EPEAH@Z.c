/*
 * XREFs of ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x14000EC30
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x14000CEA0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C5A0 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisGetRssProcessorInformation @ 0x1400A5900 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisGetAdapterRssInfo(char *NdisHandle, struct _IRP *a2, char a3, int *a4)
{
  unsigned int v7; // r15d
  unsigned int Length; // r13d
  unsigned int v9; // ebp
  _IRP::<unnamed_type_AssociatedIrp> v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  NDIS_STATUS RssProcessorInformation; // r12d
  struct _NDIS_RSS_PROCESSOR_INFO *v15; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v16; // rbx
  __int128 v17; // xmm0
  unsigned int v18; // edi
  _LIST_ENTRY v19; // xmm1
  UCHAR *v20; // rdx
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Size; // [rsp+78h] [rbp+10h] BYREF

  *a4 = -1073741823;
  if ( !a3 )
    return 3221225506LL;
  v7 = 144;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x90 )
    return 3221225485LL;
  v9 = 144;
  v10.MasterIrp = (_IRP *)a2->AssociatedIrp;
  *a4 = 0;
  *(_OWORD *)&v10.MasterIrp->AllocationProcessorNumber = 0LL;
  *(_OWORD *)&v10.MasterIrp->Reserved2 = 0LL;
  *(_LIST_ENTRY *)((char *)&v10.MasterIrp->ThreadListEntry + 4) = 0LL;
  *(_IO_STATUS_BLOCK *)((char *)&v10.MasterIrp->IoStatus + 4) = 0LL;
  *(_OWORD *)&v10.MasterIrp->Cancel = 0LL;
  *(_OWORD *)((char *)&v10.MasterIrp->UserEvent + 4) = 0LL;
  *(_IRP::<unnamed_type_Overlay> *)((char *)&v10.MasterIrp->Overlay + 12) = 0LL;
  *(_OWORD *)((char *)&v10.MasterIrp->UserBuffer + 4) = 0LL;
  *(void **)((char *)&v10.MasterIrp->Tail.Overlay.DriverContext[1] + 4) = 0LL;
  *((_DWORD *)&v10.MasterIrp->Tail.CompletionKey + 5) = 0;
  *(_DWORD *)&v10.MasterIrp->Type = 9437568;
  BYTE4(v10.MasterIrp->MdlAddress) = NdisHandle[32];
  BYTE5(v10.MasterIrp->MdlAddress) = NdisHandle[33];
  LODWORD(v10.MasterIrp->MdlAddress) = 144;
  v10.MasterIrp->Flags = 40;
  v10.MasterIrp->Reserved2 = 20;
  *(_OWORD *)&v10.MasterIrp->ThreadListEntry.Blink = *(_OWORD *)(NdisHandle + 2692);
  LODWORD(v10.MasterIrp->IoStatus.Information) = *((_DWORD *)NdisHandle + 677);
  if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisHandle) )
  {
    v10.MasterIrp->AssociatedIrp.IrpCount = 60;
    HIDWORD(v10.MasterIrp->AssociatedIrp.SystemBuffer) = 44;
    v12 = *(_QWORD *)(v11 + 552);
    *(_OWORD *)((char *)&v10.MasterIrp->IoStatus.Information + 4) = *(_OWORD *)v12;
    *(_OWORD *)((char *)&v10.MasterIrp->IoRingContext + 4) = *(_OWORD *)(v12 + 16);
    *(LONGLONG *)((char *)&v10.MasterIrp->Overlay.AllocationSize.QuadPart + 4) = *(_QWORD *)(v12 + 32);
    *((_DWORD *)&v10.MasterIrp->Overlay.AllocationSize + 3) = *(_DWORD *)(v12 + 40);
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 552) + 20LL)
       + *(unsigned __int16 *)(*(_QWORD *)(v11 + 552) + 12LL)
       + 144;
    LODWORD(v10.MasterIrp->MdlAddress) = v7;
    if ( Length < v7 )
    {
      HIDWORD(v10.MasterIrp->IoRingContext) = 0;
      HIDWORD(v10.MasterIrp->UserEvent) = 0;
    }
    else
    {
      HIDWORD(v10.MasterIrp->UserEvent) = 84;
      memmove(
        &v10.MasterIrp->Tail.CompletionKey + 3,
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 24LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL));
      v13 = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 144;
      HIDWORD(v10.MasterIrp->IoRingContext) = *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 20LL) + 84;
      memmove(
        (char *)v10.MasterIrp + v13,
        (const void *)(*((_QWORD *)NdisHandle + 69) + *(unsigned int *)(*((_QWORD *)NdisHandle + 69) + 16LL)),
        *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL));
      v9 = v13 + *(unsigned __int16 *)(*((_QWORD *)NdisHandle + 69) + 12LL);
    }
  }
  else
  {
    *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber |= 0x40u;
  }
  Size = 0LL;
  v21 = 0LL;
  LOBYTE(v21) = 1;
  DWORD2(v21) = 0;
  RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, 0LL, &Size);
  v15 = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePool3(66LL, Size, 538985550LL, &v21, 1);
  v16 = v15;
  if ( v15 )
  {
    RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, v15, &Size);
    if ( RssProcessorInformation >= 0 )
    {
      v17 = *(_OWORD *)&v16->Header.Type;
      v18 = v16->RssProcessorCount * v16->RssProcessorEntrySize;
      v19 = *(_LIST_ENTRY *)&v16->PreferredNumaNode;
      LODWORD(v10.MasterIrp->ThreadListEntry.Flink) = 104;
      *(_OWORD *)&v10.MasterIrp->CancelRoutine = v17;
      HIDWORD(v10.MasterIrp->ThreadListEntry.Flink) = 40;
      *(_QWORD *)&v17 = *(_QWORD *)&v16[1].Header.Type;
      v10.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = v19;
      v10.MasterIrp->Tail.Overlay.DriverContext[2] = (void *)v17;
      LODWORD(v10.MasterIrp->MdlAddress) = v18 + v7;
      if ( Length < v18 + v7 )
      {
        v10.MasterIrp->Tail.Apc.SpareLong0 = 0;
      }
      else
      {
        v20 = &v16->Header.Type + v16->RssProcessorArrayOffset;
        v10.MasterIrp->Tail.Apc.SpareLong0 = v9 - 104;
        memmove((char *)v10.MasterIrp + v9, v20, v18);
        v9 += v18;
      }
    }
    ExFreePoolWithTag(v16, 0x2020444Eu);
  }
  a2->IoStatus.Information = v9;
  return (unsigned int)RssProcessorInformation;
}
