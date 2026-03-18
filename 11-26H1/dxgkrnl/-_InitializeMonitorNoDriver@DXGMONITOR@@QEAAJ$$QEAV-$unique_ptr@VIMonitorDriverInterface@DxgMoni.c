/*
 * XREFs of ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x140063FB0 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ?reset@?$unique_ptr@VMonitorUsb4State@DxgMonitor@@U?$default_delete@VMonitorUsb4State@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorUsb4State@DxgMonitor@@@Z @ 0x14006CA84 (-reset@-$unique_ptr@VMonitorUsb4State@DxgMonitor@@U-$default_delete@VMonitorUsb4State@DxgMonitor.c)
 *     ?reset@?$unique_ptr@VMonitorPnpState@DxgMonitor@@U?$default_delete@VMonitorPnpState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorPnpState@DxgMonitor@@@Z @ 0x14006CAB4 (-reset@-$unique_ptr@VMonitorPnpState@DxgMonitor@@U-$default_delete@VMonitorPnpState@DxgMonitor@@.c)
 *     ?reset@?$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U?$default_delete@VMonitorMipiDsiState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorMipiDsiState@DxgMonitor@@@Z @ 0x14006CAE4 (-reset@-$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U-$default_delete@VMonitorMipiDsiState@DxgM.c)
 *     ?reset@?$unique_ptr@VMonitorGammaState@DxgMonitor@@U?$default_delete@VMonitorGammaState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorGammaState@DxgMonitor@@@Z @ 0x14006CB14 (-reset@-$unique_ptr@VMonitorGammaState@DxgMonitor@@U-$default_delete@VMonitorGammaState@DxgMonit.c)
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x14006CB44 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x140098970 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z @ 0x140098EE8 (--0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x14018E278 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x140190738 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x1401914E8 (-DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z.c)
 *     ??0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@PEAUPOHANDLE__@@I@Z @ 0x140277448 (--0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_I.c)
 *     ??0MonitorGammaState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorDxgiGammaSource@1@@Z @ 0x14027A980 (--0MonitorGammaState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorDxgiGammaSource@.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ??0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z @ 0x1403E0B74 (--0MonitorColorState@DxgMonitor@@QEAA@AEAVIMonitorComponentParent@1@AEAVIMonitorRegistry@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorNoDriver(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6,
        int a7,
        struct DXGKMON_USB4_HOSTROUTER_INFO *a8)
{
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  char v16; // r15
  __int64 v17; // rbp
  char v18; // al
  unsigned int v19; // edx
  char v20; // cl
  __int64 v21; // rax
  struct POHANDLE__ *v22; // r13
  __int64 v23; // rax
  _QWORD *v25; // rax
  DxgMonitor::MonitorDataStore *v26; // rcx
  DxgMonitor::MonitorDescriptorState *v27; // rax
  struct _ERESOURCE *v28; // rax
  DxgMonitor::MonitorColorState *v29; // rax
  __int64 v30; // rax
  void *v31; // rcx
  __int64 v32; // rax
  void *v33; // rcx
  DxgMonitor::MonitorModes *v34; // rax
  DxgMonitor::MonitorModes *v35; // rax
  bool v36; // cf
  DxgMonitor::MonitorGammaState *v37; // rax
  DxgMonitor::MonitorGammaState *v38; // rax
  DxgMonitor::MonitorUsb4State *v39; // rax
  DxgMonitor::MonitorUsb4State *v40; // rax
  DxgMonitor::MonitorDisplayPortState *v41; // rax
  DxgMonitor::MonitorDisplayPortState *v42; // rax
  void *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v46; // ebx

  v12 = WdLogNewEntry5_WdTrace(a1, a2);
  v13 = a7;
  *(_QWORD *)(v12 + 24) = a1;
  WdLogGlobalForLineNumber = 736;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 745;
LABEL_45:
    if ( !a4 )
      goto LABEL_4;
    goto LABEL_46;
  }
  if ( v13 != 1 )
    goto LABEL_45;
  if ( a4 )
    goto LABEL_4;
LABEL_46:
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 746;
LABEL_4:
  *(_DWORD *)(a1 + 280) = v13;
  *(_DWORD *)(a1 + 284) = v13;
  *(_DWORD *)(a1 + 180) = a3;
  v14 = *a2;
  *a2 = 0LL;
  v15 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 192);
  *(_QWORD *)(a1 + 192) = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  v16 = a5;
  if ( (_BYTE)a5 )
  {
    v36 = a6 != 0;
    a6 = -a6;
    *(_BYTE *)(a1 + 176) = *(_BYTE *)(a1 + 176) & 0xFB | (v36 ? 0 : 4) | 2;
  }
  v17 = a1 + 16;
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 88LL))(*(_QWORD *)(a1 + 168));
  v19 = *(_DWORD *)(a1 + 180);
  a5 = D3DKMDT_VOT_OTHER;
  v20 = *(_BYTE *)(a1 + 177) & 0xDF | (v18 != 0 ? 0x20 : 0);
  v21 = *(_QWORD *)(a1 + 168);
  *(_BYTE *)(a1 + 177) = v20;
  DmmGetVidPnTargetPowerComponentIndex(*(_QWORD **)(*(_QWORD *)(v21 + 24) + 16LL), v19, (unsigned int *)&a5);
  v22 = *(struct POHANDLE__ **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 3272LL);
  v23 = operator new(0x50uLL, 0x4D677844u, 64LL);
  if ( v23 )
  {
    *(_QWORD *)v23 = v17;
    *(_BYTE *)(v23 + 16) = 0;
    *(_QWORD *)(v23 + 24) = 0LL;
    *(_QWORD *)(v23 + 32) = 0LL;
    *(_QWORD *)(v23 + 40) = 0LL;
    *(_OWORD *)(v23 + 48) = 0LL;
    *(_OWORD *)(v23 + 64) = 0LL;
    *(_QWORD *)(v23 + 8) = a4;
  }
  else
  {
    v23 = 0LL;
  }
  wistd::unique_ptr<DxgMonitor::MonitorPnpState,wistd::default_delete<DxgMonitor::MonitorPnpState>>::reset(
    (DxgMonitor::MonitorPnpState **)(a1 + 200),
    (DxgMonitor::MonitorPnpState *)v23);
  if ( !*(_QWORD *)(a1 + 200) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 773;
    return 3221225495LL;
  }
  v25 = (_QWORD *)operator new(0x18uLL, 0x4D677844u, 256LL);
  if ( v25 )
  {
    v25[1] = v17;
    *v25 = &DxgMonitor::MonitorDataStore::`vftable';
    v25[2] = a1 + 24;
  }
  else
  {
    v25 = 0LL;
  }
  v26 = *(DxgMonitor::MonitorDataStore **)(a1 + 208);
  *(_QWORD *)(a1 + 208) = v25;
  if ( v26 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v26, 1);
  if ( !*(_QWORD *)(a1 + 208) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 776;
    return 3221225495LL;
  }
  v27 = (DxgMonitor::MonitorDescriptorState *)operator new(0xB8uLL, 0x4D677844u, 64LL);
  if ( v27 )
    v28 = (struct _ERESOURCE *)DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
                                 v27,
                                 (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
                                 *(const struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v28 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    (struct _ERESOURCE **)(a1 + 216),
    v28);
  if ( !*(_QWORD *)(a1 + 216) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 779;
    return 3221225495LL;
  }
  v29 = (DxgMonitor::MonitorColorState *)operator new(0x220uLL, 0x4D677844u, 256LL);
  if ( v29 )
    v30 = DxgMonitor::MonitorColorState::MonitorColorState(
            v29,
            (struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            *(struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v30 = 0LL;
  v31 = *(void **)(a1 + 224);
  *(_QWORD *)(a1 + 224) = v30;
  if ( v31 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
  if ( !*(_QWORD *)(a1 + 224) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 782;
    return 3221225495LL;
  }
  v32 = operator new(0x18uLL, 0x4D677844u, 256LL);
  if ( v32 )
  {
    *(_QWORD *)(v32 + 8) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)v32 = v17;
    *(_DWORD *)(v32 + 16) = 0;
    *(_WORD *)(v32 + 20) = 0;
    *(_BYTE *)(v32 + 22) = 0;
  }
  else
  {
    v32 = 0LL;
  }
  v33 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 240) = v32;
  if ( v33 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
  if ( !*(_QWORD *)(a1 + 240) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 785;
    return 3221225495LL;
  }
  v34 = (DxgMonitor::MonitorModes *)operator new(0xF8uLL, 0x4D677844u, 64LL);
  if ( v34 )
    v35 = DxgMonitor::MonitorModes::MonitorModes(
            v34,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            *(const struct DxgMonitor::IMonitorRegistry **)(a1 + 208));
  else
    v35 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorModes,wistd::default_delete<DxgMonitor::MonitorModes>>::reset(
    (DxgMonitor::MonitorModes **)(a1 + 232),
    v35);
  if ( !*(_QWORD *)(a1 + 232) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 788;
    return 3221225495LL;
  }
  v37 = (DxgMonitor::MonitorGammaState *)operator new(0xD0uLL, 0x4D677844u, 64LL);
  if ( v37 )
    v38 = DxgMonitor::MonitorGammaState::MonitorGammaState(
            v37,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            (const struct DxgMonitor::IMonitorDxgiGammaSource *)(a1 + 32));
  else
    v38 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorGammaState,wistd::default_delete<DxgMonitor::MonitorGammaState>>::reset(
    (DxgMonitor::MonitorGammaState **)(a1 + 248),
    v38);
  if ( !*(_QWORD *)(a1 + 248) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 791;
    return 3221225495LL;
  }
  v39 = (DxgMonitor::MonitorUsb4State *)operator new(0x60uLL, 0x4D677844u, 64LL);
  if ( v39 )
    v40 = DxgMonitor::MonitorUsb4State::MonitorUsb4State(
            v39,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16),
            a8,
            v22,
            a5);
  else
    v40 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorUsb4State,wistd::default_delete<DxgMonitor::MonitorUsb4State>>::reset(
    (DxgMonitor::MonitorUsb4State **)(a1 + 264),
    v40);
  if ( !*(_QWORD *)(a1 + 264) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 794;
    return 3221225495LL;
  }
  v41 = (DxgMonitor::MonitorDisplayPortState *)operator new(0x28uLL, 0x4D677844u, 256LL);
  if ( v41 )
    v42 = DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(
            v41,
            (const struct DxgMonitor::IMonitorComponentParent *)(a1 + 16));
  else
    v42 = 0LL;
  v43 = *(void **)(a1 + 272);
  *(_QWORD *)(a1 + 272) = v42;
  if ( v43 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v43);
  if ( !*(_QWORD *)(a1 + 272) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 797;
    return 3221225495LL;
  }
  if ( v16 )
  {
    v44 = operator new(0x50uLL, 0x4D677844u, 64LL);
    if ( v44 )
    {
      *(_QWORD *)v44 = v17;
      *(_OWORD *)(v44 + 8) = 0LL;
      *(_DWORD *)(v44 + 24) = 0;
      *(_QWORD *)(v44 + 40) = 0LL;
      *(_QWORD *)(v44 + 48) = 0LL;
      *(_QWORD *)(v44 + 56) = 0LL;
      *(_DWORD *)(v44 + 64) = 0;
      *(_DWORD *)(v44 + 68) = -1;
      *(_DWORD *)(v44 + 72) = 18;
    }
    else
    {
      v44 = 0LL;
    }
    wistd::unique_ptr<DxgMonitor::MonitorMipiDsiState,wistd::default_delete<DxgMonitor::MonitorMipiDsiState>>::reset(
      (__int64 *)(a1 + 256),
      v44);
    if ( !*(_QWORD *)(a1 + 256) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 802;
      return 3221225495LL;
    }
  }
  v45 = *(_QWORD *)(a1 + 168);
  a5 = D3DKMDT_VOT_UNINITIALIZED;
  if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(*(_QWORD *)(v45 + 24) + 16LL), a3, &a5, 0LL) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 814;
  }
  v46 = a5;
  if ( a5 == D3DKMDT_VOT_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 815;
  }
  *(_DWORD *)(a1 + 184) = v46;
  return 0LL;
}
