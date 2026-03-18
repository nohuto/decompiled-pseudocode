/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14002E274 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z @ 0x140193504 (-MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z.c)
 *     ?MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z @ 0x1403825FC (-MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1403847C8 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x140384930 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        unsigned __int64 a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        unsigned int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  char v13; // di
  char v14; // bl
  DXGADAPTER *ContainingAdapter; // rax
  int v16; // eax
  __int64 v17; // rdi
  struct DXGADAPTER *v18; // rax
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rax
  struct DXGADAPTER *v21; // rax
  struct DXGADAPTER *v22; // rax
  bool v23; // zf
  int v24; // eax
  struct DXGADAPTER *v25; // rax
  __int64 result; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v27; // rdi
  int v28; // eax
  unsigned int v29; // ebx
  _DXGKARG_COMMITVIDPN v30; // [rsp+30h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == -96LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8481;
  }
  v30.hPrimaryAllocation = a3;
  v13 = a7;
  *(_QWORD *)&v30.Flags = 0LL;
  v14 = *((_BYTE *)a8 + 4) & 8;
  v30.AffectedVidPnSourceId = v9;
  LOBYTE(a7) = 0;
  v30.hFunctionalVidPn = (D3DKMDT_HVIDPN)(a2 & -(__int64)(a2 != -88LL));
  *(_QWORD *)&v30.Flags = a6 & 1 | (2 * (v13 & 1u));
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( (int)MonitorIsUsingSimulatedMonitor(ContainingAdapter, (unsigned __int8 *)&a7) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 469;
  }
  if ( (_BYTE)a7 || v13 )
    v30.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v30.MonitorConnectivityChecks = a5;
  if ( !v14 )
  {
    if ( !this[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v16 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v30);
    v17 = v16;
    if ( v16 == -1071774920 || v16 == -1071774976 )
    {
      v20 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(7LL, a2, v9, v20);
      WdLogGlobalForLineNumber = 8524;
      if ( v30.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
        *a9 = 1;
      a7 = 0;
      v21 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      if ( (int)MonitorGetNumConnectedMonitor(v21, &a7) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8541;
      }
      if ( a7 != 1 || v30.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
        goto LABEL_16;
      v22 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(7LL, a2, v9, v22);
      v23 = this[1] == 0LL;
      WdLogGlobalForLineNumber = 8555;
      v30.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
      if ( v23 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v24 = ADAPTER_DISPLAY::DdiCommitVidPn(this[1], &v30);
      v17 = v24;
      if ( v24 < 0 )
      {
        v25 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
        WdLogSingleEntry4(7LL, a2, v9, v25, v17);
        v19 = 2LL;
        WdLogGlobalForLineNumber = 8565;
        goto LABEL_29;
      }
      DmmLogCommitVidPnFailedPacket(&v30, (unsigned int)v24, 3LL);
    }
    else if ( v16 < 0 )
    {
      v18 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
      WdLogSingleEntry3(2LL, a2, v18, v17);
      WdLogGlobalForLineNumber = 8581;
LABEL_16:
      v19 = 4LL;
LABEL_29:
      DmmLogCommitVidPnFailedPacket(&v30, (unsigned int)v17, v19);
      return (unsigned int)v17;
    }
  }
  v27 = a8;
  v28 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, (const struct DMMVIDPN *)a2, v9, a8);
  v29 = v28;
  if ( v28 >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, a2, v9, (int)(*(_DWORD *)v27 << 28) >> 28, v28);
  result = v29;
  WdLogGlobalForLineNumber = 8599;
  return result;
}
