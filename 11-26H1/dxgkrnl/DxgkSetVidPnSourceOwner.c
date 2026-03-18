/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x140435750
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x140075BB8 (Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *Src)
{
  __int64 v2; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rbx
  void **ULong64FromUser; // rax
  int IsEnabledDeviceUsageNoInline; // ebx
  __int64 ULongFromUser; // rsi
  unsigned int *p_VidPnSourceCount; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13[2]; // [rsp+60h] [rbp-48h] BYREF
  int v14; // [rsp+70h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h]
  char v16; // [rsp+80h] [rbp-28h]
  int v17; // [rsp+B8h] [rbp+10h] BYREF
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v18; // [rsp+C0h] [rbp+18h]
  unsigned int v19; // [rsp+C8h] [rbp+20h]

  LOBYTE(v13[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v13, 0LL, 0x2Fu, 0);
  v3 = v13[1];
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2077;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2077);
  v18.0 = 0;
  v18.0 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057)RtlReadULongFromUser(&Src[1].hDevice);
  ULong64FromUser = (void **)RtlReadULong64FromUser(&Src[1].pType);
  if ( (*(_BYTE *)&v18.0 & 2) != 0 )
  {
    v19 = 0;
    v17 = 0;
    IsEnabledDeviceUsageNoInline = Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline();
    ULongFromUser = (unsigned int)RtlReadULongFromUser(&Src->hDevice);
    v19 = RtlReadULongFromUser((unsigned int *)Src->pVidPnSourceId);
    p_VidPnSourceCount = &Src->VidPnSourceCount;
    if ( !IsEnabledDeviceUsageNoInline )
      p_VidPnSourceCount = (unsigned int *)&v17;
    v17 = RtlReadULongFromUser(p_VidPnSourceCount);
    if ( v17 != 1 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3824;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DisableDWMVirtualMode can only be used with a single VidPn source",
        ULongFromUser,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
      if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
      v9 = -1073741811;
      goto LABEL_17;
    }
    v10 = DisableDWMVirtualModeOnVidPnSource(ULongFromUser, v19);
  }
  else
  {
    v10 = SetVidPnSourceOwnerInternal(Src, v18, ULong64FromUser, v3);
  }
  v9 = v10;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
LABEL_17:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v13);
  return v9;
}
