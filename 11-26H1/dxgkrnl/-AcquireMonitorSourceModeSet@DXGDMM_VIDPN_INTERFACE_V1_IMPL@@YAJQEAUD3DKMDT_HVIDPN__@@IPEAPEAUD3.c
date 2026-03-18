/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140261470
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400423CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x140348E64 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  int v4; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  VIDPN_MGR *v11; // rdi
  struct DXGADAPTER *ContainingAdapter; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  struct HDXGMONITOR__ *v22; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  char v28; // [rsp+60h] [rbp-10h]
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v29; // [rsp+C0h] [rbp+50h] BYREF
  struct HDXGMONITOR__ *v30; // [rsp+C8h] [rbp+58h] BYREF

  v4 = (int)a2;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6038);
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4680;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_phMonitorSourceModeSet != NULL",
      4680LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4681;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_ppDxgDmmMonitorSourceModeSetInterface != NULL",
      4681LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4699;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    }
    return 3223192323LL;
  }
  v11 = *(VIDPN_MGR **)(v8 + 48);
  v29 = 0LL;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v11);
  v15 = WdLogNewEntry5_WdTrace(v14, v13);
  *(_QWORD *)(v15 + 24) = ContainingAdapter;
  *(_QWORD *)(v15 + 32) = &v29;
  WdLogGlobalForLineNumber = 4600;
  if ( !ContainingAdapter )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4608;
    v16 = -1073741811LL;
LABEL_20:
    v17 = VIDPN_MGR::GetContainingAdapter(v11);
    WdLogSingleEntry2(2LL, v17, v16);
    WdLogGlobalForLineNumber = 4721;
    goto LABEL_22;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4630;
  }
  if ( !*((_QWORD *)ContainingAdapter + 395) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4634;
    v16 = -1073741637LL;
    goto LABEL_20;
  }
  v29 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)&DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DmmMonitorSourceModeSetInterfaceV1;
LABEL_22:
  v18 = *((_QWORD *)v11 + 15);
  v30 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)(v18 + 72), 1u);
  v19 = *((_QWORD *)v11 + 15);
  v20 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v19, v4);
  if ( v20 )
  {
    if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v11, *(_DWORD *)(v20 + 24), &v30) >= 0 && (v22 = v30) != 0LL )
    {
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
      v23 = v29;
      *a3 = v22;
      *a4 = v23;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4755;
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
      return 3223192376LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4741;
    if ( v19 )
      ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return 3223192325LL;
  }
}
