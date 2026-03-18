/*
 * XREFs of ?DxgkCddTerminateThread@@YAXPEAU_KEVENT@@@Z @ 0x140415AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DxgkCddTerminateThread(PRKEVENT Event)
{
  __int64 v2; // rcx
  int v3; // [rsp+50h] [rbp-28h] BYREF
  __int64 v4; // [rsp+58h] [rbp-20h]
  char v5; // [rsp+60h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v3 = -1;
  v4 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v5 = 1;
    v3 = 3013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Event, (__int64)&EventProfilerEnter);
  }
  else
  {
    v5 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v3, 3013);
  retaddr = 0LL;
  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2726;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PASSIVE_LEVEL == KeGetCurrentIrql()",
      2726LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent(Event, 0, 0);
  PsTerminateSystemThread(0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v3);
  if ( v5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
  }
}
