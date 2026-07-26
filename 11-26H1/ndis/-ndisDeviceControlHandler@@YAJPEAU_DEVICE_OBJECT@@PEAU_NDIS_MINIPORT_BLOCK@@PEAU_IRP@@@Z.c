/*
 * XREFs of ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100
 * Callers:
 *     ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000E6B0 (-ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x14007C150 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x14000EC30 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400122F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140014440 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1400178C0 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007E2B0 (-ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007E4E0 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14008C9B0 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140138990 (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140142538 (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016E0F0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  signed __int32 v6; // eax
  unsigned int v7; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _FILE_OBJECT *FileObject; // rdi
  __int128 *FsContext; // rdi
  struct _NDIS_MINIPORT_BLOCK *v11; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // rbx
  __int64 v13; // rax
  unsigned int LowPart; // edx
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  _IO_STACK_LOCATION *v19; // rdx
  char v20; // r8
  unsigned int HardwareInfo; // eax
  int RdmaCapabilities; // eax
  KSPIN_LOCK *p_Lock; // rsi
  KIRQL v24; // r14
  ULONG_PTR NsiRefCountTracker; // r8
  __int64 v26; // r9
  unsigned __int8 i; // cl
  _BYTE *v28; // r10
  char v29; // al
  unsigned int v30; // edx
  ULONG_PTR v31; // r12
  int v32; // ecx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v35; // edx
  _ULONG_REFERENCE *p_Ref; // rsi
  KIRQL v37; // al
  int v38; // edx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v40; // r12
  __int64 v41; // r9
  unsigned __int8 j; // cl
  _BYTE *v43; // r10
  char v44; // al
  ULONG_PTR v45; // r14
  unsigned int v46; // edx
  int v47; // ecx
  int v48; // r14d
  int v49; // edx
  struct _NDIS_LOG *Log; // rdi
  struct _KEVENT *RemoveReadyEvent; // rcx
  int v53; // eax
  _NDIS_SRIOV_CAPABILITIES *v54; // rax
  _IO_STACK_LOCATION *v55; // rdx
  __int64 (__fastcall *v56)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  _IO_STACK_LOCATION *v57; // rdx
  _IO_STACK_LOCATION *v58; // rdx
  _IO_STATUS_BLOCK *p_IoStatus; // rdi
  _IO_STACK_LOCATION *v60; // rdi
  _IO_STACK_LOCATION *v61; // rax
  KSPIN_LOCK *v62; // r14
  unsigned int ByteCount; // r12d
  _MDL *MdlAddress; // rcx
  char *MappedSystemVa; // rax
  struct _NDIS_REFCOUNT_STACK_BLOCK *v66; // rsi
  struct _NDIS_REFCOUNT_STACK_BLOCK *v67; // rsi
  __int64 v68; // rcx
  size_t v69; // r8
  char *v70; // rdx
  size_t v71; // r8
  char *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r9
  int v75; // ecx
  unsigned int v76; // ecx
  unsigned int v77; // eax
  _IRP *MasterIrp; // rdi
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // rsi
  unsigned int v83; // edi
  __int64 v84; // r14
  unsigned __int64 Length; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v86; // rsi
  unsigned int v87; // r14d
  unsigned int v88; // edx
  unsigned int v89; // r8d
  struct _NDIS_PCW_DATA_BLOCK *v90; // rax
  struct _NDIS_PCW_DATA_BLOCK *v91; // r9
  unsigned int v92; // r8d
  __int64 v93; // r10
  __int64 v94; // rdx
  _IO_STATUS_BLOCK *v95; // rax
  _IO_STATUS_BLOCK *v96; // rcx
  _IO_STATUS_BLOCK v97; // xmm0
  _IRP::<unnamed_type_AssociatedIrp> v98; // rsi
  struct _NDIS_PD_BLOCK *PDBlock; // rdx
  KIRQL v100; // dl
  unsigned int v101; // r14d
  KIRQL v102; // dl
  KIRQL v103; // dl
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *v105; // rax
  int v106; // edi
  _IRP::<unnamed_type_AssociatedIrp> v107; // rcx
  unsigned int v108; // [rsp+40h] [rbp-89h] BYREF
  char *v109; // [rsp+48h] [rbp-81h]
  __int128 v110; // [rsp+50h] [rbp-79h] BYREF
  __int128 v111; // [rsp+60h] [rbp-69h]
  __int128 v112; // [rsp+70h] [rbp-59h]
  __int128 v113; // [rsp+80h] [rbp-49h]
  __int128 v114; // [rsp+90h] [rbp-39h]
  __int128 v115; // [rsp+A0h] [rbp-29h]
  struct _KTIMER Timer; // [rsp+B0h] [rbp-19h] BYREF
  int Irql; // [rsp+140h] [rbp+77h] BYREF
  char v118; // [rsp+148h] [rbp+7Fh]

  v118 = 1;
  v108 = 0;
  v4 = a2;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)a2,
      a3);
  v6 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v6 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
      {
        memset(&Timer, 0, sizeof(Timer));
        KeInitializeTimerEx(&Timer, SynchronizationTimer);
        KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
        KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  a3->IoStatus.Information = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    v15 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
LABEL_89:
    a3->IoStatus.Status = v15;
    IofCompleteRequest(a3, 2);
    goto LABEL_80;
  }
  if ( v4->Header.Type != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x20u,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)a1,
        a3);
    v55 = a3->Tail.Overlay.CurrentStackLocation;
    if ( v4->Header.Type == 17 )
    {
      v15 = 0;
      if ( v55->MajorFunction != 18 )
        v15 = -1073741637;
    }
    else
    {
      if ( v4->Header.Type == 9 )
      {
        v56 = (__int64 (__fastcall *)(struct _DEVICE_OBJECT *, struct _IRP *))*((_QWORD *)&v4->Reserved28
                                                                              + v55->MajorFunction);
        if ( v56 )
        {
          v15 = v56(a1, a3);
LABEL_126:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xBu,
              0x21u,
              (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
              (char)a1,
              a3);
          MmUnlockPagableImageSection(ImageSectionHandle);
          _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
          goto LABEL_80;
        }
      }
      v15 = -1073741637;
    }
    a3->IoStatus.Status = v15;
    IofCompleteRequest(a3, 2);
    goto LABEL_126;
  }
  FsContext = (__int128 *)FileObject->FsContext;
  v11 = ndisReferenceTopMiniportByNameForNsi(v4, 0, v7, 0, NSIREF_IOCTL, MPREF_UM_IOCTL);
  v12 = v11;
  if ( v11 )
  {
    v4 = v11;
    *((_QWORD *)&v110 + 1) = v11;
    *(_QWORD *)&v111 = v11->OidList;
    BYTE8(v111) = *((_BYTE *)FsContext + 24);
    v13 = *(_QWORD *)FsContext;
    FsContext = &v110;
    *(_QWORD *)&v110 = v13;
  }
  if ( (v4->PnPFlags & 0x4010) != 0 )
  {
    v15 = -1073741436;
    goto LABEL_28;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart <= 0x226044 )
  {
    if ( LowPart != 2252868 )
    {
      switch ( LowPart )
      {
        case 0x170002u:
        case 0x170006u:
        case 0x17000Eu:
        case 0x170028u:
        case 0x17002Cu:
        case 0x170030u:
        case 0x17003Eu:
        case 0x17009Cu:
          v53 = ndisMiniportOidIoctl(
                  v4,
                  (struct _NDIS_USER_OPEN_CONTEXT *)FsContext,
                  LowPart,
                  CurrentStackLocation->Parameters.Create.Options,
                  CurrentStackLocation->Parameters.Read.Length,
                  (unsigned __int8 *)a3->AssociatedIrp.MasterIrp,
                  a3->MdlAddress,
                  &v108);
          v15 = v53;
          if ( !v53 || v53 == -2147483643 )
            a3->IoStatus.Information = v108;
          v118 = 1;
          goto LABEL_26;
        case 0x17001Eu:
          if ( !a3->MdlAddress )
          {
            v15 = -1073741811;
            goto LABEL_28;
          }
          LOBYTE(Irql) = 0;
          IoAcquireCancelSpinLock((PKIRQL)&Irql);
          KeAcquireSpinLockAtDpcLevel(&v4->Lock);
          Log = v4->Log;
          v4->MiniportThread = KeGetCurrentThread();
          if ( !Log )
          {
            v4->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v4->Lock);
            IoReleaseCancelSpinLock(Irql);
LABEL_86:
            v15 = -1073741823;
            goto LABEL_26;
          }
          v62 = (KSPIN_LOCK *)((char *)Log + 8);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)Log + 1);
          ByteCount = *((_DWORD *)Log + 7);
          if ( ByteCount )
          {
            MdlAddress = a3->MdlAddress;
            if ( MdlAddress->ByteCount <= ByteCount )
              ByteCount = MdlAddress->ByteCount;
            if ( (MdlAddress->MdlFlags & 5) != 0 )
              MappedSystemVa = (char *)MdlAddress->MappedSystemVa;
            else
              MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000000u);
            v109 = MappedSystemVa;
            if ( MappedSystemVa )
            {
              v68 = *((unsigned int *)Log + 9);
              v69 = (unsigned int)(*((_DWORD *)Log + 6) - v68);
              v70 = (char *)Log + v68 + 40;
              if ( (unsigned int)v69 < ByteCount )
              {
                memmove(MappedSystemVa, v70, v69);
                v73 = *((unsigned int *)Log + 6);
                v70 = (char *)Log + 40;
                v74 = *((unsigned int *)Log + 9);
                v71 = (unsigned int)v74 + ByteCount - (_DWORD)v73;
                v72 = &v109[v73 - v74];
              }
              else
              {
                v71 = ByteCount;
                v72 = MappedSystemVa;
              }
              memmove(v72, v70, v71);
              v75 = *((_DWORD *)Log + 9);
              *((_DWORD *)Log + 7) -= ByteCount;
              v76 = ByteCount + v75;
              v77 = *((_DWORD *)Log + 6);
              *((_DWORD *)Log + 9) = v76;
              if ( v76 >= v77 )
                *((_DWORD *)Log + 9) = v76 - v77;
              v15 = 0;
              a3->IoStatus.Information = ByteCount;
            }
            else
            {
              v15 = -1073741670;
            }
          }
          else if ( *((_QWORD *)Log + 2) )
          {
            v15 = -1073741823;
          }
          else
          {
            _InterlockedExchange64((volatile __int64 *)&a3->CancelRoutine, (__int64)ndisCancelLogIrp);
            *((_QWORD *)Log + 2) = a3;
            v15 = 259;
          }
          KeReleaseSpinLockFromDpcLevel(v62);
          v4->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v4->Lock);
          IoReleaseCancelSpinLock(Irql);
          if ( v15 != 259 )
          {
            if ( v15 )
              goto LABEL_86;
LABEL_147:
            v15 = 0;
          }
          break;
        case 0x170068u:
          v57 = a3->Tail.Overlay.CurrentStackLocation;
          if ( !*((_BYTE *)v57->FileObject->FsContext + 24) )
            goto LABEL_13;
          if ( v57->Parameters.Create.Options < 0x14 )
            goto LABEL_13;
          MasterIrp = a3->AssociatedIrp.MasterIrp;
          v79 = (int)MasterIrp->MdlAddress;
          if ( (unsigned int)(v79 - 1) > 2 )
            goto LABEL_13;
          v80 = v79 - 1;
          if ( v80 )
          {
            v81 = v80 - 1;
            if ( v81 )
            {
              if ( v81 == 1 )
              {
                MiniportDataBlock = ndisPcwGetMiniportDataBlock(v4);
                if ( MiniportDataBlock )
                {
                  v83 = 0;
                  if ( ndisMaxNumberOfProcessors )
                  {
                    v84 = ndisPcwOffsetToPerCpuData;
                    do
                      memset((char *)MiniportDataBlock + ndisPcwPerCpuDataStride * v83++ + v84, 0, 0x130uLL);
                    while ( v83 < ndisMaxNumberOfProcessors );
                  }
                }
                v4->NumberOfIndirectionTableChanges = 0LL;
              }
            }
            else
            {
              v4->PcwDatapathEventMask = 0;
              v4->PcwDatapathCycleMask = 0;
            }
          }
          else if ( ndisPcwGetMiniportDataBlock(v4) )
          {
            v4->PcwDatapathEventMask = HIDWORD(MasterIrp->MdlAddress);
            v4->PcwDatapathCycleMask = MasterIrp->Flags;
          }
          a3->IoStatus.Information = 0LL;
          v15 = 0;
          goto LABEL_26;
        case 0x17006Cu:
          v58 = a3->Tail.Overlay.CurrentStackLocation;
          p_IoStatus = 0LL;
          if ( !*((_BYTE *)v58->FileObject->FsContext + 24) )
            goto LABEL_13;
          Length = v58->Parameters.Read.Length;
          v86.MasterIrp = (_IRP *)a3->AssociatedIrp;
          if ( (unsigned int)Length < 0x30 )
            goto LABEL_13;
          v87 = 48;
          *(_OWORD *)&v86.MasterIrp->Type = 0LL;
          *(_OWORD *)&v86.MasterIrp->Flags = 0LL;
          v86.MasterIrp->ThreadListEntry = 0LL;
          *(_DWORD *)&v86.MasterIrp->Type = 3146112;
          v86.MasterIrp->Reserved2 = ndisMaxNumberOfProcessors;
          v86.MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)v4->NumberOfIndirectionTableChanges;
          HIDWORD(v86.MasterIrp->MdlAddress) = v4->PcwDatapathEventMask;
          v86.MasterIrp->Flags = v4->PcwDatapathCycleMask;
          v88 = ndisMaxNumberOfProcessors;
          v89 = 304 * ndisMaxNumberOfProcessors + 48;
          if ( (unsigned int)Length < v89 )
          {
            LODWORD(v86.MasterIrp->ThreadListEntry.Flink) = Length / 0x130;
            if ( !(unsigned int)(Length / 0x130) )
              goto LABEL_192;
            HIDWORD(v86.MasterIrp->ThreadListEntry.Flink) = 48;
            v87 = 304 * (Length / 0x130) + 48;
          }
          else
          {
            HIDWORD(v86.MasterIrp->ThreadListEntry.Flink) = 48;
            v87 = v89;
            LODWORD(v86.MasterIrp->ThreadListEntry.Flink) = v88;
          }
          LODWORD(v86.MasterIrp->ThreadListEntry.Blink) = 304;
          p_IoStatus = &v86.MasterIrp->IoStatus;
LABEL_192:
          LODWORD(v86.MasterIrp->MdlAddress) = v89;
          v90 = ndisPcwGetMiniportDataBlock(v4);
          v91 = v90;
          if ( p_IoStatus )
          {
            if ( v90 )
            {
              v92 = 0;
              if ( LODWORD(v86.MasterIrp->ThreadListEntry.Flink) )
              {
                v93 = ndisPcwOffsetToPerCpuData;
                do
                {
                  v94 = 2LL;
                  v95 = &p_IoStatus[19 * v92];
                  v96 = (_IO_STATUS_BLOCK *)((char *)v91 + ndisPcwPerCpuDataStride * v92 + v93);
                  do
                  {
                    v95 += 8;
                    v97 = *v96;
                    v96 += 8;
                    v95[-8] = v97;
                    v95[-7] = v96[-7];
                    v95[-6] = v96[-6];
                    v95[-5] = v96[-5];
                    v95[-4] = v96[-4];
                    v95[-3] = v96[-3];
                    v95[-2] = v96[-2];
                    v95[-1] = v96[-1];
                    --v94;
                  }
                  while ( v94 );
                  ++v92;
                  *v95 = *v96;
                  v95[1] = v96[1];
                  v95[2] = v96[2];
                }
                while ( v92 < LODWORD(v86.MasterIrp->ThreadListEntry.Flink) );
              }
            }
          }
          a3->IoStatus.Information = v87;
          goto LABEL_147;
        case 0x170070u:
          Irql = 0;
          HardwareInfo = ndisGetHardwareInfo(v4, a3, &Irql);
          goto LABEL_25;
        case 0x170078u:
          Irql = 0;
          HardwareInfo = ndisGetPowerInfo(v4, a3, &Irql);
          goto LABEL_25;
        case 0x170090u:
          RdmaCapabilities = ndisGetRdmaCapabilities(v4, a3);
          if ( RdmaCapabilities )
            goto LABEL_136;
          v15 = 0;
          goto LABEL_26;
        case 0x170094u:
          Irql = 0;
          HardwareInfo = ndisGetAdapterHardwareInfo(v4, a3, &Irql);
          goto LABEL_25;
        case 0x170098u:
          v20 = *((_BYTE *)FsContext + 24);
          Irql = 0;
          HardwareInfo = ndisGetAdapterRssInfo((char *)v4, a3, v20, &Irql);
LABEL_25:
          v15 = HardwareInfo;
          RdmaCapabilities = Irql;
          if ( Irql )
          {
LABEL_136:
            if ( RdmaCapabilities == -1073676268 )
            {
              v15 = -2147483643;
            }
            else
            {
              v15 = -1073741823;
              if ( RdmaCapabilities == -1073741637 )
                v15 = -1073741637;
            }
          }
          goto LABEL_26;
        case 0x1700A8u:
          if ( !*((_BYTE *)FsContext + 24) )
            goto LABEL_13;
          ndisMiniportFatalError(v4, NdisMEventErr_Min);
          v15 = 0;
          goto LABEL_26;
        case 0x1700B0u:
          v60 = a3->Tail.Overlay.CurrentStackLocation;
          LOBYTE(Irql) = 0;
          if ( !*((_BYTE *)v60->FileObject->FsContext + 24)
            || v60->Parameters.Create.Options
            || v60->Parameters.Read.Length < 0x18 )
          {
            goto LABEL_13;
          }
          v98.MasterIrp = (_IRP *)a3->AssociatedIrp;
          *(_DWORD *)&v98.MasterIrp->Type = 1573248;
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, (unsigned __int8 *)&Irql);
          PDBlock = v4->PDBlock;
          if ( !PDBlock || (v101 = *((_DWORD *)PDBlock + 8) + 24, *((_DWORD *)PDBlock + 8) >= 0xFFFFFFE8) )
          {
            v100 = Irql;
            v4->MiniportThread = 0LL;
            KeReleaseSpinLock(&v4->Lock, v100);
            goto LABEL_13;
          }
          *(_DWORD *)&v98.MasterIrp->AllocationProcessorNumber = v101;
          if ( v60->Parameters.Read.Length < v101 )
          {
            v102 = Irql;
            a3->IoStatus.Information = 24LL;
            v4->MiniportThread = 0LL;
            KeReleaseSpinLock(&v4->Lock, v102);
            v15 = -2147483643;
            goto LABEL_26;
          }
          v98.MasterIrp->Reserved2 = *((_DWORD *)PDBlock + 2);
          LOBYTE(v98.MasterIrp->Flags) = *((_BYTE *)PDBlock + 20);
          LODWORD(v98.MasterIrp->MdlAddress) = 24;
          HIDWORD(v98.MasterIrp->MdlAddress) = *((_DWORD *)PDBlock + 8);
          memmove(&v98.MasterIrp->AssociatedIrp, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
          v103 = Irql;
          a3->IoStatus.Information = v101;
          v4->MiniportThread = 0LL;
          KeReleaseSpinLock(&v4->Lock, v103);
          goto LABEL_147;
        default:
          goto LABEL_122;
      }
      goto LABEL_26;
    }
    v61 = a3->Tail.Overlay.CurrentStackLocation;
    LOBYTE(Irql) = 0;
    if ( !*((_BYTE *)v61->FileObject->FsContext + 24) )
    {
      v15 = -1073741823;
      goto LABEL_26;
    }
    if ( ndisSystemSupportsSriov )
    {
      SriovCurrentCapabilities = v4->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities )
      {
        if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
        {
          IoAcquireCancelSpinLock((PKIRQL)&Irql);
          _InterlockedExchange64((volatile __int64 *)&a3->CancelRoutine, (__int64)ndisIovCancelIoctlNotification);
          IoReleaseCancelSpinLock(Irql);
          a3->IoStatus.Information = 0LL;
LABEL_149:
          v118 = 0;
          v15 = 259;
          goto LABEL_26;
        }
      }
    }
    goto LABEL_129;
  }
  v16 = LowPart - 2252872;
  if ( !v16 || (v17 = v16 - 4) == 0 || (v18 = v17 - 4) == 0 )
  {
    if ( !*((_BYTE *)a3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
    {
      v15 = -1073741823;
      goto LABEL_26;
    }
    if ( ndisSystemSupportsSriov )
    {
      v54 = v4->SriovCurrentCapabilities;
      if ( v54 )
      {
        if ( (v54->SriovCapabilities & 3) == 3 )
        {
          a3->IoStatus.Information = 0LL;
          v15 = 0;
          goto LABEL_26;
        }
      }
    }
    goto LABEL_129;
  }
  if ( v18 != 4 )
  {
LABEL_122:
    v15 = -1073741822;
    goto LABEL_28;
  }
  v19 = a3->Tail.Overlay.CurrentStackLocation;
  LOBYTE(Irql) = 0;
  if ( !*((_BYTE *)v19->FileObject->FsContext + 24) || v19->Parameters.Read.Length < 0x10 )
  {
LABEL_13:
    v15 = -1073741823;
    goto LABEL_26;
  }
  if ( !ndisSystemSupportsSriov || (v105 = v4->SriovCurrentCapabilities) == 0LL || (v105->SriovCapabilities & 3) != 3 )
  {
LABEL_129:
    v15 = -1073741637;
    goto LABEL_26;
  }
  IoAcquireCancelSpinLock((PKIRQL)&Irql);
  if ( v4->InvalidateBlockMask )
  {
    v106 = 0;
    v107.MasterIrp = (_IRP *)a3->AssociatedIrp;
    v107.MasterIrp->Type = v4->InvalidateVfId;
    v107.MasterIrp->MdlAddress = (_MDL *)v4->InvalidateBlockMask;
    a3->IoStatus.Information = 16LL;
    v4->InvalidateBlockMask = 0LL;
  }
  else
  {
    v4->InvalidateBlockIoctlPf = a3;
    v106 = 259;
    a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    _InterlockedExchange64((volatile __int64 *)&a3->CancelRoutine, (__int64)ndisIovCancelIoctlInvalidate);
  }
  IoReleaseCancelSpinLock(Irql);
  if ( v106 == 259 )
    goto LABEL_149;
  v15 = 0;
LABEL_26:
  if ( (v15 & 0xC0230000) == 0xC0230000 )
    v15 = (unsigned __int16)v15 | 0xC0010000;
LABEL_28:
  if ( v12 )
  {
    p_Lock = &v12->Lock;
    v24 = KeAcquireSpinLockRaiseToDpc(&v12->Lock);
    NsiRefCountTracker = (ULONG_PTR)v12->NsiRefCountTracker;
    v12->MiniportThread = KeGetCurrentThread();
    if ( NsiRefCountTracker != 2 && NsiRefCountTracker != 3 )
    {
      if ( NsiRefCountTracker < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
      if ( !*(_BYTE *)(NsiRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 0LL);
      if ( *(_BYTE *)(NsiRefCountTracker + 1) )
      {
        if ( *(_BYTE *)(NsiRefCountTracker + 1) == 1 )
        {
          v30 = *(_DWORD *)(NsiRefCountTracker + 64);
          v31 = NsiRefCountTracker + 8;
          v32 = (unsigned __int16)v30 >> 1;
          if ( v30 >> 17 < 0x3FFE && v32 == (v30 >> 17) + 1 )
          {
            if ( *(_QWORD *)v31 )
            {
              v66 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v31;
              do
              {
                *(_QWORD *)v31 = v66->Next;
                ndisFreeRefCountStacksInBlock(v66);
                ExFreePoolWithTag(v66, 0);
                v66 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v31;
              }
              while ( *(_QWORD *)v31 );
              p_Lock = &v12->Lock;
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v31);
            *(_DWORD *)(v31 + 56) &= 0x10001u;
          }
          else
          {
            if ( v32 == 0 && (v30 & 1) == 0 )
              ndisReportRefcountImbalance(NsiRefCountTracker, 0);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 8), 0);
          }
        }
      }
      else
      {
        v26 = *(_QWORD *)(NsiRefCountTracker + 8);
        if ( v26 )
        {
          for ( i = 0; i < *(_BYTE *)(NsiRefCountTracker + 3); ++i )
          {
            v28 = (_BYTE *)(v26 + 2LL * i);
            if ( !*v28 )
            {
              v29 = v28[1];
              if ( v29 )
              {
                v28[1] = v29 - 1;
                goto LABEL_49;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 0) )
          ndisReportRefcountImbalance(NsiRefCountTracker, 0);
      }
    }
LABEL_49:
    if ( v12->NsiOpenReferences-- == 1 )
    {
      NsiRequestsCompletedEvent = v12->NsiRequestsCompletedEvent;
      if ( NsiRequestsCompletedEvent )
        KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
    }
    v12->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v24);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v35,
        20,
        25,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)v12);
    }
    p_Ref = &v12->Ref;
    v37 = KeAcquireSpinLockRaiseToDpc(&v12->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v12->RefCountTracker;
    v40 = v37;
    if ( RefCountTracker && RefCountTracker - 2 > 1 )
    {
      if ( RefCountTracker == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(RefCountTracker + 2) <= 0x57u )
        ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x57uLL);
      if ( *(_BYTE *)(RefCountTracker + 1) )
      {
        if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
        {
          v45 = RefCountTracker + 5576;
          v46 = *(_DWORD *)(RefCountTracker + 5632);
          v47 = (unsigned __int16)v46 >> 1;
          if ( v46 >> 17 < 0x3FFE && v47 == (v46 >> 17) + 1 )
          {
            if ( *(_QWORD *)v45 )
            {
              v67 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v45;
              do
              {
                *(_QWORD *)v45 = v67->Next;
                ndisFreeRefCountStacksInBlock(v67);
                ExFreePoolWithTag(v67, 0);
                v67 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v45;
              }
              while ( *(_QWORD *)v45 );
              p_Ref = &v12->Ref;
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v45);
            *(_DWORD *)(v45 + 56) &= 0x10001u;
          }
          else
          {
            if ( v47 == 0 && (v46 & 1) == 0 )
              ndisReportRefcountImbalance((ULONG_PTR)v12->RefCountTracker, 0x57u);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 5576), 0);
          }
        }
      }
      else
      {
        v41 = *(_QWORD *)(RefCountTracker + 8);
        if ( v41 )
        {
          for ( j = 0; j < *(_BYTE *)(RefCountTracker + 3); ++j )
          {
            v43 = (_BYTE *)(v41 + 2LL * j);
            if ( *v43 == 87 )
            {
              v44 = v43[1];
              if ( v44 )
              {
                v43[1] = v44 - 1;
                goto LABEL_74;
              }
            }
          }
        }
        if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 24), 0x17u) )
          ndisReportRefcountImbalance(RefCountTracker, 0x57u);
      }
    }
LABEL_74:
    v48 = p_Ref->ReferenceCount - 1;
    p_Ref->ReferenceCount = v48;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v38,
        20,
        14,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        (char)v12,
        v48);
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v40);
    if ( !v48 )
    {
      RemoveReadyEvent = v12->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v49) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v49,
        20,
        26,
        (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
        (char)v12);
    }
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v118 && v15 != 259 )
    goto LABEL_89;
LABEL_80:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
      (char)v4,
      a3);
  return v15;
}
