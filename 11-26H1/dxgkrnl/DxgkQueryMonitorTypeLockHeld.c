/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x140347990
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14034741C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345E94 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x140346C50 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        _QWORD *a1,
        unsigned int a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9,
        char *a10)
{
  __int64 v10; // rbx
  unsigned int v11; // r10d
  unsigned int MonitorType; // esi
  bool *v15; // r13
  _BYTE *v16; // rdi
  _DWORD *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v21; // r8d
  DXGMONITOR *v22; // rdi
  int v23; // edi
  char v24; // cl
  char v25; // al
  bool v26; // r12
  bool v27; // r14
  char v28; // cl
  __int64 v29; // rbx
  __int64 result; // rax
  __int64 v31; // rax
  char v32; // al
  void *v33; // r8
  __int64 v34; // rbx
  __int64 v35; // [rsp+20h] [rbp-98h]
  unsigned int *v36; // [rsp+50h] [rbp-68h]
  __int64 v37; // [rsp+58h] [rbp-60h] BYREF
  __int64 v38; // [rsp+60h] [rbp-58h]
  DXGMONITOR *v39[10]; // [rsp+68h] [rbp-50h] BYREF
  struct HDXGMONITOR__ *v40; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+C8h] [rbp+10h]
  enum _DMM_VIDPN_MONITOR_TYPE *v42; // [rsp+D0h] [rbp+18h]

  v42 = a3;
  v41 = a2;
  v10 = a1[395];
  v11 = a2;
  MonitorType = 0;
  if ( !v10 )
  {
    v29 = a2;
    WdLogSingleEntry2(2LL, a1, a2);
    WdLogGlobalForLineNumber = 2956;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called on a render only adapter. (pAdapter = 0x%I64x, VidPn target Id = 0x%I64x)",
      (__int64)a1,
      v29,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2963;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryMonitorTypeLockHeld is called with D3DDDI_ID_UNINITIALIZED (pAdapter = 0x%I64x)",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v15 = a8;
  v16 = a6;
  v17 = a5;
  if ( !a4 && !a5 && !a6 && !a8 && !a9 )
    goto LABEL_39;
  v18 = *(_QWORD *)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, v18);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 120) + 72LL));
  v19 = *(_QWORD *)(v18 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, v41);
  v36 = (unsigned int *)TargetById;
  if ( !TargetById )
  {
    if ( v16 )
      *v16 = 0;
    if ( v15 )
      *v15 = *(_BYTE *)(a1[395] + 289LL);
    if ( a9 )
      *a9 = *(_BYTE *)(a1[395] + 290LL);
    goto LABEL_36;
  }
  if ( a4 )
    *a4 = *((_DWORD *)TargetById + 20);
  if ( v17 )
    *v17 = *((_DWORD *)TargetById + 21);
  if ( v16 )
    *v16 = *((_BYTE *)TargetById + 405);
  if ( v15 || a9 )
  {
    v21 = *((_DWORD *)TargetById + 6);
    if ( v21 == -1 )
    {
      MonitorType = -1073741811;
    }
    else
    {
      v38 = a1[395];
      if ( v38 )
      {
        LOBYTE(v40) = 0;
        MONITOR_MGR::AcquireMonitorShared(v39, (__int64)a1, v21, 1u);
        v22 = v39[0];
        if ( v39[0] )
        {
          if ( *((_DWORD *)v39[0] + 70) != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5280;
          }
          LOBYTE(v40) = DXGMONITOR::_IsVirtualModeSupportDisabled(v22);
          v23 = 0;
        }
        else
        {
          v23 = -1073741632;
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v39);
        if ( v23 != -1073741632 )
          MonitorType = v23;
        v24 = 0;
        if ( v23 != -1073741632 )
          v24 = (char)v40;
        if ( v24 )
        {
          v26 = 1;
          v27 = 1;
        }
        else
        {
          v25 = *(_BYTE *)(v38 + 289);
          v26 = v25 == 0;
          v27 = *(_BYTE *)(v38 + 290) == 0;
          if ( v25 && (*(_DWORD *)(v38 + 24) & 0x20) != 0 )
          {
            v28 = 1;
LABEL_30:
            if ( v15 )
              *v15 = !v26;
            if ( a9 )
              *a9 = !v27;
            if ( a10 )
              *a10 = v28;
            goto LABEL_36;
          }
        }
        v28 = 0;
        goto LABEL_30;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10231;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The selected adapter is render-only",
        10231LL,
        0LL,
        0LL,
        0LL,
        0LL);
      MonitorType = -1073741811;
      TargetById = (struct DMMVIDEOPRESENTTARGET *)v36;
    }
    WdLogSingleEntry2(2LL, *((unsigned int *)TargetById + 6), a1);
    v35 = v36[6];
    WdLogGlobalForLineNumber = 3006;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to find virtualization state on VidPn Target 0x%I64x adapter 0x%I64x",
      v35,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
    if ( v19 )
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
    return MonitorType;
  }
LABEL_36:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
  v11 = v41;
  a3 = v42;
LABEL_39:
  if ( a7 )
  {
    v31 = a1[395];
    if ( *(_BYTE *)(v31 + 289) && *(_BYTE *)(v31 + 290)
      || (v32 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[27] + 64LL) + 40LL) + 28LL) >= 0x4003u) )
    {
      v32 = 1;
    }
    *a7 = v32;
  }
  if ( !a3 )
    return MonitorType;
  v40 = 0LL;
  result = MonitorGetMonitorHandle(a1, v11, 0, DxgkQueryMonitorTypeLockHeld, &v40);
  if ( (int)result >= 0 )
  {
    MonitorType = MonitorGetMonitorType(v40, v42);
    if ( (MonitorType & 0x80000000) != 0 )
    {
      v34 = v41;
      WdLogSingleEntry2(2LL, v41, a1);
      WdLogGlobalForLineNumber = 3067;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to find MonitorType on VidPn Target 0x%I64x adapter 0x%I64x",
        v34,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)MonitorReleaseMonitorHandle(a1, v40, v33) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3077;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3077LL, 0LL, 0LL, 0LL, 0LL);
    }
    return MonitorType;
  }
  return result;
}
