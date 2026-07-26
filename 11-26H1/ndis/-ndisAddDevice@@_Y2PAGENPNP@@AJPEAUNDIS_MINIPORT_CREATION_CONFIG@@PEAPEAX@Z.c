/*
 * XREFs of ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$MakePoolPtrNP@VNdisWdfIdle@@@@YA?AV?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@K@Z @ 0x1400018F0 (--$MakePoolPtrNP@VNdisWdfIdle@@@@YA-AV-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BEE0 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001FD70 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x140051010 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x14005A5E0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x14005A630 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1400658D0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1400698E0 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x14006C250 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C980 (-ndisMFindNumaDistances@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140070190 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z @ 0x1400709F0 (-ndisSetDeviceNames@@YAXPEAU_UNICODE_STRING@@00PEAE@Z.c)
 *     ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400733E0 (-ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??1NdisWdfIdle@@QEAA@XZ @ 0x1400762B0 (--1NdisWdfIdle@@QEAA@XZ.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140076DB0 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x1400774F0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x140079370 (-ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F1A0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007FA50 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x140089BB0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x14008C0C0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DB30 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRegisterMiniportTriageData @ 0x14009480C (ndisRegisterMiniportTriageData.c)
 *     Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline @ 0x140094B94 (Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140094C44 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140094C9C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009FE7C (-ndisMInvokeAddDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B17FC (-NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREA.c)
 *     ?NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z @ 0x1400B18D0 (-NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z.c)
 *     ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2E48 (-Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138E70 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x140164E40 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1401686F0 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140168A60 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168E20 (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401693D0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140169AD0 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016BFA0 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x14016C590 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016CFD0 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016FF50 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 */

