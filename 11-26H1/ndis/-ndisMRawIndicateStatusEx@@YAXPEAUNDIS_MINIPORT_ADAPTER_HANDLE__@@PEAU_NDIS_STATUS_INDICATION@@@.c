/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D960 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D980 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401676B0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x14000D8B0 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400447A0 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x14004C120 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D8B0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D8F0 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14004E440 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004E540 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400740B0 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007DF60 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007F700 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140084DD0 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x140089BB0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14008F3D0 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14009CBE8 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009F920 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009FD7C (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x1400A1F90 (Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400A6CC8 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1400AEA88 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B5DFC (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B5E90 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B60E8 (-ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400C8108 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401693D0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_STATUS_INDICATION *a2,
        int a3)
{
  __int64 *StatusBuffer; // r12
  unsigned __int8 v4; // r14
  unsigned int StatusBufferSize; // edi
  struct _NDIS_STATUS_INDICATION *v6; // r15
  int StatusCode; // r13d
  const struct _GUID *v9; // rcx
  int v10; // r9d
  int v11; // r9d
  char v12; // r14
  KIRQL v13; // r8
  __int64 v14; // rdx
  KIRQL v15; // al
  KIRQL v16; // bl
  KIRQL v17; // al
  KIRQL v18; // bl
  KIRQL v19; // al
  KIRQL v20; // bl
  KIRQL v21; // al
  KIRQL v22; // bl
  __int64 v23; // r8
  bool v24; // dl
  unsigned int v25; // eax
  bool v26; // zf
  bool v27; // bl
  KIRQL v28; // al
  KIRQL v29; // bl
  unsigned __int8 updated; // r14
  KIRQL v31; // dl
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  unsigned int v35; // ecx
  unsigned __int16 *v36; // rbx
  KIRQL v37; // r14
  char v38; // di
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v39; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v40; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v41; // rax
  _QWORD *v42; // rbx
  _QWORD *v43; // rcx
  void **v44; // rcx
  __int64 *v45; // r9
  int i; // edx
  __int64 **v47; // r8
  char v48; // di
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v49; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v50; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v51; // rax
  unsigned int v52; // edi
  KIRQL v53; // dl
  _QWORD *v54; // rbx
  _QWORD *v55; // rcx
  void **v56; // rcx
  __int64 *v57; // r9
  int j; // edx
  __int64 **v59; // r8
  int v60; // r9d
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *SourceHandle; // rcx
  KIRQL v62; // di
  int v63; // r13d
  _OWORD *v64; // rax
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rbx
  KIRQL v66; // al
  KIRQL v67; // r14
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int v69; // eax
  _NET_IF_MEDIA_CONNECT_STATE v70; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  char v72; // di
  int v73; // ecx
  unsigned __int8 v74; // al
  unsigned int v75; // eax
  BOOL v76; // edx
  int v77; // ecx
  int v78; // eax
  char v79; // al
  unsigned __int8 Timeout; // [rsp+20h] [rbp-A9h]
  unsigned __int8 *v81; // [rsp+28h] [rbp-A1h]
  unsigned __int8 v82; // [rsp+40h] [rbp-89h]
  unsigned int v83; // [rsp+44h] [rbp-85h]
  unsigned __int8 v84[4]; // [rsp+48h] [rbp-81h] BYREF
  BOOL v85; // [rsp+4Ch] [rbp-7Dh]
  int v86; // [rsp+50h] [rbp-79h]
  __int128 v87; // [rsp+59h] [rbp-70h]
  __int64 *v88; // [rsp+70h] [rbp-59h]
  struct _NDIS_STATUS_INDICATION *v89; // [rsp+78h] [rbp-51h]
  struct _KTIMER Timer; // [rsp+80h] [rbp-49h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-9h] BYREF
  int v92; // [rsp+C8h] [rbp-1h]
  int v93; // [rsp+CCh] [rbp+3h]
  __int64 v94; // [rsp+D0h] [rbp+7h]
  __int64 v95; // [rsp+D8h] [rbp+Fh]
  int v96; // [rsp+E0h] [rbp+17h]
  int v97; // [rsp+E4h] [rbp+1Bh]

  StatusBuffer = (__int64 *)a2->StatusBuffer;
  v4 = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  StatusCode = a2->StatusCode;
  v88 = StatusBuffer;
  v82 = 1;
  v89 = a2;
  v83 = StatusBufferSize;
  LOBYTE(v85) = 0;
  LOBYTE(v86) = 0;
  v9 = &WPP_aa77392295b13b3ad77210343ba6186d_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      0xB8u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
    v9 = &WPP_aa77392295b13b3ad77210343ba6186d_Traceguids;
  }
  v91 = 2621824LL;
  v26 = v6->Header.Type == 0x98;
  v93 = 0;
  v92 = *((_DWORD *)a1 + 87);
  v94 = *((_QWORD *)a1 + 345);
  v95 = *((_QWORD *)a1 + 346);
  v96 = *((_DWORD *)a1 + 203);
  v97 = *((_DWORD *)a1 + 204);
  if ( !v26 || v6->Header.Size < 0x70u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v10 = 185;
    goto LABEL_284;
  }
  if ( ((StatusCode - 1073872978) & 0xFFFFFFFD) != 0 )
  {
    if ( StatusCode == 1073807384 )
    {
      if ( StatusBufferSize < 4 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v10 = 187;
LABEL_284:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          24,
          v10,
          (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
          (char)a1);
        return;
      }
LABEL_55:
      v26 = StatusCode == 1073807372;
      if ( StatusCode == 1073807372 )
      {
        HIDWORD(v91) = 2;
LABEL_215:
        v6->StatusCode = 1073807383;
        v52 = 40;
        v6->StatusBuffer = &v91;
        v83 = 40;
        StatusBuffer = &v91;
        v6->StatusBufferSize = 40;
        StatusCode = 1073807383;
LABEL_145:
        v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        v84[0] = v53;
        if ( StatusCode == 1073807383 )
        {
          *((_BYTE *)a1 + 88) |= 0x18u;
          if ( *((_DWORD *)StatusBuffer + 1) == 1 && *((_DWORD *)a1 + 86) != 1 )
            *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
          a1[86] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)StatusBuffer + 4);
          a1[87] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[1];
          *((_QWORD *)a1 + 345) = StatusBuffer[2];
          *((_QWORD *)a1 + 346) = StatusBuffer[3];
          a1[203] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[4];
          a1[204] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)StatusBuffer + 36);
        }
        else if ( StatusCode == 1073938437 )
        {
          *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
        }
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v53);
        HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 9u);
        if ( HigherFilterWithPnpRef )
        {
          while ( 1 )
          {
            v66 = KeAcquireSpinLockRaiseToDpc(&HigherFilterWithPnpRef->Lock);
            v67 = v66;
            HigherFilterWithPnpRef->LockThread = KeGetCurrentThread();
            p_Lock = &HigherFilterWithPnpRef->Lock;
            if ( (HigherFilterWithPnpRef->Flags & 0x2000) == 0 )
              break;
            HigherFilterWithPnpRef->LockThread = 0LL;
            KeReleaseSpinLock(p_Lock, v66);
            if ( KeGetCurrentIrql() == 2 )
            {
              KeStallExecutionProcessor(1u);
            }
            else
            {
              memset(&Timer, 0, sizeof(Timer));
              KeInitializeTimerEx(&Timer, SynchronizationTimer);
              KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
              KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
            }
          }
          HigherFilterWithPnpRef->Flags |= 0x2000u;
          HigherFilterWithPnpRef->LockThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v6 = v89;
          switch ( StatusCode )
          {
            case 1073807383:
              if ( v89->SourceHandle == &ndisIntReqGeneric )
                *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
              v69 = v83;
              if ( v83 == -2 )
              {
                v69 = 40;
                v6->StatusBufferSize = 40;
              }
              if ( StatusBuffer )
              {
                if ( v69 < 0x28 )
                {
                  v74 = v82;
                  v72 = v85;
                  goto LABEL_242;
                }
                v70 = *((_DWORD *)StatusBuffer + 1);
                MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
                if ( MediaConnectState != v70 )
                {
                  if ( MediaConnectState == MediaConnectStateConnected )
                  {
                    v72 = 1;
LABEL_237:
                    HigherFilterWithPnpRef->MediaConnectState = v70;
                    HigherFilterWithPnpRef->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
                    HigherFilterWithPnpRef->RcvLinkSpeed = StatusBuffer[3];
                    HigherFilterWithPnpRef->XmitLinkSpeed = StatusBuffer[2];
                    HigherFilterWithPnpRef->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
                    HigherFilterWithPnpRef->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
LABEL_241:
                    v74 = v82;
LABEL_242:
                    if ( v74 )
                    {
                      ndisFIndicateStatusToFilter(HigherFilterWithPnpRef, v6);
                      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)a1);
                      if ( v72 )
                        ndisSwapFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      if ( (_BYTE)v86 )
                        ndisRestoreFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      *((_QWORD *)a1 + 65) = 0LL;
                      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
                    }
                    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilterWithPnpRef);
                    v75 = HigherFilterWithPnpRef->Flags & 0xFFFFDFFF;
                    HigherFilterWithPnpRef->LockThread = 0LL;
                    HigherFilterWithPnpRef->Flags = v75;
                    KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v67);
                    ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_278:
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_qD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        0x18u,
                        0xCBu,
                        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
                        (char)a1,
                        v6->StatusCode);
                    return;
                  }
                  v73 = (unsigned __int8)v86;
                  if ( v70 == MediaConnectStateConnected )
                    v73 = 1;
                  v86 = v73;
                }
                v72 = v85;
                goto LABEL_237;
              }
              break;
            case 1073938515:
              ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, v89);
              break;
            case 1073938513:
              v74 = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, v89);
              v72 = v85;
              goto LABEL_242;
            case 1073938514:
              v74 = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, v89);
              v72 = v85;
              goto LABEL_242;
            case 1073872902:
              v74 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, (unsigned __int16 *)StatusBuffer, v83);
              v72 = v85;
              goto LABEL_242;
            default:
              if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
              {
                v74 = ndisFIndicateTimestampChange(HigherFilterWithPnpRef, StatusCode, StatusBuffer, v83);
                v72 = v85;
                goto LABEL_242;
              }
              break;
          }
          v72 = v85;
          goto LABEL_241;
        }
        ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v84);
        if ( StatusCode == 1073807383 )
        {
          if ( v6->SourceHandle == &ndisIntReqGeneric )
            *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
          if ( StatusBuffer && v52 >= 0x28 )
          {
            if ( *((_DWORD *)StatusBuffer + 1) == 1
              || (v85 = ((_DWORD)a1[30] & 0x20000000) != 0,
                  _InterlockedAnd((volatile signed __int32 *)a1 + 30, 0xDFFFFFFF),
                  *((_DWORD *)StatusBuffer + 1) == 1) )
            {
              v76 = ((*((_DWORD *)a1 + 30) >> 29) & 1) == 0;
              _InterlockedOr((volatile signed __int32 *)a1 + 30, 0x20000000u);
              v86 = v76;
            }
            else
            {
              LOBYTE(v76) = v86;
            }
            v77 = *((_DWORD *)StatusBuffer + 1);
            v78 = *((_DWORD *)a1 + 120);
            if ( v78 != v77 )
            {
              if ( v78 == 1 )
              {
                v6->Flags |= 2u;
                ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (_LIST_ENTRY *)v6);
                goto LABEL_274;
              }
              v79 = v76;
              if ( v77 == 1 )
                v79 = 1;
              LOBYTE(v86) = v79;
            }
          }
        }
        v6->Flags |= 2u;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (_LIST_ENTRY *)v6);
        if ( !v85 )
        {
LABEL_275:
          if ( (_BYTE)v86 )
            ndisRestoreFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v84[0]);
          goto LABEL_278;
        }
