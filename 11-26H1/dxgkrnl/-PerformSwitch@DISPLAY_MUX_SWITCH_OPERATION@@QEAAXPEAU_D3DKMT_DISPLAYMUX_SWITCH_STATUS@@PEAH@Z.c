/*
 * XREFs of ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC
 * Callers:
 *     DxgkDisplayMuxSwitchExecute @ 0x1400911A0 (DxgkDisplayMuxSwitchExecute.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1400077C0 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x14004CC14 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1400577A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1400637E0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 *     DpiGetIntegratedEdidSizeForDisplayMuxTarget @ 0x1400868CC (DpiGetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     DpiSetIntegratedEdidSizeForDisplayMuxTarget @ 0x140086D7C (DpiSetIntegratedEdidSizeForDisplayMuxTarget.c)
 *     _DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A298 (_DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2B4 (_DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     _DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2FC (_DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x14008ABA4 (-CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DI.c)
 *     ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008C580 (-GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z.c)
 *     ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x14008EA20 (-QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z.c)
 *     ?ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ @ 0x14008EBA4 (-ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ.c)
 *     ?SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x14008F3AC (-SetAdapterAllowedToReportDisplayMuxHpd@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_TARG.c)
 *     ?SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z @ 0x14008F3FC (-SetDisableProcessingDisplayBatchesStatus@DISPLAY_MUX_MGR@@QEAAX_N@Z.c)
 *     ?SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z @ 0x14008F4B0 (-SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z.c)
 *     ?SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z @ 0x14008FC34 (-SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z.c)
 *     ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x14008FE08 (-TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x1400937E0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiDxgkDdiDisplayMuxPostSwitchToPhase1 @ 0x140093DF0 (DpiDxgkDdiDisplayMuxPostSwitchToPhase1.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAway @ 0x140093F64 (DpiDxgkDdiDisplayMuxPreSwitchAway.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData @ 0x140094014 (DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData.c)
 *     DpiDxgkDdiDisplayMuxPreSwitchTo @ 0x1400940D8 (DpiDxgkDdiDisplayMuxPreSwitchTo.c)
 *     DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14009421C (DpiDxgkDdiDisplayMuxSetInternalPanelInfo.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024D810 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024D910 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiAcpiIsLidOpen @ 0x140252FF4 (DpiAcpiIsLidOpen.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403F1AB0 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 */