__int64 __fastcall ndisAddDevice(struct _GUID *a1, void **a2)
{
  char *DeviceExtension; // rdi
  struct _NDIS_IF_BLOCK *v3; // r12
  bool v4; // bl
  int appended; // esi
  _DEVICE_OBJECT *v7; // rax
  const struct _GUID *v8; // rdx
  __int64 v9; // r13
  int v10; // r15d
  KIRQL v11; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rbx
  unsigned int v13; // ecx
  ULONG v14; // ebx
  __int16 v15; // ax
  struct _NDIS_MINIPORT_BLOCK *Pool2; // rax
  __int64 v17; // rcx
  _DEVICE_OBJECT *v18; // rax
  __int64 v19; // rcx
  _DEVICE_OBJECT *v20; // rax
  NdisWdfIdle *v21; // rbx
  NdisWdfIdle *v22; // rsi
  PDEVICE_OBJECT v23; // rdx
  __int64 EventLog; // rax
  _GUID v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 (*v28)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r9
  unsigned int v29; // eax
  LOGICAL IsDriverVerifying; // eax
  int v31; // edx
  int v32; // r9d
  char *v33; // rsi
  __int64 v34; // rax
  char v35; // r13
  char v36; // al
  enum Ndis::ReadBindingsOptions::Flags v37; // r8d
  __int64 v38; // rax
  const struct _DEVPROPKEY *v39; // rdx
  int DevicePropertyData; // r15d
  PDRIVER_OBJECT v41; // rax
  char No; // al
  _UNICODE_STRING *v43; // r8
  int v44; // edx
  __int64 v45; // rcx
  PDRIVER_OBJECT v46; // rcx
  int v47; // edx
  PDRIVER_OBJECT v48; // rcx
  __int16 v49; // ax
  _UNICODE_STRING *p_P; // rdx
  int v51; // edx
  __int64 v52; // rcx
  bool v53; // cf
  _UNICODE_STRING *v54; // rax
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  void *v61; // rcx
  int v62; // eax
  int v63; // edx
  _DWORD *v64; // rax
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  KIRQL v66; // r8
  struct _NDIS_IF_BLOCK *v67; // rbx
  KIRQL v68; // dl
  __int64 v69; // rcx
  _NDIS_MEDIUM MediaType; // eax
  __int64 v71; // rax
  __int128 v72; // xmm0
  __int128 *v73; // rax
  __int128 v74; // xmm1
  __int64 v75; // rax
  int updated; // eax
  NTSTATUS v77; // eax
  _UNICODE_STRING *v78; // rcx
  NTSTATUS v79; // eax
  __int64 v80; // rax
  void *v81; // rcx
  KIRQL v82; // al
  __int64 v83; // rdx
  signed __int32 v85[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG DeviceCharacteristics[2]; // [rsp+20h] [rbp-E0h]
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-D0h]
  bool v89; // [rsp+40h] [rbp-C0h]
  char v90; // [rsp+41h] [rbp-BFh]
  char v91; // [rsp+42h] [rbp-BEh]
  char v92; // [rsp+43h] [rbp-BDh]
  char v93; // [rsp+44h] [rbp-BCh]
  char v94; // [rsp+45h] [rbp-BBh]
  char v95; // [rsp+46h] [rbp-BAh]
  char v96; // [rsp+47h] [rbp-B9h]
  PDRIVER_OBJECT DriverObject; // [rsp+48h] [rbp-B8h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+50h] [rbp-B0h] BYREF
  struct _CONFIG_KNOB_NAMESPACE P; // [rsp+58h] [rbp-A8h] BYREF
  PDEVICE_OBJECT v100; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+88h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v103; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING String; // [rsp+98h] [rbp-68h] BYREF
  void **v105; // [rsp+A8h] [rbp-58h]
  _OWORD Src[10]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v107; // [rsp+150h] [rbp+50h]
  int v108; // [rsp+158h] [rbp+58h]
  __int64 v109; // [rsp+160h] [rbp+60h]
  __int64 v110; // [rsp+168h] [rbp+68h]
  const wchar_t *v111; // [rsp+170h] [rbp+70h]
  char *v112; // [rsp+178h] [rbp+78h]
  __int64 v113; // [rsp+180h] [rbp+80h]
  int v114; // [rsp+188h] [rbp+88h]
  __int64 v115; // [rsp+190h] [rbp+90h]
  __int64 v116; // [rsp+198h] [rbp+98h]
  const wchar_t *v117; // [rsp+1A0h] [rbp+A0h]
  char *v118; // [rsp+1A8h] [rbp+A8h]
  __int64 v119; // [rsp+1B0h] [rbp+B0h]
  int v120; // [rsp+1B8h] [rbp+B8h]
  __int64 v121; // [rsp+1C0h] [rbp+C0h]
  __int64 v122; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v123; // [rsp+1D0h] [rbp+D0h]
  char *v124; // [rsp+1D8h] [rbp+D8h]
  __int64 v125; // [rsp+1E0h] [rbp+E0h]
  int v126; // [rsp+1E8h] [rbp+E8h]
  __int128 v127; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v128; // [rsp+200h] [rbp+100h]
  char *v129; // [rsp+208h] [rbp+108h]
  __int64 v130; // [rsp+210h] [rbp+110h]
  int v131; // [rsp+218h] [rbp+118h]
  __int128 v132; // [rsp+220h] [rbp+120h]
  const wchar_t *v133; // [rsp+230h] [rbp+130h]
  char *v134; // [rsp+238h] [rbp+138h]
  __int64 v135; // [rsp+240h] [rbp+140h]
  int v136; // [rsp+248h] [rbp+148h]
  __int128 v137; // [rsp+250h] [rbp+150h]
  const wchar_t *v138; // [rsp+260h] [rbp+160h]
  char *v139; // [rsp+268h] [rbp+168h]
  __int64 v140; // [rsp+270h] [rbp+170h]
  int v141; // [rsp+278h] [rbp+178h]
  __int128 v142; // [rsp+280h] [rbp+180h]
  const wchar_t *v143; // [rsp+290h] [rbp+190h]
  char *v144; // [rsp+298h] [rbp+198h]
  __int64 v145; // [rsp+2A0h] [rbp+1A0h]
  int v146; // [rsp+2A8h] [rbp+1A8h]
  __int128 v147; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v148; // [rsp+2C0h] [rbp+1C0h]
  char *v149; // [rsp+2C8h] [rbp+1C8h]
  __int64 v150; // [rsp+2D0h] [rbp+1D0h]
  int v151; // [rsp+2D8h] [rbp+1D8h]
  __int128 v152; // [rsp+2E0h] [rbp+1E0h]
  const wchar_t *v153; // [rsp+2F0h] [rbp+1F0h]
  char *v154; // [rsp+2F8h] [rbp+1F8h]
  __int64 v155; // [rsp+300h] [rbp+200h]
  int v156; // [rsp+308h] [rbp+208h]
  __int128 v157; // [rsp+310h] [rbp+210h]
  const wchar_t *v158; // [rsp+320h] [rbp+220h]
  char *v159; // [rsp+328h] [rbp+228h]
  __int64 v160; // [rsp+330h] [rbp+230h]
  int v161; // [rsp+338h] [rbp+238h]
  __int128 v162; // [rsp+340h] [rbp+240h]
  char v163; // [rsp+350h] [rbp+250h] BYREF
  char v164; // [rsp+378h] [rbp+278h] BYREF

  v105 = a2;
  v100 = 0LL;
  DeviceExtension = 0LL;
  SourceDevice = 0LL;
  v3 = 0LL;
  v90 = 0;
  v4 = 0;
  v91 = 0;
  v95 = 0;
  appended = -1073741823;
  v93 = 0;
  v92 = 0;
  v94 = 0;
  v96 = 0;
  v7 = *(_DEVICE_OBJECT **)&a1[2].Data1;
  TargetDevice = v7;
  v89 = 0;
  v8 = &WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      13,
      68,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)v7);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = *(_QWORD *)&a1[6].Data1;
  if ( a1[5].Data4[1] != *(_BYTE *)(v9 + 26) >> 7 )
    NT_ASSERT("Parameters->IsLightWeight == ((Parameters->MiniBlock->Flags & 0x0080) != 0)");
  v10 = 1;
  if ( !v9 )
  {
    appended = -1073741670;
LABEL_55:
    v35 = 0;
    goto LABEL_56;
  }
  if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() )
    v89 = (*(_BYTE *)(v9 + 26) & 0x40) != 0;
  DriverObject = *(PDRIVER_OBJECT *)(*(_QWORD *)&a1[6].Data1 + 40LL);
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i; i = i->NextDriver )
  {
    if ( i == (struct _NDIS_M_DRIVER_BLOCK *)v9 )
      break;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  v10 = 2;
  if ( i != (struct _NDIS_M_DRIVER_BLOCK *)v9 )
  {
LABEL_54:
    v4 = v89;
    goto LABEL_55;
  }
  v10 = 3;
  if ( *(_BYTE *)(v9 + 24) >= 6u && !a1[2].Data4[0] )
  {
    appended = -1073741491;
    goto LABEL_54;
  }
  v10 = 4;
  v13 = (**(unsigned __int16 **)a1[3].Data4 + 6139) & 0xFFFFFFF8;
  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&DestinationString.Length = 3932160LL;
  v14 = v13 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = (wchar_t *)&v163;
  DestinationString.Buffer = (wchar_t *)&v164;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  appended = RtlIntegerToUnicodeString(_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex), 0xAu, &String);
  if ( appended )
  {
    v4 = v89;
    v35 = 0;
    goto LABEL_56;
  }
  appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
  if ( appended )
    goto LABEL_54;
  v15 = *(_WORD *)(v9 + 26);
  if ( (v15 & 0x80u) != 0 )
  {
    Pool2 = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2(66LL, (int)v14, 2003584078LL);
    DeviceExtension = (char *)Pool2;
    if ( Pool2 )
    {
      ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, Pool2, v14);
      _InterlockedOr((volatile signed __int32 *)DeviceExtension + 30, 0x100u);
      goto LABEL_33;
    }
