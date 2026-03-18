/*
 * XREFs of ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x1403003A0
 * Callers:
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402FF158 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x14004B600 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___ @ 0x140052F78 (DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorGetSDRWhiteLevelMilliNits@@YAJPEAUHDXGMONITOR__@@PEAK@Z @ 0x140300A00 (-MonitorGetSDRWhiteLevelMilliNits@@YAJPEAUHDXGMONITOR__@@PEAK@Z.c)
 */

__int64 __fastcall GetSdrWhiteLevel(unsigned int a1, struct ADAPTER_DISPLAY *a2, unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  MONITOR_MGR *v10; // rdi
  int MonitorInstance; // eax
  __int64 v12; // rbx
  int v13; // esi
  struct DXGMONITOR *v14; // rbx
  int SDRWhiteLevelMilliNits; // eax
  __int64 v16; // rcx
  void *v17; // r8
  __int64 CurrentProcess; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF
  struct ADAPTER_DISPLAY *v25; // [rsp+88h] [rbp+38h] BYREF
  struct HDXGMONITOR__ *MonitorHandle; // [rsp+98h] [rbp+48h] BYREF

  v25 = a2;
  v3 = *((_QWORD *)a2 + 2);
  v5 = 4024LL * a1;
  v6 = *(unsigned int *)(v5 + *((_QWORD *)a2 + 16) + 1072);
  v7 = WdLogNewEntry5_WdTrace(v5, a2);
  v9 = (unsigned int)v6;
  *(_QWORD *)(v7 + 24) = v6;
  *(_QWORD *)(v7 + 32) = v3;
  WdLogGlobalForLineNumber = 2340;
  if ( !v3 || (_DWORD)v6 == -1 )
    goto LABEL_19;
  if ( !*(_QWORD *)(v3 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2361;
  }
  v10 = *(MONITOR_MGR **)(*(_QWORD *)(v3 + 3160) + 112LL);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2371;
LABEL_19:
    LODWORD(v12) = -1073741811;
    goto LABEL_16;
  }
  *((_QWORD *)&v21 + 1) = 0LL;
  *(_QWORD *)&v21 = GetSdrWhiteLevel;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v21);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, v6, 1, (struct MONITOR_REF_ACCESSOR *)&v21);
  LODWORD(v12) = -1073741275;
  v13 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v9, v10);
    WdLogGlobalForLineNumber = 2386;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
LABEL_16:
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, (int)v12, CurrentProcess);
    WdLogGlobalForLineNumber = 58;
    return (unsigned int)v12;
  }
  if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v9, v10);
    WdLogGlobalForLineNumber = 2393;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
    LODWORD(v12) = v13;
    goto LABEL_16;
  }
  v14 = (struct DXGMONITOR *)*((_QWORD *)&v21 + 1);
  if ( !*((_QWORD *)&v21 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2398;
  }
  *((_QWORD *)&v21 + 1) = 0LL;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v14);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
  *(_QWORD *)&v21 = &v25;
  *((_QWORD *)&v21 + 1) = &MonitorHandle;
  DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79_((__int64)v22, &v21);
  v24 = 0;
  SDRWhiteLevelMilliNits = MonitorGetSDRWhiteLevelMilliNits(MonitorHandle, &v24);
  v12 = SDRWhiteLevelMilliNits;
  if ( SDRWhiteLevelMilliNits < 0 )
  {
    v20 = PsGetCurrentProcess(v16);
    WdLogSingleEntry2(3LL, v12, v20);
    WdLogGlobalForLineNumber = 78;
  }
  else
  {
    *a3 = v24 / 0x3E8;
  }
  if ( v23 )
    MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v22[0] + 16LL), *(struct HDXGMONITOR__ **)v22[1], v17);
  return (unsigned int)v12;
}