LABEL_274:
        ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
        goto LABEL_275;
      }
      goto LABEL_212;
    }
    if ( (unsigned int)(StatusCode - 1073872902) <= 1 )
    {
      v82 = ndisMIndicateOffloadChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusCode, StatusBuffer, StatusBufferSize);
      v4 = v82;
      if ( !v82 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 188;
LABEL_14:
        LOBYTE(a2) = 4;
        goto LABEL_15;
      }
    }
    if ( StatusCode == 1073872908 )
    {
      v12 = 0;
      v82 = 0;
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v14 = *((_QWORD *)a1 + 533);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      if ( v14
        && StatusBufferSize >= 0x1C
        && *(_BYTE *)StatusBuffer == 0x80
        && *((_WORD *)StatusBuffer + 1) >= 0x1Cu
        && *((_BYTE *)StatusBuffer + 1) )
      {
        v12 = 1;
        v82 = 1;
        *(_OWORD *)v14 = *(_OWORD *)StatusBuffer;
        *(_QWORD *)(v14 + 16) = StatusBuffer[2];
        *(_DWORD *)(v14 + 24) = *((_DWORD *)StatusBuffer + 6);
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v13);
      if ( v12 )
        goto LABEL_55;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 189;
      goto LABEL_14;
    }
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v16 = v15;
      v82 = ndisMIndicateReceiveFilterCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      *((_QWORD *)a1 + 65) = 0LL;
      v4 = v82;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v16);
      if ( !v82 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 190;
        goto LABEL_14;
      }
    }
    if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v18 = v17;
      v82 = ndisMIndicateHwTimestampCapabilitiesChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0,
              0LL);
      *((_QWORD *)a1 + 65) = 0LL;
      v4 = v82;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v18);
      if ( !v82 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 191;
        goto LABEL_14;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v20 = v19;
      v82 = ndisMIndicateNicSwitchCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      *((_QWORD *)a1 + 65) = 0LL;
      v4 = v82;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v20);
      if ( !v82 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 192;
        goto LABEL_14;
      }
    }
    switch ( StatusCode )
    {
      case 1073873408:
        v82 = ndisMIndicatePDConfigChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                (int)a2,
                StatusBuffer,
                StatusBufferSize,
                Timeout);
        if ( v82 )
          goto LABEL_55;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 193;
        goto LABEL_14;
      case 1076105216:
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        v22 = v21;
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        v23 = *((_QWORD *)a1 + 69);
        v24 = v23 != 0;
        if ( ((_DWORD)a1[674] & 0x40000000) != 0 && v23 )
          v24 = (*(_BYTE *)(v23 + 4) & 0x10) == 0 && *(_BYTE *)(v23 + 8);
        if ( v24 )
        {
          v25 = *(unsigned __int16 *)(v23 + 12);
          if ( StatusBufferSize < v25 )
            v25 = StatusBufferSize;
          memmove((void *)(v23 + *(unsigned int *)(v23 + 16)), StatusBuffer, v25);
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v22);
          v82 = 0;
          goto LABEL_55;
        }
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v21);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 194;
        LOBYTE(a2) = 3;
        goto LABEL_15;
      case 1073872995:
        v27 = *(_BYTE *)StatusBuffer != 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v81) = v27;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x18u,
            0xC3u,
            (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
            v81);
        }
        ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)a1, v27);
        ndisIfUpdateInterfaceHiddenFlag(*((struct _NDIS_IF_BLOCK **)a1 + 505), v27);
        return;
    }
    if ( (unsigned int)(StatusCode - 1073873056) <= 1 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v29 = v28;
      v82 = ndisMIndicateQosParametersChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              (struct _NDIS_QOS_PARAMETERS *)StatusBuffer,
              StatusBufferSize);
      *((_QWORD *)a1 + 65) = 0LL;
      v4 = v82;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v29);
      if ( !v82 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 196;
        LOBYTE(a2) = 3;
        goto LABEL_15;
      }
    }
    if ( StatusCode == 1073872944 )
    {
      updated = 0;
      v82 = 0;
      if ( StatusBufferSize >= 0x444
        && *(_BYTE *)StatusBuffer == 0x80
        && *((_WORD *)StatusBuffer + 1) >= 0x444u
        && *((_BYTE *)StatusBuffer + 1) >= 2u
        && (*((_DWORD *)StatusBuffer + 1) & 0xFFFF0000) == 0x100000 )
      {
        updated = ndisUpdateRcvFilterQueueParameters(
                    (struct _NDIS_MINIPORT_BLOCK *)a1,
                    (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)StatusBuffer);
        v82 = updated;
      }
      if ( updated )
        goto LABEL_55;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 197;
      LOBYTE(a2) = 3;
LABEL_15:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        24,
        v11,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids);
      return;
    }
    if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
    {
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v32 = *((_QWORD *)a1 + 512);
      if ( v32 )
      {
        if ( StatusCode == 1073872899 )
        {
          if ( StatusBufferSize >= 0x14
            && *(_BYTE *)StatusBuffer == 0x80
            && *((_WORD *)StatusBuffer + 1) >= 0x14u
            && *((_BYTE *)StatusBuffer + 1) )
          {
            v82 = 1;
            *(_OWORD *)(v32 + 1020) = *(_OWORD *)StatusBuffer;
            *(_DWORD *)(v32 + 1036) = *((_DWORD *)StatusBuffer + 4);
            goto LABEL_105;
          }
        }
        else if ( StatusCode == 1073872907
               && StatusBufferSize >= 0x14
               && *(_BYTE *)StatusBuffer == 0x80
               && *((_WORD *)StatusBuffer + 1) >= 0x14u
               && *((_BYTE *)StatusBuffer + 1) )
        {
          v82 = 1;
          *(_OWORD *)(v32 + 1040) = *(_OWORD *)StatusBuffer;
          *(_DWORD *)(v32 + 1056) = *((_DWORD *)StatusBuffer + 4);
          goto LABEL_105;
        }
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v31);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 198;
      LOBYTE(a2) = 3;
      goto LABEL_15;
    }
    v33 = v4;
    switch ( StatusCode )
    {
      case 1073938515:
        if ( (unsigned int)Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline(v9, v4)
          && StatusBufferSize < 0x34 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 3;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v34,
              24,
              199,
              (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids);
          }
        }
        else
        {
          ndisMIndicatePMCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, v6);
        }
        goto LABEL_55;
      case 1073938516:
        v35 = v6->StatusBufferSize;
        v36 = (unsigned __int16 *)v6->StatusBuffer;
        if ( v35 < 0x34 || v35 < v36[1] )
          goto LABEL_55;
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( v36[1] >= 0x3Cu )
        {
          *(_OWORD *)(a1 + 250) = *(_OWORD *)v36;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)v36 + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)v36 + 2);
          *((_QWORD *)a1 + 131) = *((_QWORD *)v36 + 6);
          a1[264] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v36 + 28);
        }
        else
        {
          *(_OWORD *)(a1 + 250) = 0LL;
          *(_OWORD *)(a1 + 254) = 0LL;
          *(_OWORD *)(a1 + 258) = 0LL;
          *((_QWORD *)a1 + 131) = 0LL;
          *((_DWORD *)a1 + 264) = 0;
          *(_OWORD *)(a1 + 250) = *(_OWORD *)v36;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)v36 + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)v36 + 2);
          a1[262] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v36 + 24);
        }
        ndisCheckMiniportWakeUpCapable((struct _NDIS_MINIPORT_BLOCK *)a1);
        v31 = v37;