LABEL_53:
    appended = -1073741670;
    goto LABEL_54;
  }
  if ( (v15 & 0x40) != 0 )
  {
    v17 = *(_QWORD *)&a1[5].Data1;
    v103 = 0LL;
    *(_QWORD *)&P.NamespaceType = *(_QWORD *)(v9 + 360);
    appended = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _NDIS_MINIPORT_BLOCK **))(*(_QWORD *)&P.NamespaceType
                                                                                          + 104LL))(
                 v17,
                 v14,
                 &v103);
    if ( appended )
      goto LABEL_54;
    v18 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&P.NamespaceType + 64LL))(*(_QWORD *)&a1[5].Data1);
    v19 = *(_QWORD *)&a1[5].Data1;
    SourceDevice = v18;
    v20 = (_DEVICE_OBJECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)&P.NamespaceType + 72LL))(v19);
    DeviceExtension = (char *)v103;
    v100 = v20;
    ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, v103, v14);
    MakePoolPtrNP<NdisWdfIdle>((__int64)&P);
    v21 = *(NdisWdfIdle **)&P.NamespaceType;
    if ( !*(_QWORD *)&P.NamespaceType )
      goto LABEL_53;
    appended = NdisWdfIdle::Initialize(*(char **)&P.NamespaceType, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( appended )
    {
      NdisWdfIdle::~NdisWdfIdle(v21);
      ExFreePoolWithTag(v21, 0);
      goto LABEL_54;
    }
    v22 = (NdisWdfIdle *)*((_QWORD *)DeviceExtension + 761);
    *((_QWORD *)DeviceExtension + 761) = v21;
    if ( v22 )
    {
      NdisWdfIdle::~NdisWdfIdle(v22);
      ExFreePoolWithTag(v22, 0);
    }
    *((_QWORD *)DeviceExtension + 3) = *(_QWORD *)&a1[5].Data1;
  }
  else
  {
    v10 = 5;
    appended = IoCreateDevice(DriverObject, v14, &DestinationString, 0x17u, 0x100u, 0, &SourceDevice);
    if ( appended < 0 )
      goto LABEL_54;
    v10 = 6;
    v23 = TargetDevice;
    v95 = 1;
    SourceDevice->Flags |= 0x10u;
    v23->Flags &= ~0x80u;
    SourceDevice->Flags |= 0x2000u;
    v100 = IoAttachDeviceToDeviceStack(SourceDevice, v23);
    if ( !v100 )
    {
      appended = -1073741823;
      goto LABEL_54;
    }
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    ndisMInitializeMiniportBlock((struct _NDIS_M_DRIVER_BLOCK *)v9, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v14);
  }
