/*
 * XREFs of DxgkDestroyAllocation @ 0x140358E90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14035948C (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(void *Src)
{
  __int64 v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rsi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // [rsp+50h] [rbp-58h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // [rsp+58h] [rbp-50h] BYREF
  unsigned int *v12[2]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v13[2]; // [rsp+70h] [rbp-38h]
  GUID ActivityId; // [rsp+78h] [rbp-30h] BYREF
  char v15; // [rsp+88h] [rbp-20h]

  LOBYTE(v10) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x33u, 0, &v11, (unsigned __int8 *)&v10);
  v3 = v11;
  ActivityId.Data1 = -1;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v15 = 1;
    ActivityId.Data1 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&ActivityId, 2006);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    *(_OWORD *)v12 = 0LL;
    *(_QWORD *)v13 = 0LL;
    RtlCopyFromUser(v12, Src, 0x18uLL);
    v6 = DxgkDestroyAllocationHelper(Current, (unsigned int)v12[0], HIDWORD(v12[0]), v12[1], v13[0], 0, v3, 1);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&ActivityId);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    if ( (_BYTE)v10 )
      DisplayScenarioContextDissociate(&v11);
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10634;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&ActivityId);
    if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v10);
  }
  return v6;
}
