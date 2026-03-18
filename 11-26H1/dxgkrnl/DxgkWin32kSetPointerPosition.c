/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1403E7A10
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
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1402C7800 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(struct _LUID *a1, const struct _DXGKARG_SETPOINTERPOSITION *a2, int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  DXGADAPTER *v8; // rsi
  __int64 v9; // rax
  unsigned int Value; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-50h]
  __int64 LowPart; // [rsp+28h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+28h] [rbp-48h]
  __int64 VidPnSourceId; // [rsp+30h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  char v26; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+90h] [rbp+20h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2128);
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v27);
  v8 = v7;
  if ( v7 )
  {
    v9 = *((_QWORD *)v7 + 395);
    if ( !v9 )
    {
      WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
      LowPart = a1->LowPart;
      HighPart = a1->HighPart;
      WdLogGlobalForLineNumber = 2181;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter LUID (0x%I64x%08I64x) passed to DxgkWin32kSetPointerPosition is not a display adapter",
        HighPart,
        LowPart,
        0LL,
        0LL,
        0LL);
LABEL_15:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    if ( a2->VidPnSourceId < *(_DWORD *)(v9 + 96) )
    {
      Value = a2->Flags.Value;
      if ( Value < 4 && (Value & 2) == 0 )
      {
        v11 = DxgkSetPointerPosition(v8, a2, a3, 1, 1);
        DXGADAPTER::ReleaseReference(v8);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
        }
        return v11;
      }
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, a2->VidPnSourceId);
      VidPnSourceId = a2->VidPnSourceId;
      v21 = a1->LowPart;
      v17 = a1->HighPart;
      WdLogGlobalForLineNumber = 2195;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkWin32kSetPointerPosition function: Adapter LUID: (0x%I"
                  "64x%08I64x) VidpnSourceId: (0x%I64x).",
        v17,
        v21,
        VidPnSourceId,
        0LL,
        0LL);
      goto LABEL_15;
    }
    WdLogSingleEntry1(2LL);
    v19 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 2189;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VidPn source id (0x%I64x) is invalid",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    v22 = a1->LowPart;
    v18 = a1->HighPart;
    WdLogGlobalForLineNumber = 2174;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkWin32kSetPointerPosition function.",
      v18,
      v22,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return 3223192359LL;
}