void __fastcall DISPLAY_MUX_SWITCH_OPERATION::PerformSwitch(
        DISPLAY_MUX_SWITCH_OPERATION *this,
        struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *a2,
        int *a3)
{
  void *v4; // rbx
  char v5; // r15
  struct _LUID *v6; // r12
  int AdapterAndAcquire; // eax
  bool v8; // zf
  struct _KMUTANT *v9; // r13
  struct _KMUTANT *v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int32 v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  char v18; // di
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rdi
  unsigned int v27; // edx
  char *v28; // r8
  __int32 v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  char *v33; // r8
  __int64 v34; // rbx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdi
  unsigned int v39; // esi
  __int64 v40; // rdi
  unsigned int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rbx
  unsigned int v45; // edi
  __int64 v46; // rbx
  unsigned int v47; // edi
  __int64 v48; // rcx
  bool v49; // zf
  _QWORD *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned int v54; // r13d
  __int64 v55; // rdx
  __int64 v56; // r9
  struct _DEVICE_OBJECT *v57; // rdi
  int v58; // edx
  int v59; // r9d
  unsigned int v60; // r8d
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdi
  char IsLidOpen; // al
  __int64 v66; // rdx
  __int64 v67; // r10
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  char v69; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v70[3]; // [rsp+31h] [rbp-CFh] BYREF
  int Caps; // [rsp+34h] [rbp-CCh] BYREF
  char v72; // [rsp+38h] [rbp-C8h]
  _QWORD *v73; // [rsp+40h] [rbp-C0h] BYREF
  char v74; // [rsp+48h] [rbp-B8h]
  struct _KMUTANT *v75; // [rsp+50h] [rbp-B0h] BYREF
  char v76; // [rsp+58h] [rbp-A8h]
  DISPLAY_MUX_SWITCH_OPERATION *v77; // [rsp+60h] [rbp-A0h] BYREF
  char v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h] BYREF
  int v80; // [rsp+78h] [rbp-88h]
  int v81; // [rsp+7Ch] [rbp-84h]
  __int128 v82; // [rsp+80h] [rbp-80h]
  char v83; // [rsp+90h] [rbp-70h]
  __int16 v84[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v85; // [rsp+9Ch] [rbp-64h] BYREF
  __m128i v86; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v87[3]; // [rsp+C0h] [rbp-40h] BYREF
  char v88; // [rsp+D8h] [rbp-28h]
  __int64 v89; // [rsp+E0h] [rbp-20h] BYREF
  int v90; // [rsp+E8h] [rbp-18h]
  int v91; // [rsp+ECh] [rbp-14h]
  __int128 v92; // [rsp+F0h] [rbp-10h]
  char v93; // [rsp+100h] [rbp+0h]
  struct _DEVICE_OBJECT *v94; // [rsp+108h] [rbp+8h] BYREF
  __int64 v95; // [rsp+110h] [rbp+10h]
  int v96; // [rsp+128h] [rbp+28h]
  unsigned int v97; // [rsp+138h] [rbp+38h]
  void *v98; // [rsp+140h] [rbp+40h] BYREF
  union _LARGE_INTEGER *v99; // [rsp+148h] [rbp+48h]
  void *v100; // [rsp+150h] [rbp+50h]
  int *v101; // [rsp+158h] [rbp+58h]
  _OWORD v102[15]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v103[224]; // [rsp+250h] [rbp+150h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v104; // [rsp+388h] [rbp+288h] BYREF

  v104 = a2;
  v101 = a3;
  v99 = 0LL;
  v100 = 0LL;
  v4 = 0LL;
  v85 = 0;
  v98 = 0LL;
  v102[0] = 0LL;
  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v69);
  v5 = byte_1401694F1;
  v6 = (struct _LUID *)((char *)this + 68);
  v75 = 0LL;
  v76 = 0;
  AdapterAndAcquire = AUTO_REMOVE_LOCK::FindAdapterAndAcquire(
                        (AUTO_REMOVE_LOCK *)&v75,
                        (struct _LUID *)((char *)this + 68));
  if ( CheckFailed(AdapterAndAcquire, 1044, (__int64)this + 92, 0x21Eu) )
    goto LABEL_2;
  v73 = 0LL;
  v74 = 0;
  Caps = AUTO_REMOVE_LOCK::FindAdapterAndAcquire((AUTO_REMOVE_LOCK *)&v73, (struct _LUID *)this + 10);
  if ( CheckFailed(Caps, 1045, (__int64)this + 92, 0x226u) )
  {
    AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
LABEL_2:
    AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
    v8 = v69 == 0;
    goto LABEL_61;
  }
  v77 = this;
  v89 = 0LL;
  v91 = -1;
  v81 = -1;
  v78 = 1;
  v90 = 0;
  v92 = 0LL;
  v93 = 0;
  v79 = 0LL;
  v80 = 0;
  v82 = 0LL;
  v83 = 0;
  DISPLAY_MUX_MGR::SetDisableProcessingDisplayBatchesStatus(qword_140169448, 1);
  v87[1] = this;
  v87[0] = &Caps;
  v88 = 1;
  v87[2] = &v104;
  v84[0] = 0;
  memset(&v102[1], 0, 0xD1uLL);
  v9 = v75;
  v10 = v75 + 81;
  KeWaitForSingleObject(&v75[81], Executive, 0, 0, 0LL);
  v8 = *(_WORD *)(&v9[85].ApcDisable + 1) == 3;
  v97 = *(_DWORD *)&v9[80].Abandoned;
  v11 = v102[1];
  if ( v8 )
    v11 = 1;
  LOBYTE(v102[1]) = v11;
  KeReleaseMutex(v10, 0);
  CInterfaceCallContext::CInterfaceCallContext(&v94, v73);
  if ( CheckFailed(v96, 1028, (__int64)this + 92, 0x266u) )
    goto LABEL_14;
  v12 = v95;
  if ( !*(_BYTE *)(v95 + 6441) )
  {
    memset(v103, 0, 0xD1uLL);
    if ( !DISPLAY_MUX_MGR::GetInternalPanelInfo(
            qword_140169448,
            (struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *)v103) )
    {
      CheckFailed(-1073741823, 1051, (__int64)this + 92, 0x27Du);
      goto LABEL_14;
    }
    Caps = DpiDxgkDdiDisplayMuxSetInternalPanelInfo(v12, *((unsigned int *)this + 22), v103);
    if ( CheckFailed(v96, 1049, (__int64)this + 92, 0x274u) )
    {
LABEL_14:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v77);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
      v8 = v69 == 0;
      goto LABEL_61;
    }
    *(_BYTE *)(v12 + 6441) = 1;
  }
  if ( CheckForMdmFaultOrDelayInjection(4, 1027, (__int64)this + 92) )
    goto LABEL_14;
  v13 = *((_DWORD *)this + 22);
  v14 = *(_QWORD *)(v12 + 4032);
  v86.m128i_i64[0] = *((_QWORD *)this + 10);
  v86.m128i_i32[2] = v13;
  TARGET_POWER_REFERENCE::TakePowerReference(&v79, v14, &v86);
  v15 = *((unsigned int *)this + 22);
  v16 = v97;
  *(_QWORD *)((char *)this + 20) = *((_QWORD *)this + 10);
  *((_DWORD *)this + 7) = v15;
  v17 = DpiDxgkDdiDisplayMuxPreSwitchTo(v12, v15, v16);
  if ( v17 >= 0 )
    *((_DWORD *)this + 1) = 2;
  Caps = v17;
  if ( CheckFailed(v17, 1027, (__int64)this + 92, 0x28Du) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
    goto LABEL_25;
  }
  v18 = *(_BYTE *)(v12 + 6440);
  v72 = v18;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
  if ( !v18 )
  {
    if ( LOBYTE(v102[1])
      && ((Caps = DpiBrightness3GetCaps(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_CAPS *)((char *)&v102[1] + 1)),
           CheckFailed(Caps, 1046, (__int64)this + 92, 0x2A0u))
       || (Caps = DpiBrightness3GetNitRanges(
                    v9->MutantListEntry.Flink,
                    *((_DWORD *)this + 19),
                    (struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)((char *)&v102[1] + 5)),
           CheckFailed(Caps, 1047, (__int64)this + 92, 0x2A6u)))
      || (Caps = DpiGetIntegratedEdidSizeForDisplayMuxTarget(
                   (__int64)v9->MutantListEntry.Flink,
                   *((_DWORD *)this + 19),
                   v84),
          CheckFailed(Caps, 1047, (__int64)this + 92, 0x2AEu)) )
    {
LABEL_25:
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
      if ( v83 )
      {
        v20 = v81;
        v21 = v82;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(v19, (__int64)&Dxgk_ReportPowerComponentState);
        v22 = *(_QWORD *)(v21 + 3272);
        if ( v22 )
          PoFxIdleComponent(v22, v20, 0LL);
      }
      goto LABEL_60;
    }
  }
  CInterfaceCallContext::CInterfaceCallContext(&v94, v9);
  if ( CheckFailed(v96, 1029, (__int64)this + 92, 0x2B8u) )
    goto LABEL_33;
  v26 = v95;
  v27 = *((_DWORD *)this + 19);
  v70[0] = 0;
  Caps = MonitorIsMonitorConnected(*(void **)(v95 + 4032), v27, 1u, v70);
  if ( CheckFailed(Caps, 1025, (__int64)this + 92, 0x2C0u) )
    goto LABEL_33;
  v28 = (char *)this + 92;
  if ( !v70[0] )
  {
    CheckFailed(-1073741275, 1026, (__int64)v28, 0x2C6u);
LABEL_33:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
    if ( !v83 )
    {
LABEL_60:
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v77);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
      v8 = v69 == 0;
LABEL_61:
      if ( !v8 )
        ReleaseMiniportListMutex();
      return;
    }
    v24 = v82;
    v25 = v81;
