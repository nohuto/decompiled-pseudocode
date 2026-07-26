/*
 * XREFs of ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F1A0
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x140095180 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140141944 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140016830 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137E00 (-ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138F3C (-ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x140169880 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C2B0 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(_NDIS_MINIPORT_BLOCK *this)
{
  void *BusInterface; // rcx
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rcx
  wchar_t *Buffer; // rcx
  unsigned __int16 *NumaDistances; // rcx
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  _UNICODE_STRING *pModifiedInstanceName; // rcx
  wchar_t *PnPInstanceId; // rcx
  void *ConfigurationHandle; // rcx
  void *SecurityDescriptor; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rcx
  _SINGLE_LIST_ENTRY *i; // rcx
  _NDIS_GUID *pNdisGuidMap; // rcx
  void *FakeMac; // rcx
  _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rcx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rdi
  NDIS_REFCOUNT_HANDLE__ *v18; // r10
  ULONG SetBits; // edx
  _DWORD *v20; // r8
  int v21; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rdi
  struct _NDIS_REFCOUNT_BLOCK *v24; // r10
  ULONG Tag; // edx
  _DWORD *v26; // r8
  int v27; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v28; // r9
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v30; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  if ( this->AoAc )
    ndisAoAcFree(this);
  ndisMDeRegisterPDCTaskClient(this);
  BusInterface = this->BusInterface;
  if ( BusInterface )
  {
    ExFreePoolWithTag(BusInterface, 0);
    this->BusInterface = 0LL;
  }
  ReenumerateSelfInterface = this->ReenumerateSelfInterface;
  if ( ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface->InterfaceDereference(ReenumerateSelfInterface->Context);
    ExFreePoolWithTag(this->ReenumerateSelfInterface, 0);
    this->ReenumerateSelfInterface = 0LL;
  }
  Buffer = this->FdoName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    this->FdoName.Buffer = 0LL;
    this->FdoName.Length = 0;
  }
  NumaDistances = this->NumaDistances;
  if ( NumaDistances )
  {
    ExFreePoolWithTag(NumaDistances, 0);
    this->NumaDistances = 0LL;
  }
  ndisPcwNotifyMiniportRemoval(this);
  pAdapterInstanceName = this->pAdapterInstanceName;
  if ( pAdapterInstanceName )
  {
    ExFreePoolWithTag(pAdapterInstanceName, 0);
    this->pAdapterInstanceName = 0LL;
  }
  pModifiedInstanceName = this->pModifiedInstanceName;
  if ( pModifiedInstanceName )
  {
    ExFreePoolWithTag(pModifiedInstanceName, 0);
    this->pModifiedInstanceName = 0LL;
  }
  PnPInstanceId = this->PnPInstanceId;
  if ( PnPInstanceId )
  {
    ExFreePoolWithTag(PnPInstanceId, 0);
    this->PnPInstanceId = 0LL;
  }
  ConfigurationHandle = this->ConfigurationHandle;
  if ( ConfigurationHandle )
  {
    ExFreePoolWithTag(ConfigurationHandle, 0);
    this->ConfigurationHandle = 0LL;
  }
  SecurityDescriptor = this->SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    this->SecurityDescriptor = 0LL;
  }
  BindPaths = this->BindPaths;
  if ( BindPaths )
  {
    ExFreePoolWithTag(BindPaths, 0);
    this->BindPaths = 0LL;
  }
  AllocatedResources = this->AllocatedResources;
  if ( AllocatedResources )
  {
    ExFreePoolWithTag(AllocatedResources, 0);
    this->AllocatedResources = 0LL;
  }
  for ( i = this->WorkQueue[6].Next; i; i = this->WorkQueue[6].Next )
  {
    this->WorkQueue[6] = (_SINGLE_LIST_ENTRY)i->Next;
    ExFreePoolWithTag(i, 0);
  }
  pNdisGuidMap = this->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    ExFreePoolWithTag(pNdisGuidMap, 0);
    this->pNdisGuidMap = 0LL;
  }
  FakeMac = this->FakeMac;
  if ( FakeMac )
  {
    ExFreePoolWithTag(FakeMac, 0);
    this->FakeMac = 0LL;
  }
  DefaultReceiveQueue = this->DefaultReceiveQueue;
  if ( DefaultReceiveQueue )
  {
    ExFreePoolWithTag(DefaultReceiveQueue, 0);
    this->DefaultReceiveQueue = 0LL;
  }
  RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)this->RefCountTracker;
  if ( RefCountTracker && (unsigned __int64)RefCountTracker[-1].RefWithStack + 62 > 1 )
  {
    if ( RefCountTracker == (struct _NDIS_REFCOUNT_BLOCK *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    v18 = this->RefCountTracker;
    if ( RefCountTracker->Type )
    {
      if ( RefCountTracker->Type == 1 )
      {
        SetBits = 0;
        if ( RefCountTracker->NumRefTags )
        {
          v20 = (_DWORD *)RefCountTracker->RefWithStack + 14;
          while ( ((*v20 >> 1) & 0x7FFF) == *v20 >> 17 )
          {
            ++SetBits;
            v20 += 16;
            if ( SetBits >= RefCountTracker->NumRefTags )
              goto LABEL_42;
          }
          goto LABEL_51;
        }
      }
    }
    else
    {
      BitMapHeader.SizeOfBitMap = RefCountTracker->NumRefTags;
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.Buffer = RefCountTracker->TaggedRefCounts.RefMask;
      SetBits = RtlFindSetBits(&BitMapHeader, 1u, 0);
      if ( SetBits != -1 )
        goto LABEL_51;
      v21 = 0;
      v18 = (NDIS_REFCOUNT_HANDLE__ *)RefCountTracker;
      if ( RefCountTracker->NumOverflowTaggedEntries )
      {
        Tags = RefCountTracker->TaggedRefCounts.Tags;
        while ( !Tags[v21].RefCount )
        {
          if ( ++v21 >= (unsigned int)RefCountTracker->NumOverflowTaggedEntries )
            goto LABEL_42;
        }
        SetBits = Tags[v21].Tag;
LABEL_51:
        if ( SetBits == -2 )
        {
LABEL_52:
          ndisFreeRefCountAuxiliaryMemory(RefCountTracker);
          ExFreePoolWithTag(RefCountTracker, 0);
          goto LABEL_53;
        }
LABEL_83:
        ndisBugCheckEx(0x1EuLL, 4uLL, (ULONG_PTR)RefCountTracker, SetBits);
      }
    }
LABEL_42:
    if ( (*(_BYTE *)v18 & 2) == 0 )
      goto LABEL_52;
    SetBits = 255;
    goto LABEL_83;
  }
LABEL_53:
  NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)this->NsiRefCountTracker;
  this->RefCountTracker = 0LL;
  if ( NsiRefCountTracker && (unsigned __int64)NsiRefCountTracker[-1].RefWithStack + 62 > 1 )
  {
    if ( NsiRefCountTracker == (struct _NDIS_REFCOUNT_BLOCK *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    v24 = NsiRefCountTracker;
    if ( NsiRefCountTracker->Type )
    {
      if ( NsiRefCountTracker->Type == 1 )
      {
        Tag = 0;
        if ( NsiRefCountTracker->NumRefTags )
        {
          v26 = (_DWORD *)NsiRefCountTracker->RefWithStack + 14;
          while ( ((*v26 >> 1) & 0x7FFF) == *v26 >> 17 )
          {
            ++Tag;
            v26 += 16;
            if ( Tag >= NsiRefCountTracker->NumRefTags )
              goto LABEL_62;
          }
          goto LABEL_71;
        }
      }
    }
    else
    {
      BitMapHeader.SizeOfBitMap = NsiRefCountTracker->NumRefTags;
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.Buffer = NsiRefCountTracker->TaggedRefCounts.RefMask;
      Tag = RtlFindSetBits(&BitMapHeader, 1u, 0);
      if ( Tag != -1 )
        goto LABEL_71;
      v27 = 0;
      v24 = NsiRefCountTracker;
      if ( NsiRefCountTracker->NumOverflowTaggedEntries )
      {
        v28 = NsiRefCountTracker->TaggedRefCounts.Tags;
        while ( !v28[v27].RefCount )
        {
          if ( ++v27 >= (unsigned int)NsiRefCountTracker->NumOverflowTaggedEntries )
            goto LABEL_62;
        }
        Tag = v28[v27].Tag;
LABEL_71:
        if ( Tag == -2 )
        {
LABEL_72:
          ndisFreeRefCountAuxiliaryMemory(NsiRefCountTracker);
          ExFreePoolWithTag(NsiRefCountTracker, 0);
          goto LABEL_73;
        }
LABEL_85:
        ndisBugCheckEx(0x1EuLL, 4uLL, (ULONG_PTR)NsiRefCountTracker, Tag);
      }
    }
LABEL_62:
    if ( (v24->Flags & 2) == 0 )
      goto LABEL_72;
    Tag = 255;
    goto LABEL_85;
  }
LABEL_73:
  PnpEventLog = this->PnpEventLog;
  this->NsiRefCountTracker = 0LL;
  ndisFreeEventLog(PnpEventLog);
  v30 = ndisVerifierNdisDispatch;
  this->PnpEventLog = 0LL;
  if ( v30 && this->VerifierContext )
  {
    (*((void (**)(void))v30 + 2))();
    this->VerifierContext = 0LL;
  }
  PDBlock = this->PDBlock;
  if ( PDBlock )
  {
    *(_QWORD *)PDBlock = 0LL;
    ExFreePoolWithTag(this->PDBlock, 0);
    this->PDBlock = 0LL;
  }
  _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(this);
  if ( (this->Flags & 0x100) != 0 )
    ExFreePoolWithTag(this, 0);
}
