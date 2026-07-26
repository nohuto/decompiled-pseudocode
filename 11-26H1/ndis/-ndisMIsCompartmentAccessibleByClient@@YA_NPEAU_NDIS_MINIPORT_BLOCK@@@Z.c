/*
 * XREFs of ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001C480
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140059DF0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

bool __fastcall ndisMIsCompartmentAccessibleByClient(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // si
  _NDIS_IF_BLOCK *IfBlock; // rbx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  bool v6; // si
  KIRQL v7; // al
  _NDIS_IF_BLOCK *v8; // rbx
  KIRQL v9; // bp
  struct _NDIS_REFCOUNT_BLOCK *v10; // rax
  ULONG_PTR v11; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 i; // al
  _NDIS_REFCOUNT_TAGGED_ENTRY *v15; // rdx
  unsigned __int8 RefCount; // cl
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  __int64 v21; // r8
  struct _NDIS_REFCOUNT_WITH_STACK *v22; // rdi
  _NDIS_REFCOUNT_STACK_ENTRY v23; // edx
  int v24; // ecx
  __int128 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-18h]

  v25 = 0LL;
  v26 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v25);
  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = v2;
  if ( !a1->IfBlockAvailable )
  {
    KeReleaseSpinLock(&SpinLock, v2);
    return 0;
  }
  IfBlock = a1->IfBlock;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker, 0x16u);
  ++IfBlock->MiniportLinkReference;
  KeReleaseSpinLock(&SpinLock, v3);
  if ( !IfBlock )
    return 0;
  Compartment = IfBlock->Compartment;
  if ( DWORD1(v25) == *((_DWORD *)Compartment + 4) )
  {
    v6 = 1;
  }
  else
  {
    v21 = *((_QWORD *)&v25 + 1) - *(_QWORD *)((char *)Compartment + 1684);
    if ( *((_QWORD *)&v25 + 1) == *(_QWORD *)((char *)Compartment + 1684) )
      v21 = v26 - *(_QWORD *)((char *)Compartment + 1692);
    if ( v21 )
      v6 = (*((_DWORD *)Compartment + 420) & 2) == 0 && DWORD1(v25) == 1;
    else
      v6 = 1;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v8 = a1->IfBlock;
  v9 = v7;
  v10 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)v8->MpRefCountTracker);
  v11 = (ULONG_PTR)v10;
  if ( v10 )
  {
    if ( v10->NumRefTags <= 0x16u )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v10, 0x16uLL);
    if ( v10->Type )
    {
      if ( v10->Type == 1 )
      {
        v22 = (struct _NDIS_REFCOUNT_WITH_STACK *)&v10[19].RefWithStack[0].Block.Dereferences[2];
        v23 = v10[20].RefWithStack[0].Block.References[4];
        v24 = *(_WORD *)&v23 >> 1;
        if ( *(unsigned int *)&v23 >> 17 < 0x3FFE && v24 == (*(unsigned int *)&v23 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain(&v22->Block);
          *((_DWORD *)v22 + 14) &= 0x10001u;
        }
        else
        {
          if ( v24 == 0 && (*(_BYTE *)&v23 & 1) == 0 )
LABEL_11:
            ndisReportRefcountImbalance(v11, 0x16u);
          ndisReferenceWithTagStackTrace(v22, 0);
        }
      }
    }
    else
    {
      Tags = v10->TaggedRefCounts.Tags;
      if ( Tags )
      {
        NumOverflowTaggedEntries = v10->NumOverflowTaggedEntries;
        for ( i = 0; ; ++i )
        {
          if ( i >= NumOverflowTaggedEntries )
            goto LABEL_10;
          v15 = &Tags[i];
          if ( v15->Tag == 22 )
          {
            RefCount = v15->RefCount;
            if ( RefCount )
              break;
          }
        }
        v15->RefCount = RefCount - 1;
      }
      else
      {
LABEL_10:
        if ( !_bittestandreset((signed __int32 *)(v11 + 16), 0x16u) )
          goto LABEL_11;
      }
    }
  }
  if ( v8->MiniportLinkReference-- == 1 )
  {
    Miniport = v8->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v9);
  return v6;
}