LABEL_33:
  if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
    _InterlockedOr((volatile signed __int32 *)DeviceExtension + 30, 0x80u);
  *(struct _GUID *)(DeviceExtension + 4008) = *a1;
  EventLog = ndisAllocateEventLog(2, 1);
  v25 = *(_GUID *)(DeviceExtension + 4008);
  *((_QWORD *)DeviceExtension + 559) = EventLog;
  P.NamespaceType = ConfigKnobNamespaceNetworkInterfaceProfile;
  P.ObjectId = v25;
  if ( DeviceExtension != (char *)-5920LL )
    KnobNamespace::KnobNamespace(
      (KnobNamespace *)(DeviceExtension + 5920),
      (struct _DRIVER_OBJECT *)ndisDriverObject,
      &P);
  *((_QWORD *)DeviceExtension + 752) = 0LL;
  *((_QWORD *)DeviceExtension + 753) = 0LL;
  *((_QWORD *)DeviceExtension + 754) = 0LL;
  *((_QWORD *)DeviceExtension + 755) = 0LL;
  *((_QWORD *)DeviceExtension + 756) = 0LL;
  *((_QWORD *)DeviceExtension + 757) = 0LL;
  *((_DWORD *)DeviceExtension + 1516) = 0;
  *((_DWORD *)DeviceExtension + 1503) = 0;
  *((_QWORD *)&Src[0] + 1) = DeviceExtension + 6012;
  *(_QWORD *)&Src[3] = L"MaxTimeAtDispatch";
  *((_QWORD *)&Src[3] + 1) = DeviceExtension + 6016;
  *(_QWORD *)&Src[6] = L"DispatchTimeWarning";
  *((_QWORD *)&Src[6] + 1) = DeviceExtension + 6020;
  *(_QWORD *)&Src[9] = L"DispatchTimeWarningInterval";
  *((_QWORD *)&Src[9] + 1) = DeviceExtension + 6024;
  v111 = L"DpcWatchdogTimerThreshold";
  v112 = DeviceExtension + 6028;
  v117 = L"WorkerThreadPriority";
  v118 = DeviceExtension + 6032;
  *(_QWORD *)&Src[0] = L"Flags";
  *(_QWORD *)&Src[4] = 0LL;
  *(_QWORD *)&Src[7] = 0LL;
  v123 = L"MaxPacketsSendAtPassive";
  v128 = L"MaxPacketsSendCompleteAtPassive";
  v133 = L"MaxPacketsReceiveAtPassive";
  v138 = L"MaxPacketsReceiveCompleteAtPassive";
  v124 = DeviceExtension + 6036;
  *((_DWORD *)DeviceExtension + 1502) = 60;
  *(_QWORD *)&Src[1] = 1LL;
  DWORD2(Src[1]) = 32;
  Src[2] = 0LL;
  DWORD2(Src[4]) = 32;
  Src[5] = 0LL;
  DWORD2(Src[7]) = 32;
  Src[8] = 0LL;
  v107 = 900000LL;
  v108 = 32;
  v109 = 60000LL;
  v110 = 1440000LL;
  v113 = 80LL;
  v114 = 32;
  v115 = 1LL;
  v116 = 80LL;
  v119 = 10LL;
  v120 = 32;
  v121 = 1LL;
  v122 = 15LL;
  v125 = 64LL;
  v126 = 32;
  v127 = 0LL;
  v129 = DeviceExtension + 6044;
  v130 = 64LL;
  v131 = 32;
  v132 = 0LL;
  v134 = DeviceExtension + 6052;
  v135 = 64LL;
  v136 = 32;
  v137 = 0LL;
  v139 = DeviceExtension + 6060;
  v140 = 64LL;
  v144 = DeviceExtension + 6040;
  v141 = 32;
  v148 = L"MaxPacketsSendCompleteAtDispatch";
  v149 = DeviceExtension + 6048;
  v143 = L"MaxPacketsSendAtDispatch";
  v153 = L"MaxPacketsReceiveAtDispatch";
  v154 = DeviceExtension + 6056;
  v145 = 64LL;
  v158 = L"MaxPacketsReceiveCompleteAtDispatch";
  v159 = DeviceExtension + 6064;
  v142 = 0LL;
  v146 = 32;
  v147 = 0LL;
  v150 = 64LL;
  v151 = 32;
  v152 = 0LL;
  v155 = 64LL;
  v156 = 32;
  v157 = 0LL;
  v160 = 64LL;
  v161 = 32;
  v162 = 0LL;
  if ( !Rtl::KArray<KnobDescriptor,1>::reserve((unsigned int *)DeviceExtension + 1498, 0xEuLL) )
    goto LABEL_53;
  v26 = *((unsigned int *)DeviceExtension + 1499);
  if ( (unsigned int)v26 < 0xE )
    memset((void *)(*((_QWORD *)DeviceExtension + 750) + 48 * v26), 0, -48 * v26 + 672);
  *((_DWORD *)DeviceExtension + 1499) = 14;
  v27 = *((unsigned int *)DeviceExtension + 1499);
  if ( !(_DWORD)v27
    || (memmove(*((void **)DeviceExtension + 750), Src, 48 * v27), (v29 = *((_DWORD *)DeviceExtension + 1499)) == 0) )
  {
    __fastfail(5u);
  }
  KnobNamespace::AddKnobCollection(
    (KnobNamespace *)(DeviceExtension + 5920),
    *((const struct KnobDescriptor **)DeviceExtension + 750),
    v29,
    v28,
    0LL);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) != 0 )
    IsDriverVerifying = (*(unsigned __int16 *)(v9 + 26) >> 1) & 1;
  else
    IsDriverVerifying = MmIsDriverVerifying(DriverObject);
  if ( ndisVerifierNdisDispatch )
  {
    if ( IsDriverVerifying )
    {
      v10 = 1;
      appended = (*((__int64 (__fastcall **)(PDEVICE_OBJECT, char *, char *, char *))ndisVerifierNdisDispatch + 1))(
                   SourceDevice,
                   DeviceExtension,
                   DeviceExtension + 24,
                   DeviceExtension + 4968);
      if ( appended < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v32 = 69;
LABEL_50:
        LOBYTE(v31) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v31,
          13,
          v32,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)DeviceExtension);
        goto LABEL_54;
      }
    }
  }
  v33 = DeviceExtension + 3792;
  ndisSetDeviceNames(
    *(PCUNICODE_STRING *)a1[3].Data4,
    (PUNICODE_STRING)DeviceExtension + 238,
    (struct _UNICODE_STRING *)DeviceExtension + 237,
    (wchar_t *)DeviceExtension + 3064);
  v34 = ExAllocatePool2(66LL, DestinationString.Length + 2LL, 1851868238LL);
  *((_QWORD *)DeviceExtension + 526) = v34;
  if ( !v34 )
  {
    v10 = 1;
    goto LABEL_53;
  }
  *((_WORD *)DeviceExtension + 2101) = DestinationString.Length + 2;
  RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4200), &DestinationString);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
  {
    *((_QWORD *)DeviceExtension + 479) = TargetDevice;
    *((_QWORD *)DeviceExtension + 478) = SourceDevice;
    *((_QWORD *)DeviceExtension + 480) = v100;
    DriverObject = 0LL;
    v38 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
            (__int64)&P,
            (__int64)&DriverObject);
    DevicePropertyData = ndisMiniportQueryDevicePropertyData(
                           (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
                           v39,
                           (wchar_t **)(v38 + 8));
    if ( P.ObjectId.Data4[4] )
      wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
    if ( !DevicePropertyData )
    {
      v41 = DriverObject;
      DriverObject = 0LL;
      *((_QWORD *)DeviceExtension + 672) = v41;
    }
    No = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30);
    v43 = 0LL;
    v10 = 8;
    if ( No < 0 )
      v43 = (_UNICODE_STRING *)(DeviceExtension + 3792);
    appended = IoRegisterDeviceInterface(
                 *((PDEVICE_OBJECT *)DeviceExtension + 479),
                 &GUID_DEVINTERFACE_NET,
                 v43,
                 (PUNICODE_STRING)(DeviceExtension + 4152));
    if ( appended < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v44) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v44,
          13,
          70,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)DeviceExtension);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(
          v45,
          &AddDeviceFailed,
          (const GUID *)&NDIS_PROVIDER_ID,
          appended,
          1,
          (char)DeviceExtension);
      v46 = DriverObject;
      DriverObject = 0LL;
      if ( !v46 )
        goto LABEL_54;
      goto LABEL_83;
    }
    appended = IoSetDeviceInterfacePropertyData(
                 DeviceExtension + 4152,
                 &DEVPKEY_NetworkInterface_Guid,
                 0LL,
                 1LL,
                 13,
                 16,
                 DeviceExtension + 4008);
    if ( appended )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v47,
          13,
          71,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)DeviceExtension);
      }
      v46 = DriverObject;
      DriverObject = 0LL;
      if ( !v46 )
        goto LABEL_54;
