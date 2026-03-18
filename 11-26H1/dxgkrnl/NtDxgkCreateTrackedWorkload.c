/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x14020B640
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1)
{
  unsigned int v1; // ebx
  const wchar_t *v2; // r9
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v6; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v7; // [rsp+58h] [rbp-A0h]
  char v8; // [rsp+60h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-88h]
  char v10; // [rsp+78h] [rbp-80h] BYREF
  int v11; // [rsp+B8h] [rbp-40h]
  __int128 v12; // [rsp+C0h] [rbp-38h]
  __int128 v13; // [rsp+D0h] [rbp-28h]
  __int128 v14; // [rsp+E0h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = -1;
  v7 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v8 = 1;
    v6 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v6, 2206);
  P = 0LL;
  v11 = 0;
  if ( DXGPROCESS::GetCurrent() )
  {
    v3 = -1073741637LL;
    v1 = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 146;
    v2 = L"Tracked workload not supported, returning 0x%I64x";
  }
  else
  {
    v1 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 139;
    v2 = L"Invalid process context, returning 0x%I64x";
    v3 = -1073741811LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v2, v3, 0LL, 0LL, 0LL, 0LL);
  if ( P != &v10 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v11 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
  return v1;
}
