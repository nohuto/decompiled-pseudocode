/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508
 * Callers:
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640 (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140005908 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x14005B090 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x140278940 (-ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x14031D62C (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E1FC (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(MONITOR_MGR *this, unsigned int a2, char a3, GUID *a4)
{
  __int64 v4; // rsi
  int MonitorInstance; // ebx
  DXGMONITOR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  DxgMonitor::MonitorUsb4State *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // r14d
  DXGMONITOR *v20; // rdx
  __int64 v21; // r9
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  DXGMONITOR *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  DXGMONITOR *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v26; // [rsp+78h] [rbp+28h] BYREF

  v4 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1099;
  }
  v24[0] = retaddr;
  v24[1] = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v24);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v4, 0, (struct MONITOR_REF_ACCESSOR *)v24);
  if ( MonitorInstance >= 0 )
  {
    v9 = v24[1];
    if ( !v24[1] )
    {
      WdLogSingleEntry0(1LL);
      v9 = v24[1];
      WdLogGlobalForLineNumber = 1124;
    }
    if ( (*((_BYTE *)v9 + 176) & 2) != 0 )
    {
      DXGMONITOR::_ChangeLIDStatus(v9, 0);
      if ( a3 )
      {
        v12 = WdLogNewEntry5_WdTrace(v11, v10);
        MonitorInstance = 0;
        *(_QWORD *)(v12 + 24) = v4;
        *(_QWORD *)(v12 + 32) = this;
        WdLogGlobalForLineNumber = 1136;
        goto LABEL_25;
      }
      v9 = v24[1];
    }
    v13 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v9 + 33);
    if ( !*((_BYTE *)v13 + 8) || !*((_BYTE *)v13 + 56) )
    {
      v19 = *((_DWORD *)v9 + 70);
      if ( v19 == 1 )
      {
        if ( (int)MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)v24) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1197;
        }
        v20 = v24[1];
        v19 = 1;
        v21 = (-(__int64)(*(_DWORD *)(*((_QWORD *)v24[1] + 30) + 16LL) != 0) & 3) + 2;
      }
      else
      {
        v23 = *(_OWORD *)v24;
        v24[1] = 0LL;
        MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)v24, (__int64)v9 + 288);
        MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v9 + 288));
        if ( !v24[1] )
        {
          WdLogSingleEntry2(2LL, v4, this);
          WdLogGlobalForLineNumber = 1181;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
          MonitorInstance = -1073741275;
          goto LABEL_25;
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
        v20 = v24[1];
        v21 = 3LL;
      }
      MONITOR_MGR::_IssueMonitorEvent((__int64)this + 8, *((_DWORD *)v20 + 45), 0, v21, v19, a4);
      MonitorInstance = MONITOR_MGR::_DestroyPhysicalMonitor(
                          this,
                          (const struct MONITOR_REF_ACCESSOR *)v24,
                          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a4);
      goto LABEL_25;
    }
    DxgMonitor::MonitorUsb4State::ReportHpdDepartureSkipped(v13);
    DxgkLogCodePointPacket(
      0x7Bu,
      *((_DWORD *)v24[1] + 45),
      0,
      0,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 412LL));
    if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 4096LL) )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 412LL);
      v26 = *((_DWORD *)v24[1] + 45);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v26,
        (__int64)&unk_140145D24,
        v16,
        v17,
        (__int64)&v26,
        (__int64)&v23);
    }
    v18 = WdLogNewEntry5_WdTrace(v15, v14);
    MonitorInstance = 128;
    *(_QWORD *)(v18 + 24) = v4;
    *(_QWORD *)(v18 + 32) = this;
    WdLogGlobalForLineNumber = 1157;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 1113;
  }
LABEL_25:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v24);
  return (unsigned int)MonitorInstance;
}