LABEL_83:
      ExFreePoolWithTag(v46, 0);
      goto LABEL_54;
    }
    v48 = DriverObject;
    v91 = 1;
    DriverObject = 0LL;
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    v33 = DeviceExtension + 3792;
  }
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) != 0 )
  {
    *(_QWORD *)&P.NamespaceType = 8912896LL;
    *(_QWORD *)&P.ObjectId.Data2 = Src;
    appended = RtlUnicodeStringPrintf((struct _UNICODE_STRING *)&P, L"\\Device\\lwm\\NetworkInterface\\%wZ", v33);
    if ( appended )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v32 = 72;
      goto LABEL_50;
    }
    v10 = 7;
    if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) == 0LL
      || (v49 = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30),
          p_P = (_UNICODE_STRING *)(DeviceExtension + 4152),
          (v49 & 0x100) != 0) )
    {
      p_P = (_UNICODE_STRING *)&P;
    }
    appended = IoCreateSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200), p_P);
    if ( appended )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v51) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v51,
          13,
          73,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)DeviceExtension);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
        goto LABEL_54;
      *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
      DeviceCharacteristics[0] = 65538;
      goto LABEL_105;
    }
    v92 = 1;
  }
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) == 0LL
    || (v53 = (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) != 0,
        v54 = (_UNICODE_STRING *)(DeviceExtension + 4152),
        v53) )
  {
    v54 = (_UNICODE_STRING *)(DeviceExtension + 4200);
  }
  v10 = 7;
  appended = IoCreateSymbolicLink(*(PUNICODE_STRING *)a1[3].Data4, v54);
  if ( appended )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v55) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v55,
        13,
        74,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)DeviceExtension);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) == 0 )
      goto LABEL_54;
    *(_DWORD *)Exclusive = (_DWORD)DeviceExtension;
    DeviceCharacteristics[0] = 65539;
