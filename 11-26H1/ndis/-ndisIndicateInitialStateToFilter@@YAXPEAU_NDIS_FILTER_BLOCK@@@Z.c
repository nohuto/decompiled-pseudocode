/*
 * XREFs of ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D9E0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     NdisMSleep @ 0x14004BF20 (NdisMSleep.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x14004C1D0 (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D120 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D830 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D8B0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D8F0 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14004E440 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004E540 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x14009C1C0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  _NDIS_FILTER_BLOCK *HigherFilter; // r15
  _NDIS_FILTER_BLOCK *LowerFilter; // r13
  int v5; // edx
  unsigned __int64 *p_Lock; // rsi
  KIRQL v7; // al
  KIRQL i; // r12
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_OFFLOAD *p_TopCapabilities; // rcx
  __int128 v11; // xmm0
  _NDIS_FILTER_TASK_OFFLOAD *v12; // rdx
  char v13; // r15
  void (__fastcall *v14)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  unsigned __int8 XState; // al
  void (__stdcall *v18)(PVOID); // rax
  void (__fastcall *v19)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  int v20; // edx
  _NDIS_TIMESTAMP_CAPABILITIES *v21; // rax
  KIRQL v22; // al
  KIRQL v23; // r8
  _NDIS_FILTER_TASK_OFFLOAD *v24; // rdx
  void (__fastcall *v25)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  void *v26; // rax
  KIRQL v27; // dl
  KIRQL v28; // al
  KIRQL v29; // r8
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax
  KIRQL v31; // dl
  KIRQL v32; // al
  KIRQL v33; // r8
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  KIRQL v35; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v36; // rax
  __int128 v37; // xmm0
  unsigned int *p_UdpEsp; // rdx
  _NDIS_FILTER_TASK_OFFLOAD *v39; // rdx
  void *v40; // rax
  KIRQL v41; // dl
  KIRQL v42; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v43; // rax
  void *v44; // rax
  KIRQL v45; // dl
  KIRQL v46; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v47; // rax
  unsigned __int8 v48; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v49; // [rsp+31h] [rbp-CFh]
  char v50; // [rsp+32h] [rbp-CEh]
  struct _NDIS_STATUS_INDICATION v51; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-40h]
  __int128 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // [rsp+ECh] [rbp-14h]
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  unsigned __int64 XmitLinkSpeed; // [rsp+F8h] [rbp-8h]
  unsigned __int64 RcvLinkSpeed; // [rsp+100h] [rbp+0h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions; // [rsp+108h] [rbp+8h]
  unsigned int AutoNegotiationFlags; // [rsp+10Ch] [rbp+Ch]
  _OWORD v64[14]; // [rsp+110h] [rbp+10h] BYREF

  Miniport = a1->Miniport;
  HigherFilter = a1->HigherFilter;
  LowerFilter = a1->LowerFilter;
  v48 = 0;
  memset(&v51, 0, sizeof(v51));
  memset(v64, 0, 0xDCuLL);
  v50 = 1;
  v52 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      75,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  }
  p_Lock = &a1->Lock;
  v59 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  for ( i = v7; FILTER_TEST_FLAG(a1, 0x2000); a1->LockThread = KeGetCurrentThread() )
  {
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, i);
    if ( KeGetCurrentIrql() == 2 )
      KeStallExecutionProcessor(1u);
    else
      NdisMSleep(0x32u);
    i = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  }
  FILTER_SET_FLAG(a1, 0x2000);
  a1->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  MediaConnectState = a1->MediaConnectState;
  MediaDuplexState = a1->MediaDuplexState;
  XmitLinkSpeed = a1->XmitLinkSpeed;
  RcvLinkSpeed = a1->RcvLinkSpeed;
  PauseFunctions = a1->PauseFunctions;
  AutoNegotiationFlags = a1->AutoNegotiationFlags;
  v56 = 2621824;
  if ( !HigherFilter )
  {
    ndisMAcquireStInLockWithSpinLock(Miniport, &v48);
    Offload = Miniport->Offload;
    if ( Offload && Offload->SupportsOffload )
    {
      p_TopCapabilities = &Offload->TopCapabilities;
      v64[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v64[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v64[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v64[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v64[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v64[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v64[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v11 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v64[7] = v11;
      v64[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v64[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v64[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v64[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v64[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v64[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      DWORD2(v64[13]) = p_TopCapabilities->LsoV2.IPv4.MinSegmentCount;
      if ( !a1->Offload && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v13 = 0;
        goto LABEL_10;
      }
      v12 = a1->Offload;
      *(_OWORD *)&v12->OffloadCaps.Header.Type = v64[0];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv4Receive + 4) = v64[1];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv6Receive + 4) = v64[2];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v12->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v64[3];
      *(_OWORD *)&v12->OffloadCaps.IPsecV1.Supported.IPv4Options = v64[4];
      *(_OWORD *)&v12->OffloadCaps.LsoV2.IPv4.Encapsulation = v64[5];
      *(_OWORD *)&v12->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v64[6];
      v12 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v12 + 128);
      *(_OWORD *)&v12[-1].OffloadCaps.UdpSegmentation.IPv6.MaxOffLoadSize = v64[7];
      *(_OWORD *)&v12->OffloadCaps.Header.Type = v64[8];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv4Receive + 4) = v64[9];
      *(_OWORD *)((char *)&v12->OffloadCaps.Checksum.IPv6Receive + 4) = v64[10];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v12->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v64[11];
      *(_OWORD *)&v12->OffloadCaps.IPsecV1.Supported.IPv4Options = v64[12];
      *(_QWORD *)&v12->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v64[13];
      v12->OffloadCaps.LsoV2.IPv4.MinSegmentCount = DWORD2(v64[13]);
      v51.StatusBuffer = v64;
      v51.Header = (_NDIS_OBJECT_HEADER)7340440;
      v51.SourceHandle = Miniport;
      v51.StatusCode = 1073872902;
      v51.StatusBufferSize = 220;
      ndisMReleaseStInLockAndSpinLock(Miniport, v48);
      ndisFIndicateStatusToFilter(a1, &v51);
      ndisMAcquireStInLockWithSpinLock(Miniport, &v48);
    }
    v13 = 1;
LABEL_10:
    MediaConnectState = Miniport->MediaConnectState;
    MediaDuplexState = Miniport->MediaDuplexState;
    XmitLinkSpeed = Miniport->XmitLinkSpeed;
    RcvLinkSpeed = Miniport->RcvLinkSpeed;
    v14 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( Miniport->MediaConnectState != MediaConnectStateConnected )
      v14 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v14;
    *((_DWORD *)&v51.Header + 1) = 0;
    v51.Header = (_NDIS_OBJECT_HEADER)7340440;
    memset(&v51.Guid, 0, 52);
    v51.StatusBuffer = &v56;
    memset(&v51.PortNumber, 0, 32);
    v51.SourceHandle = Miniport;
    v51.StatusCode = 1073807383;
    v51.StatusBufferSize = 40;
    ndisMReleaseStInLockAndSpinLock(Miniport, v48);
    ndisFIndicateStatusToFilter(a1, &v51);
    ndisMAcquireStInLockWithSpinLock(Miniport, &v48);
    TopHwTimestampCapabilities = Miniport->TopHwTimestampCapabilities;
    if ( TopHwTimestampCapabilities )
    {
      v52 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
      v53 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
      v54 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
      v55 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( a1->HwTimestampCapabilities
        || (v21 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopHwTimestampCapabilities),
            (a1->HwTimestampCapabilities = v21) != 0LL) )
      {
        if ( v13 )
        {
          *((_DWORD *)&v51.Header + 1) = 0;
          v51.Header = (_NDIS_OBJECT_HEADER)7340440;
          memset(&v51.Guid, 0, 52);
          v51.SourceHandle = Miniport;
          memset(&v51.PortNumber, 0, 32);
          v51.StatusCode = 1074073600;
          v51.StatusBuffer = &v52;
          v51.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v48);
          ndisFIndicateStatusToFilter(a1, &v51);
        }
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v48);
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, &v48);
    TopTimestampConfig = Miniport->TopTimestampConfig;
    if ( TopTimestampConfig )
    {
      v52 = *(_OWORD *)&TopTimestampConfig->Header.Type;
      v53 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
      v54 = *(_OWORD *)&TopTimestampConfig->Reserved2;
      v55 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
      if ( a1->HwTimestampCurrentConfig
        || (v47 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopTimestampConfig),
            (a1->HwTimestampCurrentConfig = v47) != 0LL) )
      {
        if ( v13 )
        {
          *((_DWORD *)&v51.Header + 1) = 0;
          v51.Header = (_NDIS_OBJECT_HEADER)7340440;
          memset(&v51.Guid, 0, 52);
          v51.SourceHandle = Miniport;
          memset(&v51.PortNumber, 0, 32);
          v51.StatusCode = 1074073601;
          v51.StatusBuffer = &v52;
          v51.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v48);
          ndisFIndicateStatusToFilter(a1, &v51);
        }
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v48);
    }
    goto LABEL_16;
  }
  v22 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  HigherFilter->LockThread = KeGetCurrentThread();
  v49 = v22;
  v48 = v22;
  if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
  {
    do
    {
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v23);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
      v48 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
    v49 = v23;
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  v24 = HigherFilter->Offload;
  if ( v24 )
  {
    v64[0] = *(_OWORD *)&v24->OffloadCaps.Header.Type;
    v64[1] = *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv4Receive + 4);
    v64[2] = *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv6Receive + 4);
    v64[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v24->OffloadCaps.LsoV1.IPv4 + 12);
    v64[4] = *(_OWORD *)&v24->OffloadCaps.IPsecV1.Supported.IPv4Options;
    v64[5] = *(_OWORD *)&v24->OffloadCaps.LsoV2.IPv4.Encapsulation;
    v64[6] = *(_OWORD *)&v24->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize;
    v37 = *(_OWORD *)&v24->OffloadCaps.IPsecV2.Encapsulation;
    p_UdpEsp = &v24->OffloadCaps.IPsecV2.UdpEsp;
    v64[7] = v37;
    v64[8] = *(_OWORD *)p_UdpEsp;
    v64[9] = *((_OWORD *)p_UdpEsp + 1);
    v64[10] = *((_OWORD *)p_UdpEsp + 2);
    v64[11] = *((_OWORD *)p_UdpEsp + 3);
    v64[12] = *((_OWORD *)p_UdpEsp + 4);
    *(_QWORD *)&v64[13] = *((_QWORD *)p_UdpEsp + 10);
    DWORD2(v64[13]) = p_UdpEsp[22];
    if ( a1->Offload || !(unsigned int)ndisFAllocateFilterOffload(a1) )
    {
      v39 = a1->Offload;
      *(_OWORD *)&v39->OffloadCaps.Header.Type = v64[0];
      *(_OWORD *)((char *)&v39->OffloadCaps.Checksum.IPv4Receive + 4) = v64[1];
      *(_OWORD *)((char *)&v39->OffloadCaps.Checksum.IPv6Receive + 4) = v64[2];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v39->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v64[3];
      *(_OWORD *)&v39->OffloadCaps.IPsecV1.Supported.IPv4Options = v64[4];
      *(_OWORD *)&v39->OffloadCaps.LsoV2.IPv4.Encapsulation = v64[5];
      *(_OWORD *)&v39->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v64[6];
      v39 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v39 + 128);
      *(_OWORD *)&v39[-1].OffloadCaps.UdpSegmentation.IPv6.MaxOffLoadSize = v64[7];
      *(_OWORD *)&v39->OffloadCaps.Header.Type = v64[8];
      *(_OWORD *)((char *)&v39->OffloadCaps.Checksum.IPv4Receive + 4) = v64[9];
      *(_OWORD *)((char *)&v39->OffloadCaps.Checksum.IPv6Receive + 4) = v64[10];
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v39->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v64[11];
      *(_OWORD *)&v39->OffloadCaps.IPsecV1.Supported.IPv4Options = v64[12];
      *(_QWORD *)&v39->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v64[13];
      v39->OffloadCaps.LsoV2.IPv4.MinSegmentCount = DWORD2(v64[13]);
      v40 = Miniport;
      if ( LowerFilter )
        v40 = LowerFilter;
      v51.Header = (_NDIS_OBJECT_HEADER)7340440;
      v51.SourceHandle = v40;
      v51.StatusBuffer = v64;
      v51.StatusCode = 1073872902;
      v51.StatusBufferSize = 220;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
      FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
      v41 = v49;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v41);
      ndisFIndicateStatusToFilter(a1, &v51);
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v48);
      if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
      {
        do
        {
          v42 = v48;
          HigherFilter->LockThread = 0LL;
          KeReleaseSpinLock(&HigherFilter->Lock, v42);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v48);
        }
        while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
        p_Lock = &a1->Lock;
      }
      FILTER_SET_FLAG(HigherFilter, 0x2000);
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
      v49 = v48;
    }
    else
    {
      v50 = 0;
    }
  }
  v25 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
  if ( HigherFilter->MediaConnectState != MediaConnectStateConnected )
    v25 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
  a1->FilterIndicateReceiveNetBufferListsHandler = v25;
  *(_OWORD *)&v51.Header.Type = 0LL;
  v26 = Miniport;
  v51.Header = (_NDIS_OBJECT_HEADER)7340440;
  if ( LowerFilter )
    v26 = LowerFilter;
  memset(&v51.Guid, 0, 52);
  v51.SourceHandle = v26;
  memset(&v51.PortNumber, 0, 32);
  v51.StatusBuffer = &v56;
  v51.StatusCode = 1073807383;
  v51.StatusBufferSize = 40;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
  FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
  v27 = v49;
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLock(&HigherFilter->Lock, v27);
  ndisFIndicateStatusToFilter(a1, &v51);
  v28 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  HigherFilter->LockThread = KeGetCurrentThread();
  v49 = v28;
  if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
  {
    do
    {
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v29);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
      KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
    v49 = v29;
    p_Lock = &a1->Lock;
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  HwTimestampCapabilities = HigherFilter->HwTimestampCapabilities;
  if ( HwTimestampCapabilities )
  {
    v52 = *(_OWORD *)&HwTimestampCapabilities->Header.Type;
    v53 = *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp;
    v54 = *(_OWORD *)&HwTimestampCapabilities->Reserved2;
    v55 = *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw;
    if ( a1->HwTimestampCapabilities
      || (v43 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCapabilities),
          (a1->HwTimestampCapabilities = v43) != 0LL) )
    {
      if ( v50 )
      {
        *(_OWORD *)&v51.Header.Type = 0LL;
        v44 = Miniport;
        if ( LowerFilter )
          v44 = LowerFilter;
        v51.Header = (_NDIS_OBJECT_HEADER)7340440;
        memset(&v51.Guid, 0, 52);
        v51.SourceHandle = v44;
        memset(&v51.PortNumber, 0, 32);
        v51.StatusBuffer = &v52;
        v51.StatusCode = 1074073600;
        v51.StatusBufferSize = 56;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
        FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
        v45 = v49;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v45);
        ndisFIndicateStatusToFilter(a1, &v51);
      }
    }
    else
    {
      v50 = 0;
    }
  }
  else
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
    FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
    v31 = v49;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v31);
  }
  v32 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
  HigherFilter->LockThread = KeGetCurrentThread();
  v49 = v32;
  if ( FILTER_TEST_FLAG(HigherFilter, 0x2000) )
  {
    do
    {
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v33);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
      KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    while ( FILTER_TEST_FLAG(HigherFilter, 0x2000) );
    v49 = v33;
    p_Lock = &a1->Lock;
  }
  FILTER_SET_FLAG(HigherFilter, 0x2000);
  HigherFilter->LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
  HwTimestampCurrentConfig = HigherFilter->HwTimestampCurrentConfig;
  if ( HwTimestampCurrentConfig )
  {
    v52 = *(_OWORD *)&HwTimestampCurrentConfig->Header.Type;
    v53 = *(_OWORD *)&HwTimestampCurrentConfig->CrossTimestamp;
    v54 = *(_OWORD *)&HwTimestampCurrentConfig->Reserved2;
    v55 = *(_QWORD *)&HwTimestampCurrentConfig->TimestampFlags.AllReceiveHw;
    if ( a1->HwTimestampCurrentConfig
      || (v36 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCurrentConfig),
          (a1->HwTimestampCurrentConfig = v36) != 0LL) )
    {
      if ( v50 )
      {
        *(_OWORD *)&v51.Header.Type = 0LL;
        *(_OWORD *)&v51.StatusBuffer = 0LL;
        if ( LowerFilter )
          Miniport = (_NDIS_MINIPORT_BLOCK *)LowerFilter;
        v51.Header = (_NDIS_OBJECT_HEADER)7340440;
        memset(&v51.PortNumber, 0, 32);
        v51.SourceHandle = Miniport;
        v51.StatusCode = 1074073601;
        memset(&v51.Guid.Data2, 0, 48);
        v51.StatusBuffer = &v52;
        v51.StatusBufferSize = 56;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
        FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
        v46 = v49;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v46);
        ndisFIndicateStatusToFilter(a1, &v51);
      }
    }
  }
  else
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilter);
    FILTER_CLEAR_FLAG(HigherFilter, 0x2000u);
    v35 = v49;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v35);
  }
LABEL_16:
  XState = a1->XState;
  if ( a1->MediaConnectState == MediaConnectStateConnected )
  {
    v19 = ndisFilterSendNetBufferLists;
    a1->XState = XState & 0xFE;
    v18 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    a1->XState = XState | 1;
    ndisUpdateFilterFakeStatus(a1);
    v18 = NdisQueryOffloadState;
    v19 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
  }
  a1->FilterSendNetBufferListsHandler = v19;
  a1->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v18;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(a1);
  FILTER_CLEAR_FLAG(a1, 0x2000u);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, i);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      1,
      76,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  }
}
