/*
 * XREFs of ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007E4E0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1400A5900 (NdisGetRssProcessorInformation.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(char *NdisHandle, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  $39055E9989626CB6030C168DDA1C4009 *v5; // rdi
  _IRP::<unnamed_type_AssociatedIrp> v8; // rbx
  unsigned int v9; // ebp
  unsigned int Length; // r12d
  unsigned int v11; // r15d
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // r8
  __int64 i; // rdx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  _OWORD **v19; // r8
  char *v20; // r14
  __int64 v21; // rdx
  bool v22; // cl
  _OWORD *v23; // rax
  unsigned int v24; // edi
  NDIS_STATUS RssProcessorInformation; // r14d
  struct _NDIS_RSS_PROCESSOR_INFO *v26; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v27; // rdi
  __int128 v28; // xmm0
  unsigned int v29; // esi
  __int128 v30; // xmm1
  UCHAR *v31; // rdx
  __int128 v32; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR Size; // [rsp+78h] [rbp+10h] BYREF

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0LL;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return 3221225506LL;
  v8.MasterIrp = (_IRP *)a2->AssociatedIrp;
  v9 = 1320;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x528 )
    return 3221225485LL;
  *a3 = 0;
  memset(&v8.MasterIrp->AllocationProcessorNumber, 0, 0x524uLL);
  *(_DWORD *)&v8.MasterIrp->Type = 86508160;
  v11 = 1320;
  BYTE4(v8.MasterIrp->MdlAddress) = NdisHandle[32];
  BYTE5(v8.MasterIrp->MdlAddress) = NdisHandle[33];
  HIWORD(v8.MasterIrp->MdlAddress) = *(_WORD *)(*((_QWORD *)NdisHandle + 470) + 482LL);
  LOWORD(v8.MasterIrp->Flags) = *(_WORD *)(*((_QWORD *)NdisHandle + 470) + 480LL);
  v12 = *((_QWORD *)NdisHandle + 98);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 192) )
    {
      v11 = 8 * *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL) + 1320;
      if ( Length >= v11 )
      {
        v5 = &v8.MasterIrp[6].72;
        *(_DWORD *)&v8.MasterIrp->Cancel = 1320;
      }
    }
  }
  LODWORD(v8.MasterIrp->MdlAddress) = v11;
  if ( v5 )
    v9 = v11;
  if ( v12 )
  {
    v13 = *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber;
    v8.MasterIrp->ThreadListEntry = *(_LIST_ENTRY *)(NdisHandle + 3624);
    v8.MasterIrp->IoStatus.Pointer = (void *)*((_QWORD *)NdisHandle + 455);
    v8.MasterIrp->IoStatus.Information = *((_QWORD *)NdisHandle + 456);
    *(_DWORD *)&v8.MasterIrp->RequestorMode = *((_DWORD *)NdisHandle + 914);
    if ( *(_BYTE *)(v12 + 192) )
    {
      *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 4;
      if ( *(_BYTE *)(v12 + 193) )
      {
        HIDWORD(v8.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL);
        *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 0xC;
        if ( v5 )
        {
          v14 = *(_QWORD *)(v12 + 120);
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v14 + 4); v14 = *(_QWORD *)(v12 + 120) )
          {
            v5[i] = *($39055E9989626CB6030C168DDA1C4009 *)(v14 + 48 * i + 16);
            i = (unsigned int)(i + 1);
          }
        }
        if ( NdisHandle[3648] == 17 )
        {
          v16 = *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber | 0x10;
          *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v16;
          v8.MasterIrp->AssociatedIrp.IrpCount = (*((_WORD *)NdisHandle + 1825) & 0x7FF) + 1;
          if ( _bittest16((const signed __int16 *)NdisHandle + 1825, 0xFu) )
            *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v16 | 0x20;
        }
      }
      else
      {
        *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 6;
      }
    }
    else
    {
      *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 2;
    }
  }
  else
  {
    v17 = *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber;
    if ( *((_QWORD *)NdisHandle + 14) )
      v18 = v17 | 2;
    else
      v18 = v17 | 1;
    *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v18;
  }
  v8.MasterIrp->Overlay.AllocationSize.LowPart = 120;
  v19 = (_OWORD **)(NdisHandle + 552);
  v8.MasterIrp->Overlay.AllocationSize.HighPart = 52;
  v20 = NdisHandle + 552;
  v8.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = *(_LIST_ENTRY *)(NdisHandle + 3336);
  *((_OWORD *)&v8.MasterIrp->Tail.CompletionKey + 1) = *(_OWORD *)(NdisHandle + 3352);
  *((_OWORD *)&v8.MasterIrp->Tail.CompletionKey + 2) = *(_OWORD *)(NdisHandle + 3368);
  *((_DWORD *)&v8.MasterIrp->Tail.CompletionKey + 12) = *((_DWORD *)NdisHandle + 846);
  HIDWORD(v8.MasterIrp->IoRingContext) = *((_DWORD *)NdisHandle + 844);
  LODWORD(v8.MasterIrp->UserEvent) = *((_DWORD *)NdisHandle + 845);
  HIDWORD(v8.MasterIrp->UserEvent) = *((_DWORD *)NdisHandle + 846);
  HIDWORD(v8.MasterIrp[1].AssociatedIrp.SystemBuffer) = *((_DWORD *)NdisHandle + 918);
  LOBYTE(v8.MasterIrp[1].ThreadListEntry.Flink) = NdisHandle[1288];
  BYTE1(v8.MasterIrp[1].ThreadListEntry.Flink) = (*((_DWORD *)NdisHandle + 30) & 0x10) != 0;
  *((_DWORD *)&v8.MasterIrp->Overlay.AllocationSize + 2) = 172;
  *((_DWORD *)&v8.MasterIrp->Overlay.AllocationSize + 3) = 20;
  *(_OWORD *)((char *)&v8.MasterIrp->Tail.CompletionKey + 52) = *(_OWORD *)(NdisHandle + 2692);
  *((_DWORD *)&v8.MasterIrp->Tail.CompletionKey + 17) = *((_DWORD *)NdisHandle + 677);
  v21 = *((_QWORD *)NdisHandle + 69);
  v22 = v21 != 0;
  if ( (*((_DWORD *)NdisHandle + 674) & 0x40000000) != 0 && v21 )
  {
    v22 = (*(_BYTE *)(v21 + 4) & 0x10) == 0 && *(_BYTE *)(v21 + 8);
    v20 = NdisHandle + 552;
  }
  if ( v22 )
  {
    LODWORD(v8.MasterIrp->CancelRoutine) = 192;
    HIDWORD(v8.MasterIrp->CancelRoutine) = 44;
    v23 = *v19;
    *(_OWORD *)(&v8.MasterIrp->Tail.CompletionKey + 9) = **v19;
    *(_OWORD *)&v8.MasterIrp[1].Type = v23[1];
    *(_QWORD *)&v8.MasterIrp[1].Flags = *((_QWORD *)v23 + 4);
    v8.MasterIrp[1].AssociatedIrp.IrpCount = *((_DWORD *)v23 + 10);
    v11 += *((unsigned __int16 *)*v19 + 10) + *((unsigned __int16 *)*v19 + 6);
    LODWORD(v8.MasterIrp->MdlAddress) = v11;
    if ( Length < v11 )
    {
      *(_DWORD *)&v8.MasterIrp[1].Type = 0;
      LODWORD(v8.MasterIrp[1].MdlAddress) = 0;
    }
    else
    {
      LODWORD(v8.MasterIrp[1].MdlAddress) = v9 - 192;
      memmove((char *)v8.MasterIrp + v9, (char *)*v19 + *((unsigned int *)*v19 + 6), *((unsigned __int16 *)*v19 + 10));
      v24 = v9 + *(unsigned __int16 *)(*(_QWORD *)v20 + 20LL);
      *(_DWORD *)&v8.MasterIrp[1].Type = v24 - 192;
      memmove(
        (char *)v8.MasterIrp + v24,
        (const void *)(*(_QWORD *)v20 + *(unsigned int *)(*(_QWORD *)v20 + 16LL)),
        *(unsigned __int16 *)(*(_QWORD *)v20 + 12LL));
      v9 = v24 + *(unsigned __int16 *)(*(_QWORD *)v20 + 12LL);
    }
  }
  else
  {
    *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber |= 0x40u;
  }
  Size = 0LL;
  v32 = 0LL;
  LOBYTE(v32) = 1;
  DWORD2(v32) = 0;
  RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, 0LL, &Size);
  v26 = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePool3(66LL, Size, 538985550LL, &v32, 1);
  v27 = v26;
  if ( v26 )
  {
    RssProcessorInformation = NdisGetRssProcessorInformation(NdisHandle, v26, &Size);
    if ( RssProcessorInformation >= 0 )
    {
      v28 = *(_OWORD *)&v27->Header.Type;
      v29 = v27->RssProcessorCount * v27->RssProcessorEntrySize;
      v30 = *(_OWORD *)&v27->PreferredNumaNode;
      LODWORD(v8.MasterIrp->UserBuffer) = 248;
      *(_OWORD *)&v8.MasterIrp[1].ThreadListEntry.Blink = v28;
      HIDWORD(v8.MasterIrp->UserBuffer) = 40;
      *(_QWORD *)&v28 = *(_QWORD *)&v27[1].Header.Type;
      *(_OWORD *)&v8.MasterIrp[1].IoStatus.Information = v30;
      v8.MasterIrp[1].UserIosb = (_IO_STATUS_BLOCK *)v28;
      LODWORD(v8.MasterIrp->MdlAddress) = v29 + v11;
      if ( Length < v29 + v11 )
      {
        HIDWORD(v8.MasterIrp[1].IoStatus.Information) = 0;
      }
      else
      {
        v31 = &v27->Header.Type + v27->RssProcessorArrayOffset;
        HIDWORD(v8.MasterIrp[1].IoStatus.Information) = v9 - 248;
        memmove((char *)v8.MasterIrp + v9, v31, v29);
        v9 += v29;
      }
    }
    ExFreePoolWithTag(v27, 0x2020444Eu);
  }
  a2->IoStatus.Information = v9;
  return (unsigned int)RssProcessorInformation;
}