LABEL_105:
    McTemplateK0qqq_EtwWriteTransfer(
      v52,
      &AddDeviceFailed,
      (const GUID *)&NDIS_PROVIDER_ID,
      appended,
      DeviceCharacteristics[0],
      Exclusive[0]);
    goto LABEL_54;
  }
  v93 = 1;
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
  {
    *((_QWORD *)DeviceExtension + 620) = 0LL;
    v56 = *(_QWORD *)&a1[3].Data1;
    if ( v56 && *(_WORD *)v56 )
      ndisQueryDeviceFlags(*(const wchar_t **)(v56 + 8), (unsigned __int64 *)DeviceExtension + 620);
    if ( a1[4].Data4[0] )
      *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
    if ( a1[4].Data4[1] )
      *((_DWORD *)DeviceExtension + 31) |= 2u;
    if ( a1[4].Data4[2] )
      *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
    if ( a1[4].Data4[0] )
    {
      v10 = 4;
      DriverObject = 0LL;
      appended = ndisQueryReferenceBusInterface(TargetDevice, (PVOID *)&DriverObject);
      if ( appended < 0 )
        goto LABEL_54;
      *((_QWORD *)DeviceExtension + 498) = DriverObject;
    }
    v10 = 4;
    appended = ndisCreateSecurityDescriptor(
                 *((struct _DEVICE_OBJECT **)DeviceExtension + 478),
                 (void **)DeviceExtension + 473,
                 5u);
    if ( appended < 0 )
      goto LABEL_54;
  }
  v10 = 4;
  appended = ndisCreateAdapterInstanceName(
               (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
               (struct _UNICODE_STRING **)DeviceExtension + 482,
               (struct _UNICODE_STRING **)DeviceExtension + 551);
  if ( appended < 0 )
    goto LABEL_54;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v57,
      0xDu,
      0x4Bu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)DeviceExtension,
      *((unsigned __int16 **)DeviceExtension + 482));
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    McTemplateK0z_EtwWriteTransfer(v58, &AddDevice, v59, *(const wchar_t **)(*((_QWORD *)DeviceExtension + 482) + 8LL));
  *((_DWORD *)DeviceExtension + 1015) = 1;
  v60 = *(_QWORD *)a1[3].Data4;
  *(_QWORD *)a1[3].Data4 = 0LL;
  v61 = (void *)*((_QWORD *)DeviceExtension + 522);
  *((_QWORD *)DeviceExtension + 522) = v60;
  if ( v61 )
    ExFreePoolWithTag(v61, 0x7274534Bu);
  v62 = ndisInitializeConfiguration((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, *(PCWSTR *)a1[1].Data4);
  if ( v62 )
  {
LABEL_137:
    appended = NdisConvertNdisStatusToNtStatus(v62);
    goto LABEL_54;
  }
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5120),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
    && (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(DeviceExtension + 5048), DatapathPaused, PauseReason_Wdf) )
    {
      memset(Src, 0, sizeof(Src));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          (struct NDIS_PNPTRACE_LOCALS *)Src);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v63,
            0x1Cu,
            0x4Cu,
            (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
            *((unsigned __int16 **)&Src[0] + 1),
            *(_QWORD *)&Src[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5120));
  }
  v96 = 1;
  appended = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( appended < 0 )
    goto LABEL_54;
  ndisMFindNumaDistances((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  ndisReadRssKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( *(_QWORD *)(v9 + 776) )
  {
    v10 = 10;
    v62 = ndisMInvokeAddDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
    if ( v62 )
      goto LABEL_137;
    v90 = 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Du,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      v9,
      DeviceExtension);
  }
  if ( (*(_BYTE *)(v9 + 26) & 1) != 0 && (unsigned __int8)DeviceExtension[32] >= 6u )
  {
    v64 = (_DWORD *)*((_QWORD *)DeviceExtension + 471);
    if ( !v64 )
    {
      v4 = v89;
      appended = -1073741823;
      v35 = v90;
      v10 = 3;
      goto LABEL_56;
    }
    if ( *v64 > 1u )
    {
      v4 = v89;
      appended = -1073741637;
      v35 = v90;
      v10 = 3;
      goto LABEL_56;
    }
  }
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  v3 = InterfaceByInterfaceGuid;
  v67 = InterfaceByInterfaceGuid;
  if ( !InterfaceByInterfaceGuid )
  {
    v68 = v66;
    goto LABEL_180;
  }
  v68 = v66;
  if ( InterfaceByInterfaceGuid->NetLuid.Value != *(_QWORD *)&a1[1].Data1 )
  {
    v3 = 0LL;
LABEL_180:
    appended = -1073741072;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v68);
    v4 = v89;
    v10 = 4;
    v35 = v90;
    goto LABEL_56;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v66);
  v10 = 4;
  if ( appended )
  {
    v35 = v90;
    v4 = v89;
    goto LABEL_56;
  }
  ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, a1[4].Data4[3]);
  ndisIfUpdateInterfaceHiddenFlag(v67, a1[4].Data4[3]);
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x80u) != 0LL
    && (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
  {
    if ( !a1[5].Data4[0] )
      *((_DWORD *)DeviceExtension + 142) |= 8u;
    if ( !v67->IsWDFMiniportInterface )
    {
      v4 = v89;
      appended = -1073741811;
      v35 = v90;
      goto LABEL_56;
    }
    v69 = *(_QWORD *)&a1[5].Data1;
    MediaType = v67->MediaType;
    Src[1] = 0LL;
    DWORD2(Src[1]) = MediaType;
    *(_QWORD *)&Src[1] = v67->NetLuid.Value;
    v71 = *((_QWORD *)DeviceExtension + 470);
    memset(&Src[3], 0, 40);
    Src[0] = *(_OWORD *)(DeviceExtension + 4008);
    Src[2] = *((_OWORD *)DeviceExtension + 237);
    v72 = *(_OWORD *)(v71 + 872);
    v73 = (__int128 *)*((_QWORD *)DeviceExtension + 482);
    Src[4] = v72;
    v74 = *v73;
    *(_QWORD *)&Src[5] = DeviceExtension + 6008;
    v75 = *(_QWORD *)(v9 + 360);
    Src[3] = v74;
    (*(void (__fastcall **)(__int64, _OWORD *))(v75 + 112))(v69, Src);
  }
  updated = ndisIfUpdateInterfaceOnAddDevice(v67, (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( updated || (v94 = 1, (updated = ndisAllocateDefaultQueue((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension)) != 0) )
  {
    appended = NdisConvertNdisStatusToNtStatus(updated);
LABEL_169:
    v4 = v89;
    v35 = v90;
    goto LABEL_56;
  }
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
  {
    appended = ndisRegisterMiniportTriageData((__int64)DeviceExtension);
    if ( appended )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(DeviceObject) = appended;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x4Eu,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
          (char)DeviceExtension,
          DeviceObject);
        v4 = v89;
        v35 = v90;
        goto LABEL_56;
      }
      goto LABEL_169;
    }
  }
  v35 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v95 = 0;
  v94 = 0;
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30) & 0x100) == 0 )
  {
    _InterlockedOr(v85, 0);
    SourceDevice->Flags &= ~0x80u;
  }
  v4 = v89;