LABEL_105:
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v31);
        goto LABEL_55;
      case 1073938513:
        v38 = 0;
        if ( v6->StatusBufferSize >= 4 )
        {
          v39 = *((_BYTE *)a1 + 32) > 6u || *((_BYTE *)a1 + 32) == 6 && *((_BYTE *)a1 + 33) >= 0x14u
              ? a1 + 242
              : a1 + 240;
          v40 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v39;
          if ( *(_QWORD *)v39 )
          {
            while ( 1 )
            {
              v41 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v40;
              if ( *((_DWORD *)v40 + 10) == *(_DWORD *)v6->StatusBuffer )
                break;
              v39 = v40;
              v40 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v40;
              if ( !v41 )
                goto LABEL_55;
            }
            *(_QWORD *)v39 = v41;
            LODWORD(v6->NdisReserved[2]) = 0;
            v42 = v40 + 2;
            if ( v42 )
            {
              do
              {
                v43 = v42;
                v42 = (_QWORD *)*v42;
                v44 = (void **)(v43 - 1);
                if ( v44[3] == &ndisIntReqWmi )
                  v38 = 1;
                ExFreePoolWithTag(v44, 0);
                ++LODWORD(v6->NdisReserved[2]);
              }
              while ( v42 );
              StatusBuffer = v88;
              if ( v38 )
              {
                v45 = (__int64 *)*((_QWORD *)a1 + 121);
                v87 = 0LL;
                for ( i = 0; v45; v45 = (__int64 *)*v45 )
                {
                  v47 = (__int64 **)(v45 + 1);
                  if ( v45 != (__int64 *)-8LL )
                  {
                    do
                    {
                      if ( v47[2] == (__int64 *)&ndisIntReqWmi )
                      {
                        switch ( *((_DWORD *)v45 + 15) )
                        {
                          case 1:
                            i |= 1u;
                            break;
                          case 2:
                            i |= 2u;
                            break;
                          case 3:
                            i |= 4u;
                            break;
                          case 4:
                            i |= 8u;
                            break;
                          case 5:
                            i |= 0x10000u;
                            break;
                        }
                      }
                      v47 = (__int64 **)*v47;
                    }
                    while ( v47 );
                  }
                }
                *((_DWORD *)a1 + 286) = i;
                ndisGetCombinedPMConfig((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_PM_PARAMETERS *)a1 + 56);
              }
            }
          }
        }
        goto LABEL_55;
    }
    v82 = v4;
    if ( StatusCode == 1073938514 )
    {
      v48 = 0;
      v82 = v4;
      if ( v6->StatusBufferSize >= 4 )
      {
        v49 = a1 + 244;
        v50 = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)*((_QWORD *)a1 + 122);
        v82 = v4;
        if ( v50 )
        {
          v82 = v4;
          while ( 1 )
          {
            v51 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v50;
            if ( *((_DWORD *)v50 + 49) == *(_DWORD *)v6->StatusBuffer )
              break;
            v49 = v50;
            v50 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v50;
            if ( !v51 )
              goto LABEL_144;
          }
          *(_QWORD *)v49 = v51;
          LODWORD(v6->NdisReserved[2]) = 0;
          v54 = v50 + 2;
          if ( v54 )
          {
            do
            {
              v55 = v54;
              v54 = (_QWORD *)*v54;
              v56 = (void **)(v55 - 1);
              if ( v56[3] == &ndisIntReqWmi )
                v48 = 1;
              ExFreePoolWithTag(v56, 0);
              ++LODWORD(v6->NdisReserved[2]);
            }
            while ( v54 );
            StatusBuffer = v88;
            if ( v48 )
            {
              v57 = (__int64 *)*((_QWORD *)a1 + 122);
              v87 = 0LL;
              for ( j = 0; v57; v57 = (__int64 *)*v57 )
              {
                v59 = (__int64 **)(v57 + 1);
                if ( v57 != (__int64 *)-8LL )
                {
                  do
                  {
                    if ( v59[2] == (__int64 *)&ndisIntReqWmi )
                    {
                      if ( *((_DWORD *)v57 + 15) == 1 )
                      {
                        j |= 1u;
                      }
                      else if ( *((_DWORD *)v57 + 15) == 2 )
                      {
                        j |= 2u;
                      }
                      else if ( (unsigned int)(*((_DWORD *)v57 + 15) - 3) <= 1 )
                      {
                        j |= 0x80u;
                      }
                    }
                    v59 = (__int64 **)*v59;
                  }
                  while ( v59 );
                }
              }
              *((_DWORD *)a1 + 287) = j;
              ndisGetCombinedPMConfig((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_PM_PARAMETERS *)a1 + 56);
              goto LABEL_144;
            }
          }
        }
      }
      goto LABEL_211;
    }
    if ( StatusCode == 1073938517 )
    {
      v82 = ndisMValidatePMWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, v6, a3);
      if ( v82 )
      {
LABEL_211:
        v26 = StatusCode == 1073807372;
LABEL_212:
        if ( StatusCode == 1073807371 )
        {
          HIDWORD(v91) = 1;
          goto LABEL_215;
        }
        if ( v26 )
          goto LABEL_215;
LABEL_144:
        v52 = v83;
        goto LABEL_145;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v60 = 200;
LABEL_171:
      LOBYTE(v33) = 3;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v33,
        24,
        v60,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1);
      return;
    }
    if ( StatusCode != 1073873072 )
    {
      v82 = v4;
      if ( StatusCode != 1073873073 )
        goto LABEL_55;
    }
    SourceHandle = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->SourceHandle;
    if ( SourceHandle == (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)0x140000000LL )
      goto LABEL_55;
    if ( StatusCode == 1073873072 )
    {
      if ( *((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
        || v6->Header.Type != 0x98
        || !v6->Header.Revision
        || v6->Header.Size < 0x70u
        || v6->DestinationHandle
        || SourceHandle != a1
        || v6->PortNumber
        || v6->StatusBufferSize != 34
        || *(_WORD *)v6->StatusBuffer > 0x20u )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v60 = 201;
        goto LABEL_171;
      }
    }
    else if ( *((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
           || v6->Header.Type != 0x98
           || !v6->Header.Revision
           || v6->Header.Size < 0x70u
           || v6->DestinationHandle
           || SourceHandle != a1
           || v6->PortNumber
           || v6->StatusBufferSize != 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v60 = 202;
      goto LABEL_171;
    }
    v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v26 = *((_BYTE *)a1 + 5328) == 0;
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    if ( v26 )
    {
      if ( !(unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au) )
      {
LABEL_205:
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v62);
        return;
      }
      if ( !ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)a1, 0x1Du) )
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au);
        goto LABEL_205;
      }
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1324), (WORK_QUEUE_TYPE)40);
      *((_BYTE *)a1 + 5328) = 1;
    }
    v63 = StatusCode - 1073873072;
    if ( v63 )
    {
      if ( v63 == 1 )
      {
        a1[1342] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
        *((_BYTE *)a1 + 5330) = 1;
      }
    }
    else
    {
      v64 = v6->StatusBuffer;
      *(_OWORD *)(a1 + 1333) = *v64;
      *(_OWORD *)(a1 + 1337) = v64[1];
      *((_WORD *)a1 + 2682) = *((_WORD *)v64 + 16);
      *((_BYTE *)a1 + 5329) = 1;
    }
    goto LABEL_205;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      186,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      StatusCode,
      (char)a1);
  }
}
