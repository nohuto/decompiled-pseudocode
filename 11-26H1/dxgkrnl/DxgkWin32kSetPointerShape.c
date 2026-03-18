/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x14040CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1402CE01C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int Value; // eax
  const wchar_t *v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-50h]
  __int64 VidPnSourceId; // [rsp+20h] [rbp-50h]
  __int64 LowPart; // [rsp+28h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-48h]
  int v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  char v26; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2129);
  if ( !a3 )
    goto LABEL_26;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v27);
  v10 = (char *)v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 1739;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerShape function.",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    }
    return 3223192359LL;
  }
  v11 = *((_QWORD *)v9 + 395);
  if ( !v11 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v23 = a1->LowPart;
    v20 = a1->HighPart;
    WdLogGlobalForLineNumber = 1746;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerShape is not a display adapter",
      v20,
      v23,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  if ( a2->VidPnSourceId >= *(_DWORD *)(v11 + 96) )
  {
    WdLogSingleEntry1(2LL);
    VidPnSourceId = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 1754;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source id (0x%I64x) is invalid",
      VidPnSourceId,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  Value = a2->Flags.Value;
  if ( Value >= 4 || (Value & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
    v15 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerShape function: Adapter LUID: (0x%I64x%08I64x"
           ") VidpnSourceId: (0x%I64x).";
    WdLogGlobalForLineNumber = 1760;
    goto LABEL_25;
  }
  if ( (Value & 1) == 0 )
  {
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
    v15 = L"Cannot send shape if cursor is not visible: Adapter LUID: (0x%I64x%08I64x) VidpnSourceId: (0x%I64x).";
    WdLogGlobalForLineNumber = 1766;
LABEL_25:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, a1->HighPart, a1->LowPart, a2->VidPnSourceId, 0LL, 0LL);
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  v16 = DxgkSetPointerShape(v10, a2, a3, a3->Width, a3->Height, a4, 1, 1);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
  return v16;
}
