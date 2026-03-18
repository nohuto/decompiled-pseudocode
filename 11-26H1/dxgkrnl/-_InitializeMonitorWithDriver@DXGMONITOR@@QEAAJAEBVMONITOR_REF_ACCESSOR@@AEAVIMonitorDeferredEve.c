/*
 * XREFs of ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ @ 0x1400600AC (-OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140191220 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x140276288 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14027707C (-_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402782E8 (-OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x14027AD68 (-OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14027B610 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1403BF330 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403BF364 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403C3988 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1403E287C (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14040B864 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x140412E24 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14041476C (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x140425668 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x14043054C (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorWithDriver(
        DXGMONITOR *this,
        const struct MONITOR_REF_ACCESSOR *a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  int DefaultMonitorProfile; // esi
  bool v10; // r8
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  char v17; // cl
  DXGADAPTER *v18; // rcx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rdx
  DxgMonitor::MonitorMipiDsiState *v22; // rcx
  int v24; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 70) == 1 && *((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 830;
  }
  v8 = *((_DWORD *)this + 70);
  if ( v8 == 1 )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(*((DxgMonitor::MonitorDescriptorState **)this
                                                                                            + 27));
    if ( DefaultMonitorProfile >= 0 )
      DefaultMonitorProfile = DXGMONITOR::OnDescriptorUpdated(this, a3, v10);
    v11 = (char *)this + 168;
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL);
    if ( (*(_DWORD *)(v12 + 444) & 0x100) != 0 )
    {
      v13 = *(_QWORD *)(v12 + 3160);
      v14 = *((unsigned int *)this + 45);
      v27 = 0;
      v24 = 0;
      if ( (*(int (__fastcall **)(_QWORD, __int64, int *, int *))(*(_QWORD *)(v13 + 16) + 2432LL))(
             *(_QWORD *)(*(_QWORD *)(v13 + 16) + 2336LL),
             v14,
             &v27,
             &v24) >= 0 )
      {
        *((_DWORD *)this + 118) = v27;
        *((_DWORD *)this + 119) = v24;
      }
    }
LABEL_18:
    if ( DefaultMonitorProfile < 0 )
      return (unsigned int)DefaultMonitorProfile;
    goto LABEL_19;
  }
  v15 = *((_QWORD *)a2 + 1);
  if ( v15 )
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)(v15 + 40));
    DefaultMonitorProfile = DXGMONITOR::_CopyMonitorInformation(this, a2);
    ExReleaseResourceLite((PERESOURCE)(v15 + 40));
    KeLeaveCriticalRegion();
    v11 = (char *)this + 168;
    goto LABEL_18;
  }
  if ( v8 == 5 )
  {
    DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(*((DxgMonitor::MonitorDescriptorState **)this + 27));
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(this);
  }
  v11 = (char *)this + 168;
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 3044LL) >= 1105 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
  v16 = *((_QWORD *)this + 29);
  if ( !*(_DWORD *)(v16 + 120) )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorModes::CreateDefaultMonitorProfile((struct _ERESOURCE *)v16);
    goto LABEL_18;
  }
LABEL_19:
  DefaultMonitorProfile = DXGMONITOR::_PrepareMonitorCCDName(this);
  if ( DefaultMonitorProfile >= 0 )
  {
    DXGMONITOR::_PrepareDefaultMonitorConfiguration(this);
    if ( *((_DWORD *)this + 70) != 1 )
      goto LABEL_29;
    v17 = (DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
             *((_QWORD *)this + 26),
             2LL,
             (__int64)L"VMSDisabled",
             (*((_BYTE *)this + 176) & 0x40) != 0) << 6) | *((_BYTE *)this + 176) & 0xBF;
    *((_BYTE *)this + 176) = v17;
    if ( (v17 & 2) != 0 )
      *((_DWORD *)this + 82) = DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
                                 *((_QWORD *)this + 26),
                                 8LL,
                                 (__int64)L"EnableIntegratedPanelBoostRefreshRateByDefault",
                                 0);
    DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(this);
    v18 = *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v11 + 24LL) + 16LL);
    if ( (*((_DWORD *)v18 + 111) & 0x40000) != 0 )
    {
      v21 = *((unsigned int *)this + 45);
      v25 = 0LL;
      v26 = 0LL;
      DXGADAPTER::GetVirtualMonitorInfo(v18, v21, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v25);
      *((_DWORD *)this + 116) = v25;
    }
    else
    {
      v19 = *((_QWORD *)this + 26);
      v27 = 0;
      v20 = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v19, 2LL, (__int64)L"PreferredScaleFactor", &v27);
      *((_DWORD *)this + 116) = v20 != 0 ? v27 : 0;
    }
    DxgMonitor::MonitorUsageState::_EvaluateUsageState(*((DxgMonitor::MonitorUsageState **)this + 30), 0LL);
    DxgMonitor::MonitorColorState::OnInitialized(*((DxgMonitor::MonitorColorState **)this + 28));
    DxgMonitor::MonitorUsb4State::OnInitialized(*((DxgMonitor::MonitorUsb4State **)this + 33), a4);
    DxgMonitor::MonitorDisplayPortState::OnInitialized(*((DxgMonitor::MonitorDisplayPortState **)this + 34));
    DefaultMonitorProfile = DXGMONITOR::_UpdateLinkInfo((__int64)this, *(_DWORD *)(*((_QWORD *)this + 30) + 16LL));
    DxgMonitor::MonitorGammaState::OnInitialized(*((DxgMonitor::MonitorGammaState **)this + 31));
    v22 = (DxgMonitor::MonitorMipiDsiState *)*((_QWORD *)this + 32);
    if ( v22 )
      DxgMonitor::MonitorMipiDsiState::OnInitialized(v22);
    if ( DefaultMonitorProfile >= 0 )
LABEL_29:
      *((_BYTE *)this + 176) |= 1u;
  }
  return (unsigned int)DefaultMonitorProfile;
}
