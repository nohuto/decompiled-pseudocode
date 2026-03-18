/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x14005B090 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1400987F8 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x14018F3E0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140277020 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x140277E80 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x14031D62C (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E1FC (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E2D0 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403E0320 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        GUID *a7)
{
  __int64 v7; // r15
  __int64 v10; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r12
  int EmergencySimulatedMonitor; // eax
  int MonitorInstance; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGMONITOR *v16; // rsi
  int v17; // ebx
  struct _DEVICE_OBJECT *v18; // rbx
  __int64 v19; // rax
  void **v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // r9
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int PhysicalMonitor; // ebx
  __int64 v28; // rdx
  DxgMonitor::MonitorUsb4State *v29; // rcx
  char v30; // cl
  char v31; // r8
  __int64 v32; // rax
  void **v33; // rdx
  void *v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h]
  void *v36; // [rsp+50h] [rbp-30h] BYREF
  DXGMONITOR *v37; // [rsp+58h] [rbp-28h]
  void *v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 v39; // [rsp+68h] [rbp-18h]
  void *v40; // [rsp+70h] [rbp-10h] BYREF
  DXGMONITOR *v41; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v43; // [rsp+C8h] [rbp+48h] BYREF
  struct _DEVICE_OBJECT *v44; // [rsp+D0h] [rbp+50h]

  v44 = a3;
  v7 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 507;
  }
  v10 = 0LL;
  if ( *((_BYTE *)this + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start);
  v11 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a7;
  MONITOR_MGR::_IssueMonitorEvent((__int64)this + 8, v7, 0, 0LL, 1, a7);
  v38 = retaddr;
  v39 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v38);
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(this, (struct MONITOR_REF_ACCESSOR *)&v38);
  if ( EmergencySimulatedMonitor < 0 )
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
    }
    if ( v39 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
    }
  }
  else
  {
    if ( !v39 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 541;
    }
    MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v38);
  }
  v36 = retaddr;
  v37 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
  v40 = retaddr;
  v41 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v40);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v7, 0, (struct MONITOR_REF_ACCESSOR *)&v40);
  v16 = v41;
  v17 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v41 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 641;
    }
    if ( v17 != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 642;
    }
    goto LABEL_37;
  }
  if ( !v41 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 561;
  }
  if ( v39 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 562;
  }
  if ( *((_DWORD *)v16 + 70) != 1 )
  {
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v36, (__int64)v16 + 288);
    MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v16 + 288));
LABEL_37:
    v18 = v44;
LABEL_38:
    v25 = (__int64)v37;
    if ( v37 )
    {
      if ( ((*((unsigned __int8 *)v37 + 176) >> 1) & 1) != (a4 != 0) )
      {
        WdLogSingleEntry0(1LL);
        v25 = (__int64)v37;
        WdLogGlobalForLineNumber = 652;
      }
      DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(
        *(DxgMonitor::MonitorPnpState **)(v25 + 200),
        v25);
      v29 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v37 + 33);
      if ( *((_BYTE *)v29 + 8) )
        DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v29, 0);
    }
    v34 = retaddr;
    v35 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v34);
    PhysicalMonitor = MONITOR_MGR::_CreatePhysicalMonitor(
                        this,
                        v7,
                        v18,
                        a4,
                        a5,
                        (struct MONITOR_REF_ACCESSOR *)&v34,
                        a6,
                        v11);
    if ( PhysicalMonitor < 0 )
    {
      if ( v35 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 748;
      }
      if ( v37 )
        MONITOR_MGR::_HandleCreateMonitorStep2(
          this,
          v7,
          (const struct MONITOR_REF_ACCESSOR *)&v36,
          (const struct MONITOR_REF_ACCESSOR *)&v34,
          v11);
      if ( v39 )
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v38);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
      LODWORD(v10) = PhysicalMonitor;
    }
    else
    {
      v28 = v35;
      if ( !v35 )
      {
        WdLogSingleEntry0(1LL);
        v28 = v35;
        WdLogGlobalForLineNumber = 682;
      }
      if ( v16 )
      {
        v30 = *((_BYTE *)v16 + 176) ^ (*(_BYTE *)(v28 + 176) ^ *((_BYTE *)v16 + 176)) & 2;
        *((_BYTE *)v16 + 176) = v30;
        v31 = v30 ^ (*(_BYTE *)(v35 + 176) ^ v30) & 4;
        *((_BYTE *)v16 + 176) = v31;
        *(_BYTE *)(v35 + 176) ^= (v31 ^ *(_BYTE *)(v35 + 176)) & 0x20;
        DXGMONITOR::_SetAttachedPhysicalMonitor(v16, (const struct MONITOR_REF_ACCESSOR *)&v34);
      }
      else
      {
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v34);
      }
      if ( MONITOR_MGR::_DelayNotifyClient )
      {
        v32 = v35;
        if ( *(_QWORD *)(v35 + 376) )
        {
          WdLogSingleEntry0(1LL);
          v32 = v35;
          WdLogGlobalForLineNumber = 731;
        }
        *(_BYTE *)(v32 + 360) = 1;
        v33 = &v38;
        if ( v37 )
          v33 = &v36;
        MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)(v35 + 368), (__int64)v33);
        MONITOR_MGR::_EnterMonitorPendingState(this);
      }
      else
      {
        v21 = &v38;
        if ( v37 )
          v21 = &v36;
        LODWORD(v10) = MONITOR_MGR::_HandleCreateMonitorStep2(
                         this,
                         v7,
                         (const struct MONITOR_REF_ACCESSOR *)v21,
                         (const struct MONITOR_REF_ACCESSOR *)&v34,
                         v11);
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v34);
    }
    goto LABEL_24;
  }
  v18 = v44;
  if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v16 + 25) + 8LL) != v44 )
    goto LABEL_47;
  if ( *(_BYTE *)(*((_QWORD *)v16 + 33) + 8LL) )
  {
    v19 = WdLogNewEntry5_WdTrace(v15, v14);
    LOBYTE(v10) = v16 != 0LL;
    *(_QWORD *)(v19 + 24) = v10;
    *(_QWORD *)(v19 + 32) = v7;
    WdLogGlobalForLineNumber = 584;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v40);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v38);
    return 0LL;
  }
  if ( !a4 )
  {
LABEL_47:
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    v37 = v16;
    v36 = v40;
    v16 = 0LL;
    v41 = 0LL;
    MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v36);
    goto LABEL_38;
  }
  DXGMONITOR::_ChangeLIDStatus(v16, 1);
  v22 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 420LL) == 32902 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v22 + 16)) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v23, v7, &v43);
      if ( SourceConnectedToTargetInClientVidPn == -1071774884 || SourceConnectedToTargetInClientVidPn == -1071774912 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)this + 3), 0LL, v11);
    }
  }
LABEL_24:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v40);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v38);
  return (unsigned int)v10;
}
