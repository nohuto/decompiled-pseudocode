/*
 * XREFs of StorEtwNvmeControllerEvent @ 0x140043CC4
 * Callers:
 *     NvmeSubmitIoToSQ @ 0x140020590 (NvmeSubmitIoToSQ.c)
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeSendSplitIo @ 0x140040110 (NvmeSendSplitIo.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140043110 (NvmeControllerSubmitCommandToSQ.c)
 *     NvmeGetProtocolCommandEffects @ 0x14008FDE0 (NvmeGetProtocolCommandEffects.c)
 *     NvmeValidateProtocolCommandIoctl @ 0x140090310 (NvmeValidateProtocolCommandIoctl.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeAdapterFirmwareActivateAfterResetCallback @ 0x1400D5880 (NvmeAdapterFirmwareActivateAfterResetCallback.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D62D0 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterFirmwareDownloadIoctlCompletion @ 0x1400D75B0 (NvmeAdapterFirmwareDownloadIoctlCompletion.c)
 *     NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D82B0 (NvmeAdapterFirmwareGetInfoIoctlCompletion.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400DFF80 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeAdapterAssignControllerIoQueue @ 0x1400E4A18 (NvmeAdapterAssignControllerIoQueue.c)
 *     NvmeAdapterAssignControllerQueueSlot @ 0x1400E4BF4 (NvmeAdapterAssignControllerQueueSlot.c)
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400E53B0 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterCompleteFabricControllerKeepAlive @ 0x1400E56C0 (NvmeAdapterCompleteFabricControllerKeepAlive.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400E58B0 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E694C (NvmeAdapterCreateFabricControllerIoQueues.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E7904 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E7B8C (NvmeAdapterDisableFabricControllerAsyncEvent.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E7D48 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E80DC (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E829C (NvmeAdapterEnableFabricControllerAsyncEvent.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E9344 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400EAA20 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterNvmeControllerTransportErrorWork @ 0x1400EB3C0 (NvmeAdapterNvmeControllerTransportErrorWork.c)
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400ECA24 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeAdapterSendFabricControllerKeepAlive @ 0x1400ED538 (NvmeAdapterSendFabricControllerKeepAlive.c)
 *     NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400ED958 (NvmeAdapterSetFabricControllerIoQueueCount.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400EE3F8 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeAdapterTerminateFabricControllerAssociation @ 0x1400EEB88 (NvmeAdapterTerminateFabricControllerAssociation.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
 *     NvmeControllerPowerInitialize @ 0x1400F81E4 (NvmeControllerPowerInitialize.c)
 *     NvmeControllerProcessHealthInfoLogForAen @ 0x1400F8E6C (NvmeControllerProcessHealthInfoLogForAen.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400FB2AC (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeFabricControllerQueueComputeCtrlAugmentedChallenge @ 0x1400FBFC8 (NvmeFabricControllerQueueComputeCtrlAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeCtrlResponse @ 0x1400FC1D0 (NvmeFabricControllerQueueComputeCtrlResponse.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400FC5F4 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeHostResponse @ 0x1400FC7FC (NvmeFabricControllerQueueComputeHostResponse.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400FD3F0 (NvmeFabricControllerQueueProcessCtrlResponse.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400FD5A8 (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400FDA30 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400FDE64 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400FE088 (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400FE2D4 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400FE598 (NvmeFabricControllerQueueSendAuthSuccess.c)
 *     NvmeNamespaceQueryDeviceEndurancePropertyCompletion @ 0x14010A090 (NvmeNamespaceQueryDeviceEndurancePropertyCompletion.c)
 *     NvmeNamespaceReinitializeMediaCompletion @ 0x14010C300 (NvmeNamespaceReinitializeMediaCompletion.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceSanitizeRecoverCompletionRoutine @ 0x14010EB10 (NvmeNamespaceSanitizeRecoverCompletionRoutine.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140114060 (NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerRecordCommandTimeout @ 0x14012BB54 (NvmeControllerRecordCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019FB54 (NvmeAdapterStorageProtocolCommandIoctl.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

int __fastcall StorEtwNvmeControllerEvent(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        char a6,
        void *a7,
        char a8,
        void *a9,
        char a10,
        void *a11,
        char a12,
        void *a13,
        char a14,
        void *a15,
        char a16,
        void *a17,
        char a18,
        void *a19,
        char a20)
{
  _UNKNOWN **v20; // rax
  __int64 v21; // rsi
  int v24; // ebx
  __int128 v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  const wchar_t *v29; // rax
  const int *v30; // r8
  const int *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const int *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  void *v39; // rax
  __int64 v40; // rdx
  int v41; // edx
  void *v42; // rax
  __int64 v43; // rdx
  int v44; // edx
  void *v45; // rax
  __int64 v46; // rdx
  int v47; // edx
  void *v48; // rax
  __int64 v49; // rdx
  int v50; // edx
  void *v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  void *v54; // rax
  __int64 v55; // rdx
  int v56; // edx
  void *v57; // rax
  __int64 v58; // rdx
  int v59; // edx
  void *v60; // rax
  bool v61; // zf
  PEVENT_DATA_DESCRIPTOR UserData_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h]
  __int64 v68; // [rsp+90h] [rbp-78h]
  const wchar_t *v69; // [rsp+98h] [rbp-70h]
  int v70; // [rsp+A0h] [rbp-68h]
  int v71; // [rsp+A4h] [rbp-64h]
  const int *v72; // [rsp+A8h] [rbp-60h]
  int v73; // [rsp+B0h] [rbp-58h]
  int v74; // [rsp+B4h] [rbp-54h]
  __int64 v75; // [rsp+B8h] [rbp-50h]
  __int64 v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D0h] [rbp-38h]
  const int *v79; // [rsp+D8h] [rbp-30h]
  int v80; // [rsp+E0h] [rbp-28h]
  int v81; // [rsp+E4h] [rbp-24h]
  __int64 v82; // [rsp+E8h] [rbp-20h]
  int v83; // [rsp+F0h] [rbp-18h]
  int v84; // [rsp+F4h] [rbp-14h]
  __int64 v85; // [rsp+F8h] [rbp-10h]
  int v86; // [rsp+100h] [rbp-8h]
  int v87; // [rsp+104h] [rbp-4h]
  __int64 v88; // [rsp+108h] [rbp+0h]
  int v89; // [rsp+110h] [rbp+8h]
  int v90; // [rsp+114h] [rbp+Ch]
  void *v91; // [rsp+118h] [rbp+10h]
  int v92; // [rsp+120h] [rbp+18h]
  int v93; // [rsp+124h] [rbp+1Ch]
  char *v94; // [rsp+128h] [rbp+20h]
  __int64 v95; // [rsp+130h] [rbp+28h]
  void *v96; // [rsp+138h] [rbp+30h]
  int v97; // [rsp+140h] [rbp+38h]
  int v98; // [rsp+144h] [rbp+3Ch]
  char *v99; // [rsp+148h] [rbp+40h]
  __int64 v100; // [rsp+150h] [rbp+48h]
  void *v101; // [rsp+158h] [rbp+50h]
  int v102; // [rsp+160h] [rbp+58h]
  int v103; // [rsp+164h] [rbp+5Ch]
  char *v104; // [rsp+168h] [rbp+60h]
  __int64 v105; // [rsp+170h] [rbp+68h]
  void *v106; // [rsp+178h] [rbp+70h]
  int v107; // [rsp+180h] [rbp+78h]
  int v108; // [rsp+184h] [rbp+7Ch]
  char *v109; // [rsp+188h] [rbp+80h]
  __int64 v110; // [rsp+190h] [rbp+88h]
  void *v111; // [rsp+198h] [rbp+90h]
  int v112; // [rsp+1A0h] [rbp+98h]
  int v113; // [rsp+1A4h] [rbp+9Ch]
  char *v114; // [rsp+1A8h] [rbp+A0h]
  __int64 v115; // [rsp+1B0h] [rbp+A8h]
  void *v116; // [rsp+1B8h] [rbp+B0h]
  int v117; // [rsp+1C0h] [rbp+B8h]
  int v118; // [rsp+1C4h] [rbp+BCh]
  char *v119; // [rsp+1C8h] [rbp+C0h]
  __int64 v120; // [rsp+1D0h] [rbp+C8h]
  void *v121; // [rsp+1D8h] [rbp+D0h]
  int v122; // [rsp+1E0h] [rbp+D8h]
  int v123; // [rsp+1E4h] [rbp+DCh]
  char *v124; // [rsp+1E8h] [rbp+E0h]
  __int64 v125; // [rsp+1F0h] [rbp+E8h]
  void *v126; // [rsp+1F8h] [rbp+F0h]
  int v127; // [rsp+200h] [rbp+F8h]
  int v128; // [rsp+204h] [rbp+FCh]
  char *v129; // [rsp+208h] [rbp+100h]
  __int64 v130; // [rsp+210h] [rbp+108h]
  _UNKNOWN *retaddr; // [rsp+290h] [rbp+188h] BYREF

  v20 = &retaddr;
  v21 = *(_QWORD *)(a1 + 128);
  v24 = 2;
  ActivityId = 0LL;
  *(_OWORD *)UserData_8 = 0LL;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        v25 = EventNVMeControllerHealthError;
      }
      else if ( (_DWORD)a3 == 3 )
      {
        v25 = EventNVMeControllerHealthWarning;
      }
      else
      {
        v25 = EventNVMeControllerHealthInformational;
      }
    }
    else
    {
      if ( a2 != 1 )
        return (int)v20;
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        v25 = EventNVMeControllerError;
      }
      else if ( (_DWORD)a3 == 3 )
      {
        v25 = EventNVMeControllerWarning;
      }
      else
      {
        v25 = EventNVMeControllerInformational;
      }
    }
  }
  else if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v25 = EventNVMeControllerDiagnosticError;
  }
  else if ( (_DWORD)a3 == 3 )
  {
    v25 = EventNVMeControllerDiagnosticWarning;
  }
  else
  {
    v25 = EventNVMeControllerDiagnosticInformational;
  }
  EventDescriptor_8 = v25;
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
    *((_QWORD *)&EventDescriptor_8 + 1) |= 0x8000uLL;
  RaidDriverGetName(*(_QWORD *)(v21 + 16), UserData_8, a3);
  v26 = -1LL;
  UserData.Ptr = v21 + 56;
  *(_QWORD *)&UserData.Size = 4LL;
  v67 = v21 + 1048;
  v68 = 16LL;
  if ( UserData_8[1] )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_WORD *)&UserData_8[1]->Ptr + v27) );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v70 = v28;
  v29 = L"NULL";
  v71 = 0;
  if ( UserData_8[1] )
    v29 = (const wchar_t *)UserData_8[1];
  v30 = &dword_140154ADC;
  v31 = *(const int **)(a1 + 792);
  v69 = v29;
  if ( v31 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v31 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 1;
    v31 = &dword_140154ADC;
  }
  v73 = v33;
  v72 = v31;
  v34 = *(const int **)(a1 + 752);
  v75 = a1 + 4;
  v77 = a1 + 744;
  v74 = 0;
  v76 = 2LL;
  v78 = 1LL;
  if ( v34 )
    v30 = v34;
  else
    v34 = &dword_140154ADC;
  v35 = -1LL;
  do
    ++v35;
  while ( *((_BYTE *)v30 + v35) );
  v79 = v34;
  v80 = v35 + 1;
  v82 = a1 + 800;
  v36 = -1LL;
  v81 = 0;
  do
    ++v36;
  while ( *(_BYTE *)(a1 + 800 + v36) );
  v84 = 0;
  v83 = v36 + 1;
  v37 = -1LL;
  v85 = a1 + 841;
  do
    ++v37;
  while ( *(_BYTE *)(a1 + 841 + v37) );
  v87 = 0;
  v86 = v37 + 1;
  v38 = -1LL;
  v88 = a4;
  do
    ++v38;
  while ( *(_WORD *)(a4 + 2 * v38) );
  v90 = 0;
  v89 = 2 * v38 + 2;
  v39 = a5;
  if ( a5 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_WORD *)a5 + v40) );
    v41 = 2 * v40 + 2;
  }
  else
  {
    v41 = 2;
  }
  v92 = v41;
  v93 = 0;
  if ( !a5 )
    v39 = &unk_140153274;
  v95 = 8LL;
  v91 = v39;
  v94 = &a6;
  v42 = a7;
  if ( a7 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_WORD *)a7 + v43) );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v44 = 2;
  }
  v97 = v44;
  v98 = 0;
  if ( !a7 )
    v42 = &unk_140153274;
  v100 = 8LL;
  v96 = v42;
  v99 = &a8;
  v45 = a9;
  if ( a9 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_WORD *)a9 + v46) );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v47 = 2;
  }
  v102 = v47;
  v103 = 0;
  if ( !a9 )
    v45 = &unk_140153274;
  v105 = 8LL;
  v101 = v45;
  v104 = &a10;
  v48 = a11;
  if ( a11 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_WORD *)a11 + v49) );
    v50 = 2 * v49 + 2;
  }
  else
  {
    v50 = 2;
  }
  v107 = v50;
  v108 = 0;
  if ( !a11 )
    v48 = &unk_140153274;
  v110 = 8LL;
  v106 = v48;
  v109 = &a12;
  v51 = a13;
  if ( a13 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *((_WORD *)a13 + v52) );
    v53 = 2 * v52 + 2;
  }
  else
  {
    v53 = 2;
  }
  v112 = v53;
  v113 = 0;
  if ( !a13 )
    v51 = &unk_140153274;
  v115 = 8LL;
  v111 = v51;
  v114 = &a14;
  v54 = a15;
  if ( a15 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( *((_WORD *)a15 + v55) );
    v56 = 2 * v55 + 2;
  }
  else
  {
    v56 = 2;
  }
  v117 = v56;
  v118 = 0;
  if ( !a15 )
    v54 = &unk_140153274;
  v120 = 8LL;
  v116 = v54;
  v119 = &a16;
  v57 = a17;
  if ( a17 )
  {
    v58 = -1LL;
    do
      ++v58;
    while ( *((_WORD *)a17 + v58) );
    v59 = 2 * v58 + 2;
  }
  else
  {
    v59 = 2;
  }
  v122 = v59;
  v123 = 0;
  if ( !a17 )
    v57 = &unk_140153274;
  v125 = 8LL;
  v121 = v57;
  v124 = &a18;
  v60 = a19;
  v61 = a19 == 0LL;
  if ( a19 )
  {
    do
      ++v26;
    while ( *((_WORD *)a19 + v26) );
    v24 = 2 * v26 + 2;
    v61 = a19 == 0LL;
  }
  if ( v61 )
    v60 = &unk_140153274;
  v127 = v24;
  v126 = v60;
  v128 = 0;
  v129 = &a20;
  v130 = 8LL;
  LODWORD(v20) = EtwWriteEx(
                   StorPortEventProvider_Context,
                   (PCEVENT_DESCRIPTOR)&EventDescriptor_8,
                   0LL,
                   1u,
                   &ActivityId,
                   0LL,
                   0x1Au,
                   &UserData);
  return (int)v20;
}
