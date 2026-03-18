/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F1C50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14005D4C4 (Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14006AA6C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14006C90C (-SetTargetUsage@DMMVIDEOPRESENTTARGET@@QEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x14006E200 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     DpiPanelBufferingGetCaps @ 0x14009204C (DpiPanelBufferingGetCaps.c)
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14018D00C (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x140348F54 (-MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z.c)
 *     ?MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362EE0 (-MonitorIsMonitorAndLinkHDRCapable@@YAJPEAUHDXGMONITOR__@@PEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4Mo.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403C8F88 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, struct HDXGMONITOR__ *a3, int a4)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rdi
  unsigned int v10; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  int MonitorHandle; // eax
  __int64 v13; // r14
  struct HDXGMONITOR__ *v14; // r15
  struct DXGADAPTER *v15; // rax
  struct HDXGMONITOR__ *v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int NativeFlags; // eax
  __int64 v20; // rbx
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rcx
  char v23; // al
  char v24; // cl
  char v25; // al
  int UsageClass; // eax
  __int64 v27; // rbx
  struct DXGADAPTER *v28; // rax
  int v29; // edx
  char v30; // r8
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v32; // rbx
  struct DXGADAPTER *v33; // rax
  char v34; // al
  struct DXGADAPTER *v35; // rax
  int v36; // eax
  struct DXGADAPTER *v37; // rax
  struct DXGADAPTER *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int PathSourceFromTarget; // ebx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v44; // r8
  struct DXGADAPTER *v45; // rax
  int v46; // ecx
  struct DXGADAPTER *v47; // rax
  void *v48; // r8
  unsigned __int8 v49[8]; // [rsp+30h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v50; // [rsp+38h] [rbp-8h]
  int v51; // [rsp+80h] [rbp+40h] BYREF
  struct HDXGMONITOR__ *v52; // [rsp+90h] [rbp+50h] BYREF

  v52 = a3;
  v5 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(a1 + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5352;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
  v7 = *(_QWORD *)(a1 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v5);
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, v5, a1);
    WdLogGlobalForLineNumber = 5365;
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    return 3223192325LL;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  v10 = *((_DWORD *)TargetById + 6);
  v50 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 14);
  v52 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  MonitorHandle = MonitorGetMonitorHandle(ContainingAdapter, v10, 0, TargetById, &v52);
  v13 = MonitorHandle;
  if ( MonitorHandle == -1073741275 )
  {
    v14 = v52;
    if ( v52 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5386;
    }
    LODWORD(v13) = 0;
  }
  else if ( MonitorHandle >= 0 )
  {
    v14 = v52;
  }
  else
  {
    v15 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    WdLogSingleEntry3(2LL, v5, v15, v13);
    v14 = 0LL;
    WdLogGlobalForLineNumber = 5395;
  }
  v16 = v50;
  if ( v14 != v50 )
  {
    DMMVIDEOPRESENTTARGET::SetConnectedMonitor((struct _DXGK_MONITORLINKINFO *)TargetById, v14);
    v17 = *((_DWORD *)TargetById + 20);
    *((_BYTE *)TargetById + 413) = 1;
    if ( v17 == 10 || v17 == 11 )
      *((_BYTE *)TargetById + 414) = 1;
    v18 = 0LL;
    if ( v14 )
    {
      LOBYTE(v52) = 0;
      LOBYTE(v51) = 0;
      v49[0] = 0;
      NativeFlags = MonitorGetNativeFlags(v14, (unsigned __int8 *)&v52, (unsigned __int8 *)&v51, v49);
      if ( NativeFlags < 0 )
      {
        v20 = NativeFlags;
        v21 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v5, v21, v20);
        v18 = 0LL;
        WdLogGlobalForLineNumber = 5426;
      }
      if ( *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 395) + 289LL)
        && *(_BYTE *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 395) + 290LL)
        || (v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1) + 27) + 64LL)
                            + 40LL),
            v23 = 0,
            *(_DWORD *)(v22 + 28) >= 0x4003u) )
      {
        v23 = 1;
      }
      v24 = (char)v52;
      *((_BYTE *)TargetById + 405) = (_BYTE)v52;
      if ( v23 || !v24 || (v25 = 1, !(_BYTE)v51) )
        v25 = 0;
      *((_BYTE *)TargetById + 406) = v25;
      v51 = 0;
      LOBYTE(v52) = 0;
      UsageClass = MonitorGetUsageClass(v14, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v51, (bool *)&v52);
      if ( UsageClass >= 0 )
      {
        v29 = v51;
        v30 = (char)v52;
      }
      else
      {
        v27 = UsageClass;
        v28 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v5, v28, v27);
        v18 = 0LL;
        WdLogGlobalForLineNumber = 5447;
        v29 = 0;
        v30 = 0;
      }
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v29, v30);
      *((_BYTE *)TargetById + 412) = v49[0];
      LODWORD(v52) = 0;
      IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v14, (union MONITOR_AND_LINK_HDR_CAPS *)&v52, 0LL);
      if ( IsMonitorAndLinkHDRCapable >= 0 )
      {
        v34 = (char)v52;
      }
      else
      {
        v32 = IsMonitorAndLinkHDRCapable;
        v33 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v5, v33, v32);
        v18 = 0LL;
        WdLogGlobalForLineNumber = 5464;
        v34 = 0;
      }
      LOBYTE(v52) = 0;
      *((_BYTE *)TargetById + 419) = v34 & 1;
      v35 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
      v36 = IsVirtualizationDisabledForTarget((__int64)v35, v5, (bool *)&v52, (bool *)&v51, 0LL);
      v13 = v36;
      if ( v36 < 0 )
      {
        v37 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        WdLogSingleEntry3(2LL, v5, v37, v13);
        v18 = 0LL;
        WdLogGlobalForLineNumber = 5481;
        LODWORD(v13) = 0;
      }
      *((_BYTE *)TargetById + 407) = (_BYTE)v52 == 0;
      if ( (unsigned int)Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline() )
      {
        v38 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
        *((_DWORD *)TargetById + 154) = 0;
        v39 = *((_QWORD *)v38 + 27);
        if ( !v39
          || (DpiPanelBufferingGetCaps(v39, *((_DWORD *)TargetById + 6), (_DWORD *)TargetById + 154) & 0xC0000000) == 0xC0000000 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 5496;
        }
      }
    }
    else
    {
      *(_WORD *)((char *)TargetById + 405) = 0;
      DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, 0, 0);
      *((_BYTE *)TargetById + 412) = 1;
    }
    v40 = *(_QWORD *)(a1 + 160);
    if ( v40 != a1 + 160 )
      v18 = v40 - 8;
    while ( v18 )
    {
      if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v18 + 96), v5) )
        DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v18 + 96));
      v41 = *(_QWORD *)(v18 + 8);
      v18 = v41 - 8;
      if ( v41 == a1 + 160 )
        v18 = 0LL;
    }
    v52 = 0LL;
    PathSourceFromTarget = -1;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)a1);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v52, (__int64)ClientCommittedVidPnRef);
    if ( v52 )
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct HDXGMONITOR__ *)((char *)v52 + 96), v5);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v52, 0LL);
    if ( !*(_QWORD *)(a1 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    ADAPTER_DISPLAY::OnMonitorConnectionChanged(*(DXGADAPTER ***)(a1 + 8), PathSourceFromTarget, v44);
    v16 = v50;
    goto LABEL_66;
  }
  switch ( a4 )
  {
    case 10:
      v51 = 0;
      LOBYTE(v52) = 0;
      if ( (int)MonitorGetUsageClass(v14, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v51, (bool *)&v52) >= 0 )
        DMMVIDEOPRESENTTARGET::SetTargetUsage((__int64)TargetById, v51, (char)v52);
      break;
    case 11:
      break;
    case 12:
      v46 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      *((_DWORD *)TargetById + 33) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
      `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v46 + 1;
LABEL_65:
      LODWORD(v13) = 0;
      goto LABEL_66;
    default:
      goto LABEL_66;
  }
  LOBYTE(v52) = 0;
  v45 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  LODWORD(v13) = IsVirtualizationDisabledForTarget((__int64)v45, v5, (bool *)&v52, (bool *)&v51, 0LL);
  if ( (int)v13 < 0 )
    goto LABEL_65;
  *((_BYTE *)TargetById + 407) = (_BYTE)v52 == 0;
LABEL_66:
  if ( v16 )
  {
    v47 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
    MonitorReleaseMonitorHandle(v47, v16, v48);
  }
  return (unsigned int)v13;
}
