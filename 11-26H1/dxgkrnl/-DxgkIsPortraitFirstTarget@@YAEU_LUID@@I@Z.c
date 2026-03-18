/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401CE470
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2)
{
  __int64 v2; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  DXGADAPTER *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v12; // rcx
  char v14; // di
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2180);
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v19);
  v6 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2826;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the caller specified adapter in global adapter list!",
      2826LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    }
    return 0;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v5, 0LL);
  v7 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
  DXGADAPTER::ReleaseReference(v6);
  if ( (int)v7 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, v7);
    WdLogGlobalForLineNumber = 2853;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquir the adapter core access lock on adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)v6,
      v7,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  v8 = *((_QWORD *)v6 + 395);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2864;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to check portrait first target on a non-display adapter 0x%I64x!",
      (__int64)v6,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
    goto LABEL_19;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2875;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to get VidPnMgr on adapter 0x%I64x!",
      (__int64)v6,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v19, *(_QWORD *)(v8 + 104));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
  v10 = *(_QWORD *)(v9 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v10, v2);
  if ( !TargetById )
  {
    WdLogSingleEntry2(2LL, v2, v6);
    WdLogGlobalForLineNumber = 2888;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to get VideoPresentTarget 0x%I64x from adapter 0x%I64x!",
      v2,
      (__int64)v6,
      0LL,
      0LL,
      0LL);
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
    goto LABEL_18;
  }
  v14 = *((_BYTE *)TargetById + 405);
  if ( v10 )
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return v14;
}
