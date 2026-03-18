/*
 * XREFs of ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140300640
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1402FF158 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x14004B600 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___ @ 0x140052F78 (DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x1402FED38 (-MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@.c)
 */

__int64 __fastcall PopulateHDRMetadataFromDisplay(
        unsigned int a1,
        struct ADAPTER_DISPLAY *this,
        struct _D3DDDI_HDR_METADATA_HDR10 *a3,
        enum _D3DDDI_HDR_METADATA_TYPE *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  MONITOR_MGR *v13; // rdi
  int MonitorInstance; // eax
  __int64 v15; // rbx
  int v16; // esi
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rcx
  char v19; // bl
  void *v20; // r8
  __int64 v22; // rax
  void *v23; // r8
  int AdvancedColorMetadataOverride; // eax
  __int64 v25; // rcx
  void *v26; // r8
  bool v27; // zf
  __int64 CurrentProcess; // rax
  __int64 v29; // rax
  struct HDXGMONITOR__ *MonitorHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v31[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+50h] [rbp-20h] BYREF
  struct HDXGMONITOR__ **v33; // [rsp+58h] [rbp-18h]
  char v34; // [rsp+60h] [rbp-10h]
  struct ADAPTER_DISPLAY *v35; // [rsp+A8h] [rbp+38h] BYREF

  v35 = this;
  v4 = a1;
  if ( !this
    || !a3
    || !a4
    || *((_DWORD *)this + 24) <= a1
    || !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, a1) )
  {
    return 3221225485LL;
  }
  v7 = 4024 * v4;
  v8 = *((_QWORD *)v35 + 2);
  v9 = *(unsigned int *)(v7 + *((_QWORD *)v35 + 16) + 1072);
  v10 = WdLogNewEntry5_WdTrace(v7, v35);
  v12 = (unsigned int)v9;
  *(_QWORD *)(v10 + 24) = v9;
  *(_QWORD *)(v10 + 32) = v8;
  WdLogGlobalForLineNumber = 2340;
  if ( !v8 || (_DWORD)v9 == -1 )
    goto LABEL_32;
  if ( !*(_QWORD *)(v8 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2361;
  }
  v13 = *(MONITOR_MGR **)(*(_QWORD *)(v8 + 3160) + 112LL);
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2371;
LABEL_32:
    LODWORD(v15) = -1073741811;
LABEL_33:
    CurrentProcess = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(3LL, (int)v15, CurrentProcess);
    WdLogGlobalForLineNumber = 1808;
    return (unsigned int)v15;
  }
  *((_QWORD *)&v31[0] + 1) = 0LL;
  *(_QWORD *)&v31[0] = PopulateHDRMetadataFromDisplay;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v31);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v13, v9, 1, (struct MONITOR_REF_ACCESSOR *)v31);
  LODWORD(v15) = -1073741275;
  v16 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v12, v13);
    WdLogGlobalForLineNumber = 2386;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v31);
    goto LABEL_33;
  }
  if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v12, v13);
    WdLogGlobalForLineNumber = 2393;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v31);
    LODWORD(v15) = v16;
    goto LABEL_33;
  }
  v17 = (struct DXGMONITOR *)*((_QWORD *)&v31[0] + 1);
  if ( !*((_QWORD *)&v31[0] + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2398;
  }
  *((_QWORD *)&v31[0] + 1) = 0LL;
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v17);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v31);
  *(_QWORD *)&v31[0] = &v35;
  *((_QWORD *)&v31[0] + 1) = &MonitorHandle;
  DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79_((__int64)&v32, v31);
  if ( !MonitorHandle )
  {
    LODWORD(v15) = -1073741811;
    goto LABEL_22;
  }
  MONITOR_MGR::AcquireMonitorShared(v31, (__int64)MonitorHandle);
  if ( !*(_QWORD *)&v31[0] )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3681;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v31);
LABEL_22:
    v22 = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(3LL, (int)v15, v22);
    WdLogGlobalForLineNumber = 1830;
    goto LABEL_23;
  }
  v19 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v31[0] + 224LL) + 516LL);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v31);
  if ( !v19 )
  {
    if ( v34 )
      MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v32 + 16LL), *v33, v20);
    return 3221225474LL;
  }
  AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(MonitorHandle, a3);
  v15 = AdvancedColorMetadataOverride;
  if ( AdvancedColorMetadataOverride < 0 )
  {
    v29 = PsGetCurrentProcess(v25);
    WdLogSingleEntry2(3LL, v15, v29);
    WdLogGlobalForLineNumber = 1842;
LABEL_23:
    if ( v34 )
      MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v32 + 16LL), *v33, v23);
    return (unsigned int)v15;
  }
  v27 = v34 == 0;
  *a4 = D3DDDI_HDR_METADATA_TYPE_HDR10;
  if ( !v27 )
    MonitorReleaseMonitorHandle(*(_QWORD **)(*(_QWORD *)v32 + 16LL), *v33, v26);
  return 0LL;
}
