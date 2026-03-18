/*
 * XREFs of DxgkDestroyAllocation2 @ 0x140359150
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140415610 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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

__int64 __fastcall DxgkDestroyAllocation2(_OWORD *Src)
{
  __int64 v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r12
  char CurrentThreadPreviousMode; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int8 v11[8]; // [rsp+50h] [rbp-68h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // [rsp+58h] [rbp-60h] BYREF
  unsigned int *v13[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v14[2]; // [rsp+70h] [rbp-48h]
  GUID v15; // [rsp+78h] [rbp-40h] BYREF
  char v16; // [rsp+88h] [rbp-30h]

  v11[0] = 0;
  v15 = 0LL;
  EtwActivityIdControl(3u, &v15);
  DisplayScenarioContextEnsureAndAssociate(&v15, 0x34u, 0, &v12, v11);
  v3 = v12;
  v15.Data1 = -1;
  *(_QWORD *)v15.Data4 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v15.Data1 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2105);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    *(_OWORD *)v13 = 0LL;
    *(_QWORD *)v14 = 0LL;
    if ( CurrentThreadPreviousMode == 1 )
    {
      RtlCopyFromUser(v13, Src, 0x18uLL);
      if ( (v14[1] & 0x7FFFFFFC) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 10706;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
        if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
        if ( v11[0] )
          DisplayScenarioContextDissociate(&v12);
        return -1073741811LL;
      }
    }
    else
    {
      *(_OWORD *)v13 = *Src;
      *(_QWORD *)v14 = *((_QWORD *)Src + 2);
    }
    v9 = DxgkDestroyAllocationHelper(
           Current,
           (unsigned int)v13[0],
           HIDWORD(v13[0]),
           v13[1],
           v14[0],
           (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v14[1],
           v3,
           CurrentThreadPreviousMode == 1);
  }
  else
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10691;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  if ( v11[0] )
    DisplayScenarioContextDissociate(&v12);
  return v9;
}
