/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016E8D0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x140175850 (NdisOpenAdapter.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140049260 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140058130 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Dql @ 0x14005B960 (WPP_RECORDER_SF_Dql_ea_14005B960.c)
 *     WPP_RECORDER_SF_DqlD @ 0x14005C780 (WPP_RECORDER_SF_DqlD.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_qZZ @ 0x140062AC0 (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140066100 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x14007E9C0 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007EB20 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     Feature_CheckProtocolMutexOwner__private_IsEnabledPreCheck @ 0x14008E760 (Feature_CheckProtocolMutexOwner__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x140143088 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x14015BE50 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x140161680 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x140163390 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x140164380 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x140169740 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ndisFindRootDevice @ 0x140179510 (ndisFindRootDevice.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        struct _NDIS_PROTOCOL_BLOCK *P,
        void *a8,
        struct _UNICODE_STRING *a9,
        unsigned int a10,
        struct _STRING *a11,
        int *a12)
{
  enum _NDIS_MEDIUM *v12; // rsi
  struct _NDIS_MINIPORT_BLOCK *BindingAdapter; // rbx
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  struct _NDIS_PROTOCOL_BLOCK *v17; // rdi
  int v18; // r12d
  KIRQL v19; // cl
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  int v22; // r8d
  int v23; // r9d
  _UNICODE_STRING *BindDeviceName; // r12
  bool v25; // cl
  _UNICODE_STRING *RootDeviceName; // r13
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // rsi
  int v28; // edx
  char v29; // dl
  char v30; // r8
  int v31; // r9d
  char v32; // si
  int v33; // edx
  KIRQL v34; // si
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rcx
  struct _NDIS_PROTOCOL_BLOCK *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx
  TriageData *value; // rsi
  KIRQL v42; // al
  unsigned int v43; // ecx
  KIRQL v44; // r12
  int v45; // edx
  __int64 Pool2; // r13
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v48; // edx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  __int64 v50; // rdx
  _X_FILTER *EthDB; // rax
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v53; // edx
  struct _GUID *v54; // [rsp+20h] [rbp-E0h]
  struct _GUID *v55; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h]
  struct _NDIS_PROTOCOL_BLOCK *v58; // [rsp+60h] [rbp-A0h]
  struct _NDIS_MINIPORT_BLOCK *v59; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING *v60; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  int *v62; // [rsp+90h] [rbp-70h] BYREF
  void **v63; // [rsp+98h] [rbp-68h]
  unsigned int *v64; // [rsp+A0h] [rbp-60h]
  enum _NDIS_MEDIUM *v65; // [rsp+A8h] [rbp-58h]
  unsigned int v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B4h] [rbp-4Ch]
  struct _NDIS_PROTOCOL_BLOCK *v68; // [rsp+B8h] [rbp-48h]
  void *v69; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING *v70; // [rsp+C8h] [rbp-38h]
  char v71[224]; // [rsp+D0h] [rbp-30h] BYREF
  char v72; // [rsp+1C0h] [rbp+C0h]
  char v73; // [rsp+1C8h] [rbp+C8h]
  char v76[8]; // [rsp+208h] [rbp+108h]
  KIRQL v77; // [rsp+210h] [rbp+110h]

  v12 = a5;
  *(_QWORD *)&String1.Length = 2359330LL;
  BindingAdapter = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  v73 = 0;
  v72 = 0;
  OpenBlock = 0LL;
  v76[0] = 0;
  v60 = 0LL;
  v56 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = P;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x19u,
      (int)v54,
      (char)P,
      &P->Name.Length,
      &a9->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  v58 = P;
  v18 = 1;
  v19 = KeAcquireSpinLockRaiseToDpc(&P->Ref.SpinLock);
  v77 = v19;
  if ( !P->Ref.Closing )
  {
    ReferenceCount = P->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v18 = 2;
    }
    else
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)P->Ref.RefCountTracker;
      P->Ref.ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(RefCountTracker, 9u);
      v19 = v77;
      v18 = 0;
    }
  }
  KeReleaseSpinLock(&P->Ref.SpinLock, v19);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqlD(*((_QWORD *)WPP_GLOBAL_Control + 8), v58->Ref.ReferenceCount, v22, v23, (__int64)v54);
  if ( v18 )
  {
    *a1 = -1073676286;
    goto LABEL_107;
  }
  v73 = 1;
  Feature_CheckProtocolMutexOwner__private_IsEnabledPreCheck();
  BindDeviceName = P->BindDeviceName;
  v25 = P->MutexOwnerThread != KeGetCurrentThread();
  if ( !BindDeviceName || v25 )
  {
    ndisFindRootDevice((__int64)a9, (__int64)&v59, 44);
    BindingAdapter = v59;
    if ( v59 )
    {
      v63 = a3;
      v64 = a4;
      v66 = a6;
      v69 = a8;
      v67 = 0;
      v62 = a1;
      v65 = a5;
      v68 = P;
      v70 = a9;
      Ndis::BindEngine::BeginPolicyUpdates(&v59->BindEngine);
      DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                           &BindingAdapter->Bindings,
                                                           &P->Bind,
                                                           BindingAdapter,
                                                           4LL);
      if ( DynamicBinding )
      {
        DynamicBinding->BindState.m_AdditionalContext = &v62;
        if ( Ndis::BindState::SetBinding(
               &DynamicBinding->BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
        {
          memset(v71, 0, 0xA0uLL);
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v71);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v28,
                0x1Cu,
                0x1Au,
                (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
                *(unsigned __int16 **)&v71[8],
                *(_QWORD *)v71);
          }
        }
      }
      else
      {
        *a1 = -1073741670;
      }
      Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&BindingAdapter->BindEngine, RunSynchronous, 0);
      if ( !*v63 && !*a1 )
        *a1 = -1073676271;
      v73 = 0;
      v32 = (char)P;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), v29, v30, v31, (__int64)v55);
      if ( (unsigned __int8)ndisDereferenceRef(&P->Ref.SpinLock, 9u) )
      {
        v34 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
        p_NextProtocol = &ndisProtocolList;
        v36 = ndisProtocolList;
        if ( ndisProtocolList )
        {
          while ( v36 != P )
          {
            p_NextProtocol = &v36->NextProtocol;
            v36 = v36->NextProtocol;
            if ( !v36 )
              goto LABEL_32;
          }
          *p_NextProtocol = P->NextProtocol;
          ObfDereferenceObject(ndisDriverObject);
        }
LABEL_32:
        KeReleaseSpinLock(&ndisProtocolListLock, v34);
        Buffer = P->ImageName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          P->ImageName.Buffer = 0LL;
        }
        DeregEvent = P->DeregEvent;
        if ( DeregEvent )
          KeSetEvent(DeregEvent, 0, 0);
        value = P->Triage.__ptr_.__value_;
        P->Triage.__ptr_.__value_ = 0LL;
        if ( value )
        {
          ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
          ExFreePoolWithTag(value, 0);
        }
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&P->Bind, v37, v38);
        ExFreePoolWithTag(P, 0);
        v32 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v33,
          5,
          43,
          (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
          v32);
      }
      ndisDereferenceMiniport(BindingAdapter, 0x2Cu);
      goto LABEL_107;
    }
    RootDeviceName = v60;
    v76[0] = 1;
  }
  else
  {
    RootDeviceName = P->RootDeviceName;
    BindingAdapter = P->BindingAdapter;
  }
  P->BindDeviceName = 0LL;
  if ( !BindingAdapter || (BindingAdapter->Flags & 0x10000) == 0 )
  {
    *a1 = -1073676282;
LABEL_107:
    if ( a12 )
      *a12 = *a1;
    goto LABEL_109;
  }
  if ( RtlPrefixUnicodeString(&String1, &BindingAdapter->SymbolicLinkName, 1u) )
  {
    *a1 = -1073676281;
    goto LABEL_107;
  }
  OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, P, 0);
  if ( !OpenBlock )
  {
    *a1 = -1073741670;
    goto LABEL_107;
  }
  v42 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
  ndisGlobalOpenList = OpenBlock;
  v72 = 1;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v42);
  OpenBlock->ProtocolBindingContext = a8;
  OpenBlock->RootDeviceName = RootDeviceName;
  OpenBlock->BindDeviceName = BindDeviceName;
  v43 = 0;
  OpenBlock->MiniportHandle = BindingAdapter;
  OpenBlock->ProtocolHandle = P;
  *a3 = OpenBlock;
  if ( (BindingAdapter->MacOptions & 0x80000001) == 0x80000001 )
  {
    if ( a6 )
    {
      while ( *v12 != NdisMediumWan )
      {
        ++v43;
        ++v12;
        if ( v43 >= a6 )
          goto LABEL_57;
      }
      goto LABEL_59;
    }
  }
  else if ( a6 )
  {
    while ( a5[v43] != BindingAdapter->MediaType )
    {
      if ( ++v43 >= a6 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_57:
  if ( v43 == a6 )
  {
    *a1 = -1073676263;
    goto LABEL_107;
  }
LABEL_59:
  *a4 = v43;
  if ( (BindingAdapter->PnPFlags & 0x40000000) != 0 )
  {
    v56 = 0x100080180LL;
    if ( (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 0x1021Eu, &v56, 8, 1, 1u) )
    {
      *a1 = -1073741823;
      goto LABEL_107;
    }
  }
  v44 = KeAcquireSpinLockRaiseToDpc(&BindingAdapter->Lock);
  BindingAdapter->MiniportThread = KeGetCurrentThread();
  if ( (BindingAdapter->Flags & 0x40000) == 0 )
  {
    if ( BindingAdapter->LockAcquired )
    {
      do
      {
        BindingAdapter->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&BindingAdapter->Lock);
        KeStallExecutionProcessor(1u);
        KeAcquireSpinLockAtDpcLevel(&BindingAdapter->Lock);
        BindingAdapter->MiniportThread = KeGetCurrentThread();
      }
      while ( BindingAdapter->LockAcquired );
      v17 = P;
    }
    BindingAdapter->LockAcquired = 1;
    BindingAdapter->LockThread = KeGetCurrentThread();
  }
  ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
  if ( *a1 )
    goto LABEL_81;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)OpenBlock,
      (char)v17,
      BindingAdapter);
  if ( v76[0] )
    OpenBlock->OpenFlags |= 0x400000u;
  if ( (BindingAdapter->Flags & 0x20000000) == 0 && (BindingAdapter->Flags & 0x20000) == 0 )
    ndisMSwapOpenHandlers(BindingAdapter, 2u);
  if ( (BindingAdapter->Flags & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950LL);
    if ( Pool2 )
    {
      ndisMReferenceOpen((__int64)OpenBlock, 0);
      _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
      *(_QWORD *)Pool2 = OpenBlock;
      *(_QWORD *)(Pool2 + 24) = ndisMFinishQueuedPendingOpen;
      *(_QWORD *)(Pool2 + 32) = Pool2;
      *(_QWORD *)(Pool2 + 8) = 0LL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v45) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v45,
        19,
        28,
        (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
        (char)OpenBlock);
    }
  }
  else
  {
LABEL_81:
    Pool2 = v57;
  }
  if ( (BindingAdapter->Flags & 0x40000) == 0 )
  {
    BindingAdapter->LockAcquired = 0;
    BindingAdapter->LockThread = 0LL;
  }
  BindingAdapter->MiniportThread = 0LL;
  KeReleaseSpinLock(&BindingAdapter->Lock, v44);
  if ( *a1 )
    goto LABEL_107;
  Ndis::BindEngine::BeginPolicyUpdates(&BindingAdapter->BindEngine);
  CurrentLink = Ndis::BindEngine::GetCurrentLink(&BindingAdapter->BindEngine);
  OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
  if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
    *a1 = -1073741670;
  Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
  v48 = *a1;
  if ( *a1 )
    goto LABEL_107;
  if ( (BindingAdapter->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))BindingAdapter->BusInterface;
    if ( BusInterface )
    {
      BusInterface[4](BusInterface[1]);
      v48 = *a1;
    }
  }
  if ( a12 )
  {
    *a12 = v48;
    a12 = 0LL;
  }
  ndisPktMonOpenRegister((char)OpenBlock);
  if ( Pool2 )
  {
    v50 = (unsigned int)*a1;
    if ( v17->MajorNdisVersion < 6u )
      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v50, v50);
    else
      ndisInvokeOpenAdapterComplete(OpenBlock, v50);
    EthDB = BindingAdapter->EthDB;
    if ( EthDB && EthDB->SingleActiveOpen || !BindingAdapter->LoopbackOpens || BindingAdapter->NumOpens <= 1u )
      _InterlockedAnd((volatile signed __int32 *)&BindingAdapter->Flags, 0xFFFFBFFF);
    else
      _InterlockedOr((volatile signed __int32 *)&BindingAdapter->Flags, 0x4000u);
    if ( v76[0] )
    {
      ndisNotifyWmiBindUnbind(BindingAdapter, v17, 1u);
      v76[0] = 0;
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 8), (WORK_QUEUE_TYPE)40);
    *a1 = 259;
    goto LABEL_107;
  }
LABEL_109:
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v73 )
        ndisDereferenceProtocol(v17, 0, 9u, v23);
      if ( v72 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v76[0] && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind(BindingAdapter, v17, 1u);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v53,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)v17,
      (char)BindingAdapter,
      (char)OpenBlock,
      *a1);
}
