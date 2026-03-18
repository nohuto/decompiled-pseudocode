/*
 * XREFs of DxgkSetStereoEnabled @ 0x1401E0AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1)
{
  int v1; // ebx
  struct DXGPROCESS *Current; // rax
  unsigned int updated; // ebx
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]
  char v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+88h] [rbp+18h] BYREF
  BOOL v12; // [rsp+90h] [rbp+20h] BYREF

  v8 = -1;
  v1 = a1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2089);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5368;
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
    if ( v10 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return updated;
  }
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 240LL))(&v11, 0LL, 0LL);
  if ( v11 && !v6 )
  {
    v12 = v1 != 0;
    updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v12, 4LL);
    goto LABEL_7;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
  return 3221225659LL;
}
