/*
 * XREFs of ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x140263880
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x140348E64 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x14034901C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        _BYTE *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  VIDPN_MGR *v11; // r12
  int ConnectedMonitorHandle; // eax
  unsigned int v13; // esi
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct HDXGMONITOR__ *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  char v22; // [rsp+60h] [rbp-20h]
  _QWORD v23[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+50h] BYREF
  struct HDXGMONITOR__ *v25; // [rsp+D8h] [rbp+58h] BYREF

  v4 = (unsigned int)a2;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 6056);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6929;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6943;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6951;
  }
  v9 = *((_QWORD *)this + 395);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6956;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return 3223191554LL;
  }
  v11 = *(VIDPN_MGR **)(v9 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, (__int64)v11);
  v25 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v11, v4, &v25);
  v13 = ConnectedMonitorHandle;
  v14 = -1073741275;
  if ( ConnectedMonitorHandle == -1073741275 )
  {
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 6980;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return 3223192376LL;
  }
  else if ( ConnectedMonitorHandle >= 0 )
  {
    v17 = v25;
    if ( v25 )
    {
      MONITOR_MGR::AcquireMonitorShared(v23, (__int64)v25);
      if ( v23[0] )
      {
        *a3 = *(_BYTE *)(*(_QWORD *)(v23[0] + 232LL) + 116LL);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v23);
        v14 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3314;
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v23);
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6994;
      v14 = -1073741811;
    }
    VIDPN_MGR::ReleaseMonitorHandle(v11, v17);
    if ( v14 >= 0 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v17, v14);
      WdLogGlobalForLineNumber = 7009;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return (unsigned int)v14;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, this, ConnectedMonitorHandle);
    WdLogGlobalForLineNumber = 6989;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return v13;
  }
}