LABEL_55:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v23, (__int64)&Dxgk_ReportPowerComponentState);
    v36 = *(_QWORD *)(v24 + 3272);
    if ( v36 )
      PoFxIdleComponent(v36, v25, 0LL);
    goto LABEL_60;
  }
  if ( CheckForMdmFaultOrDelayInjection(5, 1030, (__int64)v28) )
    goto LABEL_33;
  v29 = *((_DWORD *)this + 19);
  v30 = *(_QWORD *)(v26 + 4032);
  v86.m128i_i64[0] = *(_QWORD *)((char *)this + 68);
  v86.m128i_i32[2] = v29;
  TARGET_POWER_REFERENCE::TakePowerReference(&v89, v30, &v86);
  Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_140169448, *v6, 1);
  if ( CheckFailed(Caps, 1030, (__int64)this + 92, 0x2D7u) )
  {
LABEL_47:
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
    if ( v83 )
    {
      v34 = v82;
      v35 = v81;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v23, (__int64)&Dxgk_ReportPowerComponentState);
      v23 = *(_QWORD *)(v34 + 3272);
      if ( v23 )
        PoFxIdleComponent(v23, v35, 0LL);
    }
    if ( !v93 )
      goto LABEL_60;
    v24 = v92;
    v25 = v91;
    goto LABEL_55;
  }
  v86.m128i_i64[0] = (__int64)this;
  v86.m128i_i8[8] = 1;
  if ( CheckForMdmFaultOrDelayInjection(6, 1031, (__int64)this + 92) )
    goto LABEL_46;
  v31 = *((unsigned int *)this + 19);
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)this + 68);
  *((_DWORD *)this + 4) = v31;
  v32 = DpiDxgkDdiDisplayMuxPreSwitchAway(v26, v31, &v85);
  if ( v32 >= 0 )
    *(_DWORD *)this = 2;
  Caps = v32;
  if ( CheckFailed(v32, 1031, (__int64)this + 92, 0x2E8u) )
  {
LABEL_46:
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v86);
    goto LABEL_47;
  }
  DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
    qword_140169448,
    (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 68));
  v33 = (char *)this + 92;
  if ( v85 > 0x100000 )
  {
    CheckFailed(-1073741306, 1032, (__int64)v33, 0x2F3u);
    goto LABEL_46;
  }
  if ( CheckForMdmFaultOrDelayInjection(7, 1034, (__int64)v33) )
    goto LABEL_46;
  if ( v85 )
  {
    v100 = (void *)operator new[](v85, 0x4B677844u, 256LL);
    v4 = v100;
    v98 = v100;
    if ( !v100 )
    {
      CheckFailed(-1073741801, 1033, (__int64)this + 92, 0x304u);
LABEL_67:
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v86);
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
      DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
      if ( v83 )
      {
        v38 = v82;
        v39 = v81;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(v37, (__int64)&Dxgk_ReportPowerComponentState);
        v37 = *(_QWORD *)(v38 + 3272);
        if ( v37 )
          PoFxIdleComponent(v37, v39, 0LL);
      }
      if ( v93 )
      {
        v40 = v92;
        v41 = v91;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          McTemplateK0pqq_EtwWriteTransfer(v37, (__int64)&Dxgk_ReportPowerComponentState);
        v42 = *(_QWORD *)(v40 + 3272);
        if ( v42 )
          PoFxIdleComponent(v42, v41, 0LL);
      }
      DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v77);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
      AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
      if ( v69 )
        ReleaseMiniportListMutex();
      if ( v4 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      return;
    }
    Caps = DpiDxgkDdiDisplayMuxPreSwitchAwayGetPrivateData(
             v26,
             *((_DWORD *)this + 19),
             v85,
             (_DWORD)v100,
             (__int64)v102);
    if ( CheckFailed(Caps, 1034, (__int64)this + 92, 0x30Eu) )
      goto LABEL_67;
    v99 = (union _LARGE_INTEGER *)v102;
  }
  if ( CheckForMdmFaultOrDelayInjection(8, 1035, (__int64)this + 92) )
    goto LABEL_67;
  Caps = DISPLAY_MUX_MGR::SwitchMux(qword_140169448, *(struct _LUID *)((char *)this + 80), *((_DWORD *)this + 22));
  if ( CheckFailed(Caps, 1035, (__int64)this + 92, 0x31Eu) )
  {
    DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v86);
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
    if ( v83 )
    {
      v44 = v82;
      v45 = v81;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v43, (__int64)&Dxgk_ReportPowerComponentState);
      v43 = *(_QWORD *)(v44 + 3272);
      if ( v43 )
        PoFxIdleComponent(v43, v45, 0LL);
    }
    if ( v93 )
    {
      v46 = v92;
      v47 = v91;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(v43, (__int64)&Dxgk_ReportPowerComponentState);
      v48 = *(_QWORD *)(v46 + 3272);
      if ( v48 )
        PoFxIdleComponent(v48, v47, 0LL);
    }
  }
  else
  {
    v8 = *(_BYTE *)(v26 + 2716) == 0;
    v50 = v73;
    if ( v8 )
      qword_140169128 = v73[3];
    if ( CheckForMdmFaultOrDelayInjection(9, 1037, (__int64)this + 92)
      || (Caps = DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(qword_140169448, *v6, 0),
          CheckFailed(Caps, 1037, (__int64)this + 92, 0x331u)) )
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v86);
    }
    else
    {
      DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(&v86);
      if ( !CheckForMdmFaultOrDelayInjection(10, 1038, (__int64)this + 92) )
      {
        Caps = QueryConnectionChanges(
                 v94,
                 *(struct _LUID *)((char *)this + 68),
                 (struct _GUID *)((char *)this + 92),
                 (struct _GUID *)((char *)this + 108));
        DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140169448, 0LL);
        if ( !CheckFailed(Caps, 1038, (__int64)this + 92, 0x340u) )
        {
          v52 = *((unsigned int *)qword_140169448 + 33);
          v53 = *(_QWORD *)((char *)qword_140169448 + 124);
          v86 = *(__m128i *)((char *)qword_140169448 + 116);
          v54 = _mm_cvtsi128_si32(_mm_srli_si128(v86, 12));
          if ( HIDWORD(v53) )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 855;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 2LL, v54, 0LL);
              WdLogGlobalForLineNumber = 851;
            }
          }
          if ( (_DWORD)v52 != 1 )
          {
            v5 |= (unsigned __int8)((__int64 (*)(void))DpiAcpiIsLidOpen)() == 0;
            if ( v5 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 886;
            }
            else if ( (_DWORD)v52 )
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, v52, 0LL);
              WdLogGlobalForLineNumber = 881;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 3LL, 0LL, 0LL);
              WdLogGlobalForLineNumber = 874;
            }
          }
          if ( *((_DWORD *)this + 17) != v86.m128i_i32[0]
            || *((_QWORD *)this + 9) != *(__int64 *)((char *)v86.m128i_i64 + 4) )
          {
            v5 |= (unsigned __int8)DpiAcpiIsLidOpen(v51, v86.m128i_u32[2]) == 0;
            if ( v5 )
            {
              WdLogSingleEntry2(2LL, v56, v55);
              WdLogGlobalForLineNumber = 910;
            }
            else
            {
              WdLogSingleEntry5(0LL, 484LL, 52LL, 4LL, v56, v55);
              WdLogGlobalForLineNumber = 904;
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
          CInterfaceCallContext::CInterfaceCallContext(&v94, v50);
          if ( !CheckFailed(v96, 1039, (__int64)this + 92, 0x397u)
            && !CheckForMdmFaultOrDelayInjection(11, 1040, (__int64)this + 92) )
          {
            v57 = v94;
            if ( v72
              || (Caps = DpiSetIntegratedEdidSizeForDisplayMuxTarget((__int64)v94, *((_DWORD *)this + 22), v84[0]),
                  !CheckFailed(v96, 1050, (__int64)this + 92, 0x3A6u)) )
            {
              if ( !CheckForMdmFaultOrDelayInjection(12, 1041, (__int64)this + 92) )
              {
                v58 = *((_DWORD *)this + 22);
                v59 = (int)v100;
                v60 = v85;
                v61 = v95;
                Timeout = v99;
                *((_BYTE *)this + 32) = 1;
                Caps = DpiDxgkDdiDisplayMuxPostSwitchToPhase1(v61, v58, v60, v59, (__int64)Timeout);
                if ( !CheckFailed(Caps, 1041, (__int64)this + 92, 0x3B8u) )
                {
                  Caps = DpiQueryIntegratedDescriptorWrapper((__int64)v57);
                  if ( !CheckFailed(Caps, 1040, (__int64)this + 92, 0x3C0u) )
                  {
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(
                      qword_140169448,
                      (DISPLAY_MUX_SWITCH_OPERATION *)((char *)this + 80));
                    Caps = QueryConnectionChanges(
                             v57,
                             *(struct _LUID *)((char *)this + 80),
                             (struct _GUID *)((char *)this + 92),
                             (struct _GUID *)((char *)this + 108));
                    DISPLAY_MUX_MGR::SetAdapterAllowedToReportDisplayMuxHpd(qword_140169448, 0LL);
                    if ( !CheckFailed(Caps, 1042, (__int64)this + 92, 0x3CAu)
                      && !CheckForMdmFaultOrDelayInjection(13, 1042, (__int64)this + 92) )
                    {
                      v64 = *((unsigned int *)qword_140169448 + 33);
                      v86 = *(__m128i *)((char *)qword_140169448 + 116);
                      if ( *((_DWORD *)this + 20) != _mm_cvtsi128_si32(v86)
                        || *(_QWORD *)((char *)this + 84) != *(__int64 *)((char *)v86.m128i_i64 + 4) )
                      {
                        IsLidOpen = DpiAcpiIsLidOpen(v63, v62);
                        v66 = *((unsigned int *)this + 20);
                        v5 |= IsLidOpen == 0;
                        if ( v5 )
                        {
                          WdLogSingleEntry2(2LL, v66, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 1004;
                        }
                        else
                        {
                          WdLogSingleEntry5(0LL, 484LL, 52LL, 1LL, v66, *((unsigned int *)this + 22));
                          WdLogGlobalForLineNumber = 998;
                        }
                      }
                      if ( (_DWORD)v64 == (_DWORD)v52 )
                      {
                        if ( v86.m128i_i32[3] != v54 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v63, v62) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v67, v54);
                            WdLogGlobalForLineNumber = 1029;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 5LL, v54, v67);
                            WdLogGlobalForLineNumber = 1023;
                          }
                        }
                        *v101 = 1;
                      }
                      else if ( v86.m128i_i32[3] == v54 )
                      {
                        if ( (_DWORD)v64 != (_DWORD)v52 + 1 )
                        {
                          if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v63, v62) == 0) )
                          {
                            WdLogSingleEntry2(2LL, v64, v52);
                            WdLogGlobalForLineNumber = 1056;
                          }
                          else
                          {
                            WdLogSingleEntry5(0LL, 484LL, 52LL, 6LL, v52, v64);
                            WdLogGlobalForLineNumber = 1050;
                          }
                        }
                        *v101 = 0;
                      }
                      else if ( (unsigned __int8)v5 | ((unsigned __int8)DpiAcpiIsLidOpen(v63, v62) == 0) )
                      {
                        WdLogSingleEntry0(2LL);
                        WdLogGlobalForLineNumber = 1077;
                      }
                      else
                      {
                        WdLogSingleEntry5(0LL, 484LL, 52LL, 7LL, 0LL, 0LL);
                        WdLogGlobalForLineNumber = 1073;
                      }
                    }
                  }
                }
              }
            }
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
          DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v79);
          TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v89);
          DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v77);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
          AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
          v49 = v69 == 0;
          goto LABEL_154;
        }
      }
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v94);
    DXGKCALLONEXIT__lambda_5bf16074e78eca97c9745c10e52e39f7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v87);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v79);
    TARGET_POWER_REFERENCE::ReleaseReference((TARGET_POWER_REFERENCE *)&v89);
  }
  DXGKCALLONEXIT__lambda_8e64b2d4059ca463867f9c5833a46b2d____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)&v77);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v73);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v75);
  v49 = v69 == 0;
LABEL_154:
  if ( !v49 )
    ReleaseMiniportListMutex();
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    &v98,
    0LL);
}
