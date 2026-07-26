/*
 * XREFs of ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1400077C0 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001CBA0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisIfAddIfStackEntry @ 0x14001D270 (NdisIfAddIfStackEntry.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140023270 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140024850 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140025790 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x14004D810 (-ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D9E0 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400546E0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x140054A80 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055000 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140058560 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140061B40 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140063940 (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qqZddZD @ 0x140063F20 (WPP_RECORDER_SF_qqZddZD.c)
 *     WPP_RECORDER_SF_qqZ @ 0x14006ABC0 (WPP_RECORDER_SF_qqZ.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006C3F0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006E680 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x14006F510 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400713F0 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140071D40 (-ndisQueueFilterOnDriver@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x140076A00 (-ndisOpenRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400790C0 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_N.c)
 *     McTemplateK0jqxjqxdd_EtwWriteTransfer @ 0x14008C5A0 (McTemplateK0jqxjqxdd_EtwWriteTransfer.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008D0D0 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z @ 0x14008DD50 (-EthAddConversionFilter@@YAEIPEBEPEAU_X_FILTER@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ndisRegisterFilterTriageData @ 0x14009A5D0 (ndisRegisterFilterTriageData.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14009C1A0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x14009C1C0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     NdisIfDeleteIfStackEntry @ 0x1400CE0B0 (NdisIfDeleteIfStackEntry.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1401554C0 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x140156270 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x140163390 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x140166980 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ndisPktMonFilterRegister @ 0x140166B30 (ndisPktMonFilterRegister.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140167120 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z @ 0x1401675D0 (-ndisFInvokeAttach@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_ATTACH_PARAMETERS@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168E20 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140169910 (-ndisInitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x14016A810 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x14016B050 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisAttachFilterInner(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        int a3,
        struct NDIS_BIND_FILTER_LINK *a4)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rsi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int Data3; // edi
  int v18; // r10d
  int v19; // r11d
  int v20; // ebx
  int v21; // r13d
  struct _NDIS_MINIPORT_BLOCK *v22; // rdi
  struct NDIS_BIND_FILTER_LINK *v23; // r13
  struct _NDIS_FILTER_DRIVER_BLOCK *v24; // r15
  unsigned int FilterAdapterRegistry; // r14d
  __int64 v26; // rsi
  int v27; // edx
  unsigned __int8 v28; // r8
  __int64 Pool2; // rax
  char v30; // r12
  struct Rtl::KString *v31; // rax
  void *v32; // rcx
  __int64 v33; // r14
  _WORD *v34; // rax
  __int64 Watchdog; // rax
  struct NDISWATCHDOG__ *v36; // rcx
  __int64 v37; // rbx
  const struct _NDIS_FILTER_BLOCK *v38; // rcx
  int v39; // edx
  struct _NDIS_FILTER_BLOCK *v40; // rcx
  KIRQL v41; // r8
  struct _NDIS_FILTER_BLOCK *v42; // r13
  struct _NDIS_FILTER_BLOCK *v43; // rbx
  KIRQL v44; // al
  struct _NDIS_MINIPORT_BLOCK *BaseMiniport; // r12
  KIRQL v46; // al
  __int64 v47; // rax
  unsigned __int8 v48; // al
  UCHAR v49; // r11
  __int64 v50; // r8
  __int64 v51; // rcx
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediumType; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // r10
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rdx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // r9
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // r8
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  void (__stdcall *v64)(PVOID); // rax
  void *v65; // rcx
  void *v66; // rdx
  _NDIS_MEDIUM MediaType; // eax
  const GUID *p_InterfaceGuid; // r9
  const GUID *v69; // r8
  __int64 v70; // r9
  const struct _NDIS_FILTER_BLOCK *v71; // rcx
  int v72; // edx
  struct _NDIS_FILTER_BLOCK *v73; // rcx
  KIRQL v74; // r8
  bool v75; // zf
  int v76; // ecx
  char MiniportMediaType; // r10
  __int64 v78; // rcx
  __int64 v79; // rax
  NET_IFINDEX IfIndex; // edx
  __int64 v81; // rax
  NET_IFINDEX v82; // edx
  __int64 v83; // rcx
  KIRQL v84; // bl
  __int64 v85; // r13
  KIRQL v86; // al
  KIRQL v87; // bl
  KIRQL v88; // bl
  struct _NDIS_FILTER_BLOCK *v89; // rcx
  struct _NDIS_FILTER_BLOCK *v90; // rcx
  KIRQL v91; // r8
  _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType; // eax
  _NDIS_MEDIUM v93; // ecx
  __int64 v94; // rax
  KIRQL v95; // r8
  _NDIS_MEDIUM v96; // ecx
  _NDIS_PHYSICAL_MEDIUM v97; // eax
  PVOID v98; // r12
  char *v99; // rbx
  int v100; // edx
  __int64 v101; // rcx
  NTSTATUS v102; // ebx
  int v103; // edx
  struct _NDIS_MINIPORT_BLOCK *v104; // rdx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-130h]
  int UserDataCounta; // [rsp+20h] [rbp-130h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-128h]
  char v108[8]; // [rsp+30h] [rbp-120h]
  char v109[8]; // [rsp+30h] [rbp-120h]
  char v110[8]; // [rsp+38h] [rbp-118h]
  char v111[8]; // [rsp+38h] [rbp-118h]
  char v112[8]; // [rsp+40h] [rbp-110h]
  int v113; // [rsp+50h] [rbp-100h]
  int v114; // [rsp+80h] [rbp-D0h]
  char v115; // [rsp+D0h] [rbp-80h]
  char v116; // [rsp+D1h] [rbp-7Fh]
  ULONG Data2; // [rsp+E0h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v119; // [rsp+E8h] [rbp-68h]
  int v120; // [rsp+F0h] [rbp-60h]
  int v121; // [rsp+F4h] [rbp-5Ch]
  int v122; // [rsp+F8h] [rbp-58h]
  int v123; // [rsp+FCh] [rbp-54h]
  int v124; // [rsp+100h] [rbp-50h]
  int v125; // [rsp+104h] [rbp-4Ch]
  int v126; // [rsp+108h] [rbp-48h]
  int v127; // [rsp+10Ch] [rbp-44h]
  int v128; // [rsp+110h] [rbp-40h] BYREF
  char v129[8]; // [rsp+118h] [rbp-38h]
  struct _NDIS_FILTER_DRIVER_BLOCK *v130; // [rsp+120h] [rbp-30h]
  struct _NDIS_FILTER_BLOCK *v131; // [rsp+128h] [rbp-28h] BYREF
  struct _NDIS_FILTER_BLOCK *v132; // [rsp+130h] [rbp-20h] BYREF
  PVOID WnodeEventItem; // [rsp+138h] [rbp-18h] BYREF
  struct _NDIS_FILTER_ATTACH_PARAMETERS v134; // [rsp+140h] [rbp-10h] BYREF
  struct _UNICODE_STRING v135[10]; // [rsp+220h] [rbp+D0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+2C0h] [rbp+170h] BYREF
  _EVENT_DATA_DESCRIPTOR v137; // [rsp+2D0h] [rbp+180h] BYREF
  ULONG *p_Data2; // [rsp+2E0h] [rbp+190h]
  __int64 v139; // [rsp+2E8h] [rbp+198h]
  wchar_t v140[88]; // [rsp+2F0h] [rbp+1A0h] BYREF

  v120 = a3;
  v130 = a2;
  v119 = a1;
  *(_QWORD *)v129 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v116 = 0;
  memset(&v134, 0, sizeof(v134));
  v128 = 0;
  v115 = 0;
  WnodeEventItem = 0LL;
  if ( !ndisReferenceFilterDriver(a2, 0) )
    return 3221291010LL;
  if ( !(unsigned __int8)ndisReferenceMiniport(a1, 0x27u) )
  {
    ndisDereferenceFilterDriver(a2, 0, 0);
    return 3221291010LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x18u,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)a2,
      (char)a1,
      &a2->DefaultFilterCharacteristics.FriendlyName.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  p = a4->BindDriver._p;
  v9 = a1->InterfaceGuid.Data4[7];
  v10 = a1->InterfaceGuid.Data4[6];
  v11 = a1->InterfaceGuid.Data4[5];
  v12 = p->_t.Guid.Data4[7];
  v13 = p->_t.Guid.Data4[6];
  v14 = p->_t.Guid.Data4[5];
  v15 = p->_t.Guid.Data4[4];
  v16 = p->_t.Guid.Data4[3];
  Data3 = p->_t.Guid.Data3;
  v18 = p->_t.Guid.Data4[2];
  v19 = p->_t.Guid.Data4[1];
  v20 = p->_t.Guid.Data4[0];
  v21 = a1->InterfaceGuid.Data4[4];
  v121 = v9;
  v122 = v10;
  *(_QWORD *)&EventDescriptor.Id = p;
  LODWORD(p) = p->_t.Guid.Data2;
  v123 = v119->InterfaceGuid.Data4[3];
  v124 = v119->InterfaceGuid.Data4[2];
  v125 = v119->InterfaceGuid.Data4[1];
  v126 = v119->InterfaceGuid.Data4[0];
  v127 = v119->InterfaceGuid.Data3;
  Data2 = v119->InterfaceGuid.Data2;
  v114 = Data3;
  v22 = v119;
  v113 = v21;
  *(_DWORD *)v110 = v125;
  *(_DWORD *)v108 = v126;
  LODWORD(UserData) = v127;
  UserDataCount[0] = Data2;
  v23 = a4;
  if ( (int)RtlStringCbPrintfW(
              v140,
              0xA8uLL,
              L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}-%04u",
              v119->InterfaceGuid.Data1,
              *(_QWORD *)UserDataCount,
              UserData,
              *(_QWORD *)v108,
              *(_QWORD *)v110,
              v124,
              v123,
              v113,
              v11,
              v10,
              v9,
              *(_DWORD *)(*(_QWORD *)&EventDescriptor.Id + 24LL),
              (_DWORD)p,
              v114,
              v20,
              v19,
              v18,
              v16,
              v15,
              v14,
              v13,
              v12,
              v120) >= 0 )
  {
    ndisFindAdjacentFilters(v119, a4, &v132, &v131);
    v24 = v130;
    v28 = v130->DefaultFilterCharacteristics.MajorNdisVersion > 6u
       || v130->DefaultFilterCharacteristics.MajorNdisVersion == 6
       && v130->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u;
    FilterAdapterRegistry = ndisCreateFilterAdapterRegistry(&v130->DefaultFilterCharacteristics.ServiceName, v119, v28);
    if ( FilterAdapterRegistry )
      goto LABEL_9;
    if ( v119->MajorNdisVersion < 6u && (v119->LinkStateIndicationFlags & 1) == 0 )
      ndisMDoMiniportOp(v119, 1, 0x10114u, &v128, 4u, 1u, 1u);
    if ( !ndisReferenceFilterDriver(v24, 3u) )
    {
      FilterAdapterRegistry = -1073676282;
      goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(64LL, 1424LL, 1650869326LL);
    v26 = Pool2;
    if ( !Pool2 )
    {
      FilterAdapterRegistry = -1073741670;
      ndisDereferenceFilterDriver(v24, 0, 3u);
      goto LABEL_10;
    }
    *(_QWORD *)(Pool2 + 184) = -1LL;
    v30 = 0;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 960) = 0LL;
    *(_DWORD *)(Pool2 + 968) = 0;
    *(_QWORD *)(Pool2 + 972) = 0LL;
    *(_DWORD *)(Pool2 + 980) = 0;
    *(_OWORD *)(Pool2 + 984) = 0LL;
    *(_OWORD *)(Pool2 + 1000) = 0LL;
    *(_OWORD *)(Pool2 + 1016) = 0LL;
    *(_OWORD *)(Pool2 + 1032) = 0LL;
    *(_OWORD *)(Pool2 + 1048) = 0LL;
    *(_OWORD *)(Pool2 + 1064) = 0LL;
    *(_OWORD *)(Pool2 + 1080) = 0LL;
    *(_OWORD *)(Pool2 + 1096) = 0LL;
    *(_DWORD *)(Pool2 + 1112) = 0;
    *(_OWORD *)(Pool2 + 1116) = 0LL;
    *(_OWORD *)(Pool2 + 1132) = 0LL;
    *(_OWORD *)(Pool2 + 1148) = 0LL;
    *(_OWORD *)(Pool2 + 1164) = 0LL;
    *(_OWORD *)(Pool2 + 1180) = 0LL;
    *(_OWORD *)(Pool2 + 1196) = 0LL;
    *(_OWORD *)(Pool2 + 1212) = 0LL;
    *(_OWORD *)(Pool2 + 1228) = 0LL;
    *(_DWORD *)(Pool2 + 1244) = 0;
    *(_OWORD *)(Pool2 + 1248) = 0LL;
    *(_OWORD *)(Pool2 + 1264) = 0LL;
    *(_OWORD *)(Pool2 + 1280) = 0LL;
    *(_OWORD *)(Pool2 + 1296) = 0LL;
    *(_OWORD *)(Pool2 + 1312) = 0LL;
    *(_DWORD *)(Pool2 + 1328) = 0;
    *(_OWORD *)(Pool2 + 1332) = 0LL;
    *(_OWORD *)(Pool2 + 1348) = 0LL;
    *(_OWORD *)(Pool2 + 1364) = 0LL;
    *(_OWORD *)(Pool2 + 1380) = 0LL;
    *(_OWORD *)(Pool2 + 1396) = 0LL;
    *(_DWORD *)(Pool2 + 1412) = 0;
    *(_QWORD *)(Pool2 + 1416) = 0LL;
    *(_DWORD *)Pool2 = 93323525;
    *(_QWORD *)(Pool2 + 16) = v24;
    if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    {
      ndisInitializeRef((struct _REFERENCE_EX *)(v26 + 72), 3u);
      ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v26 + 312));
      ndisCloseRef((PKSPIN_LOCK)(v26 + 312));
    }
    v31 = Rtl::KString::Initialize(v140);
    v32 = *(void **)(v26 + 40);
    *(_QWORD *)(v26 + 40) = v31;
    if ( v32 )
      ExFreePoolWithTag(v32, 0x7274534Bu);
    if ( !*(_QWORD *)(v26 + 40)
      || (v33 = (unsigned __int16)(v24->DefaultFilterCharacteristics.FriendlyName.Length
                                 + 14
                                 + v22->pAdapterInstanceName->Length),
          v34 = (_WORD *)ExAllocatePool2(66LL, v33 + 16, 1953711182LL),
          (*(_QWORD *)(v26 + 48) = v34) == 0LL) )
    {
      FilterAdapterRegistry = -1073741670;
      goto LABEL_201;
    }
    *v34 = 0;
    *(_WORD *)(*(_QWORD *)(v26 + 48) + 2LL) = v33;
    *(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) = *(_QWORD *)(v26 + 48) + 16LL;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v26 + 48), v22->pAdapterInstanceName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 45;
    **(_WORD **)(v26 + 48) += 2;
    RtlAppendUnicodeStringToString(*(PUNICODE_STRING *)(v26 + 48), &v24->DefaultFilterCharacteristics.FriendlyName);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 45;
    **(_WORD **)(v26 + 48) += 2;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2
                                                         * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 40) + 8LL) + 2 * (((unsigned __int64)**(unsigned __int16 **)(v26 + 40) - 8) >> 1));
    **(_WORD **)(v26 + 48) += 8;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 48) + 8LL) + 2 * ((unsigned __int64)**(unsigned __int16 **)(v26 + 48) >> 1)) = 0;
    *(_QWORD *)(v26 + 648) = NdisNblTrackerRegisterComponent(1, v26, *(_QWORD *)(v26 + 48));
    Watchdog = ndisAllocateWatchdog();
    v36 = *(struct NDISWATCHDOG__ **)(v26 + 184);
    v37 = Watchdog;
    if ( v36 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v36);
    *(_QWORD *)(v26 + 184) = v37;
    KeInitializeSpinLock((PKSPIN_LOCK)(v26 + 144));
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
    *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
    FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
    if ( FILTER_TEST_FLAG(v38, 256) )
      FILTER_CLEAR_FLAG(v40, v39);
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
    *(_QWORD *)(v26 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v41);
    *(_BYTE *)(v26 + 64) = 0;
    if ( !(unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    {
      ndisInitializeRef((struct _REFERENCE_EX *)(v26 + 72), 3u);
      ndisInitializeZeroBasedRef((struct _REFERENCE_EX *)(v26 + 312));
      ndisCloseRef((PKSPIN_LOCK)(v26 + 312));
    }
    if ( ndisDatapathVerifierMode == 1 )
    {
      if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
        || !ndisDriverVerifierNdisFlagEnabled() )
      {
LABEL_48:
        if ( v22->MajorNdisVersion >= 6u )
        {
          if ( ndisNblContextVerifierMode == 1 )
          {
            if ( !MmIsDriverVerifyingByAddress(*(PVOID *)(*(_QWORD *)(v26 + 16) + 176LL))
              || !ndisDriverVerifierNdisFlagEnabled() )
            {
              goto LABEL_55;
            }
          }
          else if ( ndisNblContextVerifierMode != 2 )
          {
            goto LABEL_55;
          }
          *(_OWORD *)(v26 + 928) = 0LL;
          *(_OWORD *)(v26 + 944) = 0LL;
          FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 1024);
        }
LABEL_55:
        *(_QWORD *)(v26 + 584) = v24->DefaultFilterCharacteristics.SendNetBufferListsHandler;
        *(_QWORD *)(v26 + 592) = v24->DefaultFilterCharacteristics.SendNetBufferListsCompleteHandler;
        *(_QWORD *)(v26 + 608) = v24->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler;
        *(_QWORD *)(v26 + 616) = v24->DefaultFilterCharacteristics.ReturnNetBufferListsHandler;
        *(_QWORD *)(v26 + 600) = v24->DefaultFilterCharacteristics.CancelSendNetBufferListsHandler;
        *(_QWORD *)(v26 + 168) = v26 + 160;
        *(_QWORD *)(v26 + 160) = v26 + 160;
        FilterAdapterRegistry = ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
                                  (struct _NDIS_FILTER_BLOCK *)v26,
                                  (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)(v26 + 576),
                                  0);
        if ( FilterAdapterRegistry )
          goto LABEL_201;
        v42 = v131;
        v43 = v132;
        *(_QWORD *)(v26 + 208) = ndisStackExpansionFallbackWorker;
        *(_QWORD *)(v26 + 216) = v26;
        *(_QWORD *)(v26 + 192) = 0LL;
        *(_QWORD *)(v26 + 112) = v42;
        *(_QWORD *)(v26 + 120) = v43;
        if ( !v42 && !v43 && v22->HighestFilter )
        {
          v23 = a4;
          FilterAdapterRegistry = -1073741823;
          goto LABEL_201;
        }
        v44 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
        if ( v43 )
          v43->LowerFilter = (_NDIS_FILTER_BLOCK *)v26;
        else
          v22->HighestFilter = (_NDIS_FILTER_BLOCK *)v26;
        if ( v42 )
          v42->HigherFilter = (_NDIS_FILTER_BLOCK *)v26;
        else
          v22->LowestFilter = (_NDIS_FILTER_BLOCK *)v26;
        *(_QWORD *)(v26 + 32) = v22;
        v22->MiniportThread = 0LL;
        KeReleaseSpinLock(&v22->Lock, v44);
        v116 = 1;
        BaseMiniport = v22;
        if ( v22->BaseMiniport )
          BaseMiniport = v22->BaseMiniport;
        v46 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
        *(_QWORD *)(v26 + 104) = ndisGlobalFilterList;
        ndisGlobalFilterList = (struct _NDIS_FILTER_BLOCK *)v26;
        KeReleaseSpinLock(&ndisGlobalFilterListLock, v46);
        if ( !(unsigned __int8)ndisQueueFilterOnDriver((struct _NDIS_FILTER_BLOCK *)v26, v24) )
        {
          FilterAdapterRegistry = -1073676286;
LABEL_70:
          v23 = a4;
          v30 = 0;
          goto LABEL_201;
        }
        if ( (v24->Bind._p->_t.FilterBindFlags & 2) != 0 )
        {
          FilterAdapterRegistry = ndisCreateFilterInstanceRegistry(
                                    &v24->DefaultFilterCharacteristics.ServiceName,
                                    (struct _NDIS_FILTER_BLOCK *)v26,
                                    v22);
          if ( FilterAdapterRegistry )
            goto LABEL_70;
        }
        *(_QWORD *)(v26 + 752) = a4;
        *(_BYTE *)(v26 + 64) = 1;
        Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
        Ndis::BindState::AddBindContext(&a4->BindState, (void *)v26);
        Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
        memset(&v134, 0, sizeof(v134));
        v47 = *(_QWORD *)(v26 + 16);
        if ( *(_BYTE *)(v47 + 100) > 6u )
          goto LABEL_80;
        v48 = *(_BYTE *)(v47 + 101);
        if ( !v48 )
        {
          v49 = 1;
          v134.Header.Size = 164;
          goto LABEL_81;
        }
        if ( v48 < 0x14u )
        {
          v49 = 2;
          v134.Header.Size = 176;
          goto LABEL_81;
        }
        if ( v48 >= 0x1Eu )
        {
LABEL_80:
          v134.Header.Size = 224;
          v49 = 4;
        }
        else
        {
          v49 = 3;
          v134.Header.Size = 200;
        }
LABEL_81:
        v50 = *(_QWORD *)(v26 + 112);
        v134.Header.Revision = v49;
        v134.Header.Type = -103;
        v134.BaseMiniportIfIndex = BaseMiniport->IfIndex;
        v134.BaseMiniportNetLuid.Value = BaseMiniport->NetLuid.Value;
        v134.BaseMiniportName = &BaseMiniport->MiniportName;
        v134.BaseMiniportInstanceName = BaseMiniport->pAdapterInstanceName;
        if ( v50 )
        {
          v134.LowerIfIndex = *(_DWORD *)(v50 + 680);
          v134.LowerIfNetLuid.Value = *(_QWORD *)(*(_QWORD *)(v50 + 688) + 1312LL);
        }
        else
        {
          v51 = *(_QWORD *)(v26 + 32);
          v134.LowerIfIndex = *(_DWORD *)(v51 + 4056);
          v134.LowerIfNetLuid.Value = *(_QWORD *)(v51 + 4024);
        }
        v134.FilterModuleGuidName = *(_UNICODE_STRING **)(v26 + 40);
        v134.MiniportMediaSpecificAttributes = v22->MediaSpecificAttributes;
        if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
        {
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
          v134.MiniportMediaType = NdisMediumWan;
        }
        else if ( v42 )
        {
          v134.MiniportMediaType = v42->MediaType;
          MiniportPhysicalMediumType = v42->PhysicalMediaType;
        }
        else
        {
          v134.MiniportMediaType = v22->MiniportMediaType;
          MiniportPhysicalMediumType = v22->MiniportPhysicalMediumType;
        }
        v134.MiniportPhysicalMediaType = MiniportPhysicalMediumType;
        if ( v50 )
        {
          v134.MediaConnectState = *(_DWORD *)(v50 + 380);
          v134.MediaDuplexState = *(_DWORD *)(v50 + 384);
          v134.XmitLinkSpeed = *(_QWORD *)(v50 + 392);
          v134.RcvLinkSpeed = *(_QWORD *)(v50 + 400);
          if ( *(_QWORD *)(v50 + 656) )
          {
            v134.DefaultOffloadConfiguration = *(_NDIS_OFFLOAD **)(v50 + 656);
LABEL_96:
            HDSplitCurrentConfig = v134.HDSplitCurrentConfig;
            if ( v22->HDSplitCurrentConfig )
              HDSplitCurrentConfig = v22->HDSplitCurrentConfig;
            v134.HDSplitCurrentConfig = HDSplitCurrentConfig;
            if ( v50 )
            {
              SriovHwCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v50 + 960);
              SriovCurrentCapabilities = (_NDIS_SRIOV_CAPABILITIES *)(v50 + 972);
              NicSwitchHwCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v50 + 984);
              NicSwitchCurrentCapabilities = (_NDIS_NIC_SWITCH_CAPABILITIES *)(v50 + 1116);
              ReceiveFilterHwCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v50 + 1248);
              ReceiveFilterCurrentCapabilities = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)(v50 + 1332);
              if ( !SriovHwCapabilities->Header.Size )
                SriovHwCapabilities = 0LL;
              if ( !SriovCurrentCapabilities->Header.Size )
                SriovCurrentCapabilities = 0LL;
              if ( !NicSwitchHwCapabilities->Header.Size )
                NicSwitchHwCapabilities = 0LL;
              if ( !NicSwitchCurrentCapabilities->Header.Size )
                NicSwitchCurrentCapabilities = 0LL;
              if ( !ReceiveFilterHwCapabilities->Header.Size )
                ReceiveFilterHwCapabilities = 0LL;
              if ( !ReceiveFilterCurrentCapabilities->Header.Size )
                ReceiveFilterCurrentCapabilities = 0LL;
            }
            else
            {
              SriovHwCapabilities = v22->SriovHwCapabilities;
              SriovCurrentCapabilities = v22->SriovCurrentCapabilities;
              NicSwitchHwCapabilities = v22->NicSwitchHwCapabilities;
              NicSwitchCurrentCapabilities = v22->NicSwitchCurrentCapabilities;
              ReceiveFilterHwCapabilities = v22->ReceiveFilterHwCapabilities;
              ReceiveFilterCurrentCapabilities = v22->ReceiveFilterCurrentCapabilities;
            }
            if ( SriovHwCapabilities )
            {
              *(_QWORD *)(v26 + 960) = *(_QWORD *)&SriovHwCapabilities->Header.Type;
              *(_DWORD *)(v26 + 968) = SriovHwCapabilities->SriovCapabilities;
            }
            if ( SriovCurrentCapabilities )
            {
              *(_QWORD *)(v26 + 972) = *(_QWORD *)&SriovCurrentCapabilities->Header.Type;
              *(_DWORD *)(v26 + 980) = SriovCurrentCapabilities->SriovCapabilities;
            }
            if ( NicSwitchHwCapabilities )
            {
              *(_OWORD *)(v26 + 984) = *(_OWORD *)&NicSwitchHwCapabilities->Header.Type;
              *(_OWORD *)(v26 + 1000) = *(_OWORD *)&NicSwitchHwCapabilities->NumMacAddressesPerPort;
              *(_OWORD *)(v26 + 1016) = *(_OWORD *)&NicSwitchHwCapabilities->NicSwitchCapabilities;
              *(_OWORD *)(v26 + 1032) = *(_OWORD *)&NicSwitchHwCapabilities->MaxNumVFs;
              *(_OWORD *)(v26 + 1048) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved7;
              *(_OWORD *)(v26 + 1064) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved10;
              *(_OWORD *)(v26 + 1080) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved13;
              *(_OWORD *)(v26 + 1096) = *(_OWORD *)&NicSwitchHwCapabilities->NdisReserved17;
              *(_DWORD *)(v26 + 1112) = NicSwitchHwCapabilities->MaxNumQueuePairsForDefaultVPort;
            }
            if ( NicSwitchCurrentCapabilities )
            {
              *(_OWORD *)(v26 + 1116) = *(_OWORD *)&NicSwitchCurrentCapabilities->Header.Type;
              *(_OWORD *)(v26 + 1132) = *(_OWORD *)&NicSwitchCurrentCapabilities->NumMacAddressesPerPort;
              *(_OWORD *)(v26 + 1148) = *(_OWORD *)&NicSwitchCurrentCapabilities->NicSwitchCapabilities;
              *(_OWORD *)(v26 + 1164) = *(_OWORD *)&NicSwitchCurrentCapabilities->MaxNumVFs;
              *(_OWORD *)(v26 + 1180) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved7;
              *(_OWORD *)(v26 + 1196) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved10;
              *(_OWORD *)(v26 + 1212) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved13;
              *(_OWORD *)(v26 + 1228) = *(_OWORD *)&NicSwitchCurrentCapabilities->NdisReserved17;
              *(_DWORD *)(v26 + 1244) = NicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort;
            }
            if ( ReceiveFilterHwCapabilities )
            {
              *(_OWORD *)(v26 + 1248) = *(_OWORD *)&ReceiveFilterHwCapabilities->Header.Type;
              *(_OWORD *)(v26 + 1264) = *(_OWORD *)&ReceiveFilterHwCapabilities->NumQueues;
              *(_OWORD *)(v26 + 1280) = *(_OWORD *)&ReceiveFilterHwCapabilities->SupportedMacHeaderFields;
              *(_OWORD *)(v26 + 1296) = *(_OWORD *)&ReceiveFilterHwCapabilities->MinLookaheadSplitSize;
              *(_OWORD *)(v26 + 1312) = *(_OWORD *)&ReceiveFilterHwCapabilities->SupportedIPv6HeaderFields;
              *(_DWORD *)(v26 + 1328) = ReceiveFilterHwCapabilities->NdisReserved;
            }
            if ( ReceiveFilterCurrentCapabilities )
            {
              *(_OWORD *)(v26 + 1332) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->Header.Type;
              *(_OWORD *)(v26 + 1348) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->NumQueues;
              *(_OWORD *)(v26 + 1364) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->SupportedMacHeaderFields;
              *(_OWORD *)(v26 + 1380) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->MinLookaheadSplitSize;
              *(_OWORD *)(v26 + 1396) = *(_OWORD *)&ReceiveFilterCurrentCapabilities->SupportedIPv6HeaderFields;
              *(_DWORD *)(v26 + 1412) = ReceiveFilterCurrentCapabilities->NdisReserved;
              v134.ReceiveFilterCapabilities = ReceiveFilterCurrentCapabilities;
            }
            NicSwitchCapabilities = v134.NicSwitchCapabilities;
            if ( NicSwitchCurrentCapabilities )
              NicSwitchCapabilities = NicSwitchCurrentCapabilities;
            v134.NicSwitchCapabilities = NicSwitchCapabilities;
            if ( v49 >= 4u )
            {
              if ( SriovCurrentCapabilities )
              {
                v134.SriovCapabilities = SriovCurrentCapabilities;
                if ( (unsigned int)ndisIovGetNicSwitchList(
                                     v22,
                                     NicSwitchCurrentCapabilities,
                                     SriovCurrentCapabilities,
                                     &v134.NicSwitchArray) )
                {
                  v23 = a4;
                  FilterAdapterRegistry = -1073741823;
                  v30 = 0;
                  goto LABEL_201;
                }
              }
              v134.BaseMiniportIfConnectorPresent = v22->IfBlock->ifConnectorPresent;
            }
            IfBlock = v22->IfBlock;
            v134.MiniportPhysicalDeviceObject = v22->PhysicalDeviceObject;
            v134.MacAddressLength = IfBlock->ifPhysAddress.Length;
            memmove(v134.CurrentMacAddress, IfBlock->ifPhysAddress.Address, v134.MacAddressLength);
            MediaConnectState = v134.MediaConnectState;
            *(_DWORD *)(v26 + 348) = v134.MediaDuplexState;
            *(_QWORD *)(v26 + 352) = v134.XmitLinkSpeed;
            *(_QWORD *)(v26 + 360) = v134.RcvLinkSpeed;
            *(_DWORD *)(v26 + 344) = MediaConnectState;
            if ( MediaConnectState == MediaConnectStateConnected )
            {
              v64 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
              v65 = ndisFilterIndicateReceiveNetBufferLists;
              v66 = ndisFilterSendNetBufferLists;
            }
            else
            {
              ndisFilterXStateSetFlag((struct _NDIS_FILTER_BLOCK *)v26, 1);
              v64 = NdisQueryOffloadState;
              v65 = ndisFakeFilterReceiveHandler;
              v66 = ndisFakeFilterSendHandler;
            }
            *(_QWORD *)(v26 + 624) = v66;
            *(_QWORD *)(v26 + 632) = v65;
            *(_QWORD *)(v26 + 640) = v64;
            if ( (v22->MacOptions & 0x80000001) == 0x80000001 )
              MediaType = v22->MediaType;
            else
              MediaType = v134.MiniportMediaType;
            *(_DWORD *)(v26 + 336) = MediaType;
            *(_DWORD *)(v26 + 340) = v134.MiniportPhysicalMediaType;
            FilterAdapterRegistry = ndisIfCreateFilterInterface((struct _NDIS_FILTER_BLOCK *)v26);
            if ( FilterAdapterRegistry )
              goto LABEL_70;
            if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
            {
              FilterAdapterRegistry = ndisRegisterFilterTriageData(v26);
              if ( FilterAdapterRegistry )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v109 = FilterAdapterRegistry;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0xDu,
                    0x19u,
                    (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
                    v26,
                    *(_QWORD *)v109);
                  v23 = a4;
                  v30 = 0;
                  goto LABEL_201;
                }
                goto LABEL_70;
              }
            }
            if ( (byte_14011D043 & 1) != 0 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(_QWORD *)(v26 + 40),
                v26 + 664,
                v26 + 664,
                *(_BYTE *)(v26 + 64),
                6,
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
            {
              p_InterfaceGuid = &v22->InterfaceGuid;
              v69 = (const GUID *)(v26 + 664);
              Data2 = 0;
              EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
              if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
              {
                *(_QWORD *)&v137.Size = 16LL;
                v137.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
                p_Data2 = &Data2;
                v139 = 4LL;
                EtwWriteTransfer(
                  Microsoft_Windows_Networking_CorrelationHandle,
                  &EventDescriptor,
                  v69,
                  p_InterfaceGuid,
                  2u,
                  &v137);
              }
              else
              {
                EtwWriteTransfer(
                  Microsoft_Windows_Networking_CorrelationHandle,
                  &EventDescriptor,
                  v69,
                  p_InterfaceGuid,
                  0,
                  0LL);
              }
            }
            v134.IfIndex = *(_DWORD *)(v26 + 680);
            v30 = 1;
            v134.NetLuid.Value = *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1312LL);
            FilterAdapterRegistry = ndisFInvokeAttach((struct _NDIS_FILTER_BLOCK *)v26, &v134);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              *(_QWORD *)v111 = &v24->DefaultFilterCharacteristics.FriendlyName;
              WPP_RECORDER_SF_qqZddZD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24->DefaultFilterCharacteristics.MajorNdisVersion,
                (__int64)&v24->DefaultFilterCharacteristics.FriendlyName,
                v70,
                UserDataCounta);
            }
            if ( !FilterAdapterRegistry )
            {
              v76 = *(_DWORD *)(v26 + 336);
              MiniportMediaType = v134.MiniportMediaType;
              if ( v76 != v134.MiniportMediaType && (v22->MacOptions & 0x80000001) != 0x80000001 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  *(_DWORD *)v112 = v134.MiniportMediaType;
                  WPP_RECORDER_SF_qqLd(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xDu,
                    0x1Bu,
                    (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
                    (char)v22,
                    v26,
                    v76,
                    *(_QWORD *)v112);
                  MiniportMediaType = v134.MiniportMediaType;
                }
                if ( Microsoft_Windows_NDISEnableBits < 0 )
                  McTemplateK0jqxjqxdd_EtwWriteTransfer(
                    *(_QWORD *)(v26 + 688),
                    v26 + 664,
                    &v22->InterfaceGuid,
                    (__int64)&v22->InterfaceGuid,
                    v22->IfIndex,
                    v22->NetLuid.Value,
                    v26 + 664,
                    *(_DWORD *)(v26 + 680),
                    *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1312LL),
                    *(_DWORD *)(v26 + 336),
                    MiniportMediaType);
                v115 = 1;
              }
              v78 = *(_QWORD *)(v26 + 120);
              if ( v78 )
              {
                v79 = *(_QWORD *)(v26 + 112);
                if ( v79 )
                  IfIndex = *(_DWORD *)(v79 + 680);
                else
                  IfIndex = v22->IfIndex;
                NdisIfDeleteIfStackEntry(*(_DWORD *)(v78 + 680), IfIndex);
              }
              v81 = *(_QWORD *)(v26 + 112);
              if ( v81 )
                v82 = *(_DWORD *)(v81 + 680);
              else
                v82 = *(_DWORD *)(*(_QWORD *)(v26 + 32) + 4056LL);
              NdisIfAddIfStackEntry(*(_DWORD *)(v26 + 680), v82);
              v83 = *(_QWORD *)(v26 + 120);
              if ( v83 )
                NdisIfAddIfStackEntry(*(_DWORD *)(v83 + 680), *(_DWORD *)(v26 + 680));
              v84 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
              ndisIfUpdateFilterIfStack(*(struct _NDIS_MINIPORT_BLOCK **)(v26 + 32));
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v84);
              v85 = *(_QWORD *)(v26 + 112);
              if ( v85 )
              {
                v86 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v85 + 144));
                *(_QWORD *)(v85 + 152) = KeGetCurrentThread();
                v87 = v86;
                *(_DWORD *)(v26 + 344) = *(_DWORD *)(v85 + 380);
                *(_DWORD *)(v26 + 348) = *(_DWORD *)(v85 + 384);
                *(_QWORD *)(v26 + 352) = *(_QWORD *)(v85 + 392);
                *(_QWORD *)(v26 + 360) = *(_QWORD *)(v85 + 400);
                *(_DWORD *)(v26 + 368) = *(_DWORD *)(v85 + 408);
                *(_DWORD *)(v26 + 372) = *(_DWORD *)(v85 + 412);
                ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
                *(_QWORD *)(v85 + 152) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v85 + 144), v87);
              }
              else
              {
                v88 = KeAcquireSpinLockRaiseToDpc(&v22->Lock);
                v22->MiniportThread = KeGetCurrentThread();
                *(_DWORD *)(v26 + 344) = v22->MiniportMediaConnectState;
                *(_DWORD *)(v26 + 348) = v22->MiniportMediaDuplexState;
                *(_QWORD *)(v26 + 352) = v22->MiniportXmitLinkSpeed;
                *(_QWORD *)(v26 + 360) = v22->MiniportRcvLinkSpeed;
                *(_DWORD *)(v26 + 368) = v22->MiniportPauseFunctions;
                *(_DWORD *)(v26 + 372) = v22->MiniportAutoNegotiationFlags;
                ndisOpenRef((PKSPIN_LOCK)(v26 + 312));
                v22->MiniportThread = 0LL;
                KeReleaseSpinLock(&v22->Lock, v88);
              }
              *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1220LL) = *(_DWORD *)(v26 + 344);
              *(_DWORD *)(*(_QWORD *)(v26 + 688) + 1224LL) = *(_DWORD *)(v26 + 348);
              *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1208LL) = *(_QWORD *)(v26 + 360);
              *(_QWORD *)(*(_QWORD *)(v26 + 688) + 1200LL) = *(_QWORD *)(v26 + 352);
              ndisIndicateInitialStateToFilter((struct _NDIS_FILTER_BLOCK *)v26);
              KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
              *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
              FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
              FILTER_SET_FLAG(v89, 4);
              if ( v115 )
              {
                FILTER_SET_FLAG(v90, 0x8000);
                MiniportPhysicalMediaType = v134.MiniportPhysicalMediaType;
                v93 = v134.MiniportMediaType;
                ++v22->MediaChangeFilters;
                *(_DWORD *)(v26 + 340) = MiniportPhysicalMediaType;
                v94 = *(_QWORD *)(v26 + 688);
                *(_DWORD *)(v26 + 336) = v93;
                *(_DWORD *)(v94 + 564) = v93;
                *(_DWORD *)(*(_QWORD *)(v26 + 688) + 568LL) = *(_DWORD *)(v26 + 340);
                *(_QWORD *)(v26 + 152) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v95);
                v96 = *(_DWORD *)(v26 + 336);
                v97 = *(_DWORD *)(v26 + 340);
                v22->MediaType = v96;
                v22->PhysicalMediumType = v97;
                if ( v96 == NdisMedium802_3
                  && EthAddConversionFilter(
                       v22->TopFilterRestartAttributes.MaxMulticastListSize,
                       v22->IfBlock->ifPhysAddress.Address,
                       v22->EthDB) )
                {
                  v22->EthDB->Miniport = v22;
                  v22->HasConversionFilter = 1;
                }
              }
              else
              {
                *(_QWORD *)(v26 + 152) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v91);
              }
              v75 = (byte_14011D043 & 1) == 0;
              *(_BYTE *)(v26 + 64) = 2;
              if ( !v75 )
                McTemplateK0juqjzzz_EtwWriteTransfer(
                  *(_QWORD *)(v26 + 32) + 4008LL,
                  *(_QWORD *)(v26 + 40),
                  v26 + 664,
                  v26 + 664,
                  2,
                  8,
                  *(_QWORD *)(v26 + 32) + 4008LL,
                  *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                  *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
              ndisPktMonFilterRegister(v26);
              ndisReferenceMiniport(v22, 0x28u);
              if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
                v22->Miniport5HasNdis6Component = 1;
              ndisSetupWmiNode(
                v22,
                *(const struct _UNICODE_STRING **)(v26 + 48),
                v22->BindPaths->Paths[0].Length + v24->DefaultFilterCharacteristics.UniqueName.Length + 4,
                (__int128 *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL,
                (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
              v98 = WnodeEventItem;
              if ( WnodeEventItem )
              {
                v99 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
                memmove(
                  v99,
                  v24->DefaultFilterCharacteristics.UniqueName.Buffer,
                  v24->DefaultFilterCharacteristics.UniqueName.Length);
                memmove(
                  &v99[v24->DefaultFilterCharacteristics.UniqueName.Length + 2],
                  v22->BindPaths->Paths[0].Buffer,
                  v22->BindPaths->Paths[0].Length);
                v102 = IoWMIWriteEvent(v98);
                if ( v102 < 0 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v100) = 2;
                    WPP_RECORDER_SF_(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v100,
                      1,
                      28,
                      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids);
                  }
                  if ( (byte_14011D041 & 1) != 0 )
                    McTemplateK0qqq_EtwWriteTransfer(
                      v101,
                      &FilterArrivalIndicationFailed,
                      (const GUID *)(v26 + 664),
                      v102,
                      1,
                      0);
                  ExFreePoolWithTag(v98, 0);
                }
              }
              Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
              v23 = a4;
              if ( Ndis::BindState::SetPause(&a4->BindState, DatapathRunning, PauseReason_InitialPause) )
              {
                memset(v135, 0, sizeof(v135));
                if ( (unsigned __int8)byte_14011EAD3 >= 4u )
                {
                  ndisGetBindLinkNameForTracing(a4, v135);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_Zq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v103,
                      0x1Cu,
                      0x1Du,
                      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
                      v135[0].Buffer,
                      *(_QWORD *)&v135[0].Length);
                }
              }
              Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
              if ( v22->MajorNdisVersion < 6u && !v22->Miniport5HasNdis6Component )
                v22->Miniport5HasNdis6Component = 1;
              goto LABEL_10;
            }
            v23 = a4;
            a4->BindState.AllowBindDespiteMandatory = v134.Flags & 1;
            KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 144));
            *(_QWORD *)(v26 + 152) = KeGetCurrentThread();
            FILTER_CLEAR_ALL_STATE_FLAGS((struct _NDIS_FILTER_BLOCK *)v26);
            if ( FILTER_TEST_FLAG(v71, 256) )
              FILTER_CLEAR_FLAG(v73, v72);
            FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 8);
            *(_QWORD *)(v26 + 152) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 144), v74);
            v75 = (byte_14011D043 & 1) == 0;
            *(_BYTE *)(v26 + 64) = 0;
            if ( !v75 )
              McTemplateK0juqjzzz_EtwWriteTransfer(
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(_QWORD *)(v26 + 40),
                v26 + 664,
                v26 + 664,
                0,
                7,
                *(_QWORD *)(v26 + 32) + 4008LL,
                *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 3856LL) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 40) + 8LL),
                *(const wchar_t **)(*(_QWORD *)(v26 + 48) + 8LL));
LABEL_201:
            if ( *(_QWORD *)(v26 + 752) )
            {
              Ndis::BindEngine::BeginPolicyUpdates(&v22->BindEngine);
              Ndis::BindState::RemoveBindContext(&v23->BindState, (void *)v26);
              Ndis::BindEngine::EndPolicyUpdates(&v22->BindEngine);
              *(_QWORD *)(v26 + 752) = 0LL;
            }
            v104 = v22;
            if ( !v116 )
              v104 = 0LL;
            ndisFilterAttachCleanUp((_NDIS_FILTER_BLOCK *)v26, v104, v30);
            goto LABEL_206;
          }
        }
        else
        {
          v134.MediaConnectState = v22->MiniportMediaConnectState;
          v134.MediaDuplexState = v22->MiniportMediaDuplexState;
          v134.XmitLinkSpeed = v22->MiniportXmitLinkSpeed;
          v134.RcvLinkSpeed = v22->MiniportRcvLinkSpeed;
          Offload = v22->Offload;
          if ( Offload && Offload->SupportsOffload )
          {
            v134.DefaultOffloadConfiguration = &Offload->MiniportCurrentConfig;
            goto LABEL_96;
          }
        }
        v134.DefaultOffloadConfiguration = 0LL;
        goto LABEL_96;
      }
    }
    else if ( ndisDatapathVerifierMode != 2 )
    {
      goto LABEL_48;
    }
    FILTER_SET_FLAG((struct _NDIS_FILTER_BLOCK *)v26, 512);
    goto LABEL_48;
  }
  v24 = v130;
  FilterAdapterRegistry = -1073741823;
LABEL_9:
  v26 = *(_QWORD *)v129;
LABEL_10:
  if ( ndisVerifierNdisDispatch
    && v26
    && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(*(_QWORD *)(v26 + 16) + 16LL))
    && !*(_QWORD *)(v26 + 776)
    && (*((int (__fastcall **)(_DRIVER_OBJECT *, __int64, void **))ndisVerifierNdisDispatch + 1))(
         v24->DriverObject,
         v26,
         &v24->FilterDriverContext) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      13,
      30,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      v26);
  }
LABEL_206:
  ndisHandleFilterHandlersChange(v22);
  if ( v134.NicSwitchArray )
  {
    ExFreePoolWithTag(v134.NicSwitchArray, 0);
    v134.NicSwitchArray = 0LL;
  }
  if ( FilterAdapterRegistry
    && !v23->BindState.AllowBindDespiteMandatory
    && (v23->BindDriver._p->_t.FilterBindFlags & 1) == 0 )
  {
    ndisNotifyBindFailureOnUnboundProtocols(v22);
  }
  ndisDereferenceMiniport(v22, 0x27u);
  ndisDereferenceFilterDriver(v24, 0, 0);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v111 = FilterAdapterRegistry;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)v24,
      (char)v22,
      *(_QWORD *)v111);
  }
  return FilterAdapterRegistry;
}
