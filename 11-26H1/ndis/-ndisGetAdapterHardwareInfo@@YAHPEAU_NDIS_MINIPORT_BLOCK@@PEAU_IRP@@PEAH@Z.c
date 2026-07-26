/*
 * XREFs of ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007E2B0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisGetAdapterHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char *v5; // r14
  __int64 result; // rax
  _IRP::<unnamed_type_AssociatedIrp> v8; // rbx
  unsigned int Length; // edi
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  struct _NDIS_INTERRUPT_BLOCK *InterruptEx; // rsi
  int v13; // edx
  __int64 v14; // r8
  __int64 i; // rdi
  int v16; // ecx
  int v17; // eax
  int v18; // eax

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0LL;
  if ( !*((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
    return 3221225506LL;
  v8.MasterIrp = (_IRP *)a2->AssociatedIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = 668;
  if ( Length < 0x29C )
    return 3221225485LL;
  *a3 = 0;
  memset(&v8.MasterIrp->AllocationProcessorNumber, 0, 0x298uLL);
  *(_DWORD *)&v8.MasterIrp->Type = 43778432;
  v11 = 668;
  BYTE4(v8.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
  BYTE5(v8.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
  InterruptEx = a1->InterruptEx;
  if ( InterruptEx )
  {
    if ( *((_BYTE *)InterruptEx + 192) )
    {
      v11 = 16 * *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL) + 668;
      if ( Length >= v11 )
      {
        v5 = (char *)&v8.MasterIrp[3].ThreadListEntry.Blink + 4;
        HIDWORD(v8.MasterIrp->IoStatus.Information) = 668;
      }
    }
  }
  LODWORD(v8.MasterIrp->MdlAddress) = v11;
  if ( v5 )
    v10 = v11;
  if ( InterruptEx )
  {
    v13 = *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber;
    *(_OWORD *)&v8.MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)&a1->MsiCaps.Header.CapabilityID;
    v8.MasterIrp->ThreadListEntry.Blink = *(_LIST_ENTRY **)&a1->MsiCaps.Option64Bit.MaskBits;
    v8.MasterIrp->IoStatus.Pointer = *(void **)&a1->MsiXCaps.Header.CapabilityID;
    LODWORD(v8.MasterIrp->IoStatus.Information) = a1->MsiXCaps.PBATable.TableOffset;
    if ( *((_BYTE *)InterruptEx + 192) )
    {
      *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 4;
      if ( *((_BYTE *)InterruptEx + 193) )
      {
        v8.MasterIrp->Reserved2 = *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL);
        *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v13 | 0xC;
        if ( v5 )
        {
          v14 = *((_QWORD *)InterruptEx + 15);
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v14 + 4); i = (unsigned int)(i + 1) )
          {
            IoGetAffinityInterrupt(*(PKINTERRUPT *)(v14 + 48 * i + 24), (PGROUP_AFFINITY)&v5[16 * (unsigned int)i]);
            v14 = *((_QWORD *)InterruptEx + 15);
          }
        }
        if ( a1->MsiXCaps.Header.CapabilityID == 17 )
        {
          v16 = *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber | 0x10;
          *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v16;
          v8.MasterIrp->Flags = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
          if ( _bittest16((const signed __int16 *)&a1->MsiXCaps.MessageControl, 0xFu) )
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
    if ( a1->Interrupt )
      v18 = v17 | 2;
    else
      v18 = v17 | 1;
    *(_DWORD *)&v8.MasterIrp->AllocationProcessorNumber = v18;
  }
  BYTE4(v8.MasterIrp->UserEvent) = (a1->Flags & 0x10) != 0;
  result = 0LL;
  a2->IoStatus.Information = v10;
  return result;
}
