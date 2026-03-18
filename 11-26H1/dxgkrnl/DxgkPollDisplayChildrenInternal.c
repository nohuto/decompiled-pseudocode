/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x140410AB0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x140410A90 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14007376C (--0_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400737BC (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400737F4 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E5904 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140410DCC (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 ULong64FromUser; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  DXGGLOBAL *Global; // rax
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rcx
  _D3DKMT_POLLDISPLAYCHILDREN v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  char v19; // [rsp+68h] [rbp-A0h]
  unsigned __int8 v20[8]; // [rsp+70h] [rbp-98h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // [rsp+78h] [rbp-90h] BYREF
  GUID ActivityId; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v24[72]; // [rsp+A8h] [rbp-60h] BYREF

  v20[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x2Bu, 0, &v21, v20);
  v5 = v21;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2036);
  v16 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = DXGPROCESS::GetCurrent(v6);
  if ( a2 == 1 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v16 = (_D3DKMT_POLLDISPLAYCHILDREN)ULong64FromUser;
  }
  else
  {
    ULong64FromUser = (unsigned __int64)*a1;
    v16 = *a1;
  }
  v8 = HIDWORD(ULong64FromUser);
  if ( (unsigned int)v8 >= 0x20 )
    *((_DWORD *)&v16 + 1) = v8 & 1;
  v9 = ((*((_BYTE *)&v16 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v16 + 4) & 0x10) == 0 )
    v9 = (*((_BYTE *)&v16 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v16 + 4) & 8) == 0 )
  {
    v11 = PollDisplayChildrenForAdapter(&v16, v9, v5);
    goto LABEL_17;
  }
  if ( !v16.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v16, v9, v5);
LABEL_17:
    v12 = v11;
    goto LABEL_18;
  }
  v12 = -1073741811;
LABEL_18:
  if ( v12 >= 0 && (*((_BYTE *)&v16 + 4) & 4) != 0 )
  {
    *(_QWORD *)&ActivityId.Data1 = -1LL;
    _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v23);
    CDisplayScenarioContextCarrier::operator=((__int64)v24, (const struct _GUID *)v5);
    v13 = DxgkHandleMonitorEvent(*(struct _LUID *)&ActivityId.Data1, 0xFFFFFFFF, 5u, 2LL, (__int64)v23);
    _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION((_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *)v23);
    v12 = 0;
    if ( v13 != -1071774941 )
      v12 = v13;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  if ( v20[0] )
    DisplayScenarioContextDissociate(&v21);
  return (unsigned int)v12;
}
