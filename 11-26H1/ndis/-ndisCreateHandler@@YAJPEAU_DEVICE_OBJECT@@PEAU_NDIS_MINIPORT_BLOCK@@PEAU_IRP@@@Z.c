/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140059DF0
 * Callers:
 *     NdisWdfCreateIrpHandler @ 0x140059DA0 (NdisWdfCreateIrpHandler.c)
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140059DD0 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x14000AAD0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14000E580 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001C480 (-ndisMIsCompartmentAccessibleByClient@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  _QWORD *v3; // r13
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r12
  unsigned __int8 LowPart; // bp
  struct _DEVICE_OBJECT *v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v12; // esi
  KIRQL v13; // dl
  unsigned int NumUserOpens; // eax
  KIRQL CurrentIrql; // al
  KIRQL v16; // al
  unsigned __int64 *p_Lock; // rcx
  __int64 Pool2; // rax
  __int64 v19; // rbx
  _FILE_OBJECT *FileObject; // rax
  _OID_LIST *OidList; // rax
  bool v22; // zf
  void *BusInterface; // rcx
  KIRQL v24; // al
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *v26; // rcx
  KIRQL v27; // al
  KIRQL v28; // al
  KIRQL v29; // al
  char v30; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF
  char v33; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v33 = 0;
  LowPart = 0;
  LOBYTE(Timeout.LowPart) = 0;
  v9 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      a3);
    v9 = a1;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(v9, &a2->Header, a3);
  v30 = ndisCheckAccess(a3, a3->Tail.Overlay.CurrentStackLocation, a2->SecurityDescriptor);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( !ndisMIsCompartmentAccessibleByClient(a2) )
  {
    v12 = -1073741772;
LABEL_9:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_38;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( v30 )
  {
    if ( a2->NumAdminOpens < 0x1000000 )
    {
      ++a2->NumAdminOpens;
      v5 = 1;
      goto LABEL_16;
    }
LABEL_14:
    v12 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v13);
    goto LABEL_9;
  }
  NumUserOpens = a2->NumUserOpens;
  if ( NumUserOpens >= 0x1000000 )
    goto LABEL_14;
  LowPart = 1;
  a2->NumUserOpens = NumUserOpens + 1;
  LOBYTE(Timeout.LowPart) = 1;
LABEL_16:
  KeReleaseSpinLock(&a2->Ref.SpinLock, v13);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v12 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    LowPart = Timeout.LowPart;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
      KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
    Timeout.QuadPart = -500000LL;
    KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
    v4 = ndisReferenceMiniport(a2, 0x56u);
    if ( !v4 )
    {
      v12 = -1073676282;
      goto LABEL_9;
    }
    v16 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = 0LL;
    p_Lock = &a2->Lock;
    if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
    {
      v12 = -1073676282;
      KeReleaseSpinLock(p_Lock, v16);
      goto LABEL_9;
    }
    ++a2->UserModeOpenReferences;
    KeReleaseSpinLock(p_Lock, v16);
    Pool2 = ExAllocatePool2(64LL, 96LL, 1668236366LL);
    v19 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      *(_BYTE *)(Pool2 + 24) = v30;
      *(_QWORD *)(Pool2 + 8) = a2;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_BYTE *)(v19 + 25) = (a2->Flags & 0x80) != 0;
        KeInitializeSpinLock((PKSPIN_LOCK)(v19 + 32));
        ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v19 + 88));
        KeInitializeEvent((PRKEVENT)(v19 + 48), NotificationEvent, 0);
      }
      FileObject = CurrentStackLocation->FileObject;
      v12 = 0;
      FileObject->FsContext = (void *)v19;
      OidList = a2->OidList;
      if ( OidList )
      {
        *(_QWORD *)(v19 + 16) = OidList;
      }
      else if ( a3->RequestorMode == 1 )
      {
        v12 = -1073741823;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v3 = (_QWORD *)v19;
    v33 = 1;
    if ( v12 >= 0 )
    {
      v22 = (a2->PnPFlags & 0x2000) == 0;
      v33 = 1;
      if ( !v22 )
      {
        BusInterface = a2->BusInterface;
        if ( BusInterface )
          (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))BusInterface + 4))(
            *((_QWORD *)BusInterface + 1),
            v4,
            LowPart,
            v5);
        else
          v12 = -1073741823;
        v33 = 1;
      }
    }
  }
LABEL_38:
  if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_47;
  if ( v12 < 0 )
  {
LABEL_48:
    if ( v5 )
    {
      v27 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumAdminOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v27);
    }
    if ( LowPart )
    {
      v28 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumUserOpens;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v28);
    }
    if ( v33 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v29 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v29);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    }
    if ( v4 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    goto LABEL_58;
  }
  if ( (a2->Flags & 0x80u) != 0 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v22 = a2->PnPDeviceState == NdisPnPDeviceStarted;
    a2->MiniportThread = KeGetCurrentThread();
    if ( v22 )
    {
      Blink = a2->OpenFileHandles.Blink;
      v26 = (_LIST_ENTRY *)(v3 + 9);
      if ( Blink->Flink != &a2->OpenFileHandles )
        __fastfail(3u);
      v26->Flink = &a2->OpenFileHandles;
      v3[10] = Blink;
      Blink->Flink = v26;
      a2->OpenFileHandles.Blink = v26;
    }
    else
    {
      v12 = -1073676282;
    }
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v24);
LABEL_47:
    if ( v12 < 0 )
      goto LABEL_48;
  }
LABEL_58:
  a3->IoStatus.Status = v12;
  IofCompleteRequest(a3, 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a1,
      (char)a3,
      v12);
  return (unsigned int)v12;
}