LABEL_56:
  if ( !(unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011C6F8 )
  {
    v36 = mem::ReadNoFence<unsigned long,void>((unsigned int *)DeviceExtension + 30);
    NdisTraceLoggingDeviceAdded((__int64)v3, v10, (__int64)a1, appended, *((_WORD **)DeviceExtension + 672), v36 < 0);
  }
  if ( appended >= 0 )
  {
    if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011C6F8 )
      NdisTraceLoggingDeviceAddSuccess((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, v3);
    *((_DWORD *)DeviceExtension + 1042) = *(_DWORD *)&a1[2].Data4[4];
    v80 = *(_QWORD *)&a1[4].Data1;
    *(_QWORD *)&a1[4].Data1 = 0LL;
    v81 = (void *)*((_QWORD *)DeviceExtension + 523);
    *((_QWORD *)DeviceExtension + 523) = v80;
    if ( v81 )
      ExFreePoolWithTag(v81, 0x7274534Bu);
    v82 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 481) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v82);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v83,
        9u,
        0x51u,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (char)DeviceExtension,
        *((unsigned __int16 **)DeviceExtension + 482));
    ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, NdisMEvent_DeviceAdded);
    if ( v105 )
      *v105 = DeviceExtension;
  }
  else
  {
    if ( (unsigned int)Feature_NDPQualitySpring26__private_IsEnabledDeviceUsageNoInline() && dword_14011C6F8 )
      NdisTraceLoggingDeviceAddFailure(v10, (__int64)a1, (unsigned int)appended, v4, (__int64)DeviceExtension);
    if ( DeviceExtension )
    {
      if ( v96 )
      {
        Ndis::BindRegistry::Reload((Ndis::BindRegistry *)DeviceExtension, 0LL, v37);
        ndisNotifyBindFailureOnUnboundProtocols((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      }
      if ( v35 )
        ndisMInvokeRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
      if ( v91 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 4152));
        *((_QWORD *)DeviceExtension + 520) = 0LL;
      }
      if ( v92 )
      {
        v77 = IoDeleteSymbolicLink((PUNICODE_STRING)(DeviceExtension + 4200));
        if ( v77 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(DeviceObject) = v77;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x4Fu,
              (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
              (char)DeviceExtension,
              DeviceObject);
          }
        }
      }
      if ( v93 )
      {
        v78 = *(_UNICODE_STRING **)a1[3].Data4;
        if ( !v78 )
          v78 = (_UNICODE_STRING *)*((_QWORD *)DeviceExtension + 522);
        v79 = IoDeleteSymbolicLink(v78);
        if ( v79 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(DeviceObject) = v79;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xDu,
            0x50u,
            (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
            (char)DeviceExtension,
            DeviceObject);
        }
      }
      if ( v94 )
        ndisIfRemoveIfBlockMiniportAssociation(
          *((struct _NDIS_IF_BLOCK **)DeviceExtension + 505),
          (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension,
          NET_IF_ADMIN_STATUS_DOWN);
      ndisMDeleteMiniportBlockOnRemove((_NDIS_MINIPORT_BLOCK *)DeviceExtension);
      LOBYTE(DeviceExtension) = 0;
    }
    if ( v95 )
    {
      if ( v100 )
        IoDetachDevice(v100);
      IoDeleteDevice(SourceDevice);
      SourceDevice = 0LL;
    }
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = appended;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x52u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)DeviceExtension,
      DeviceObject);
  }
  return (unsigned int)appended;
}
