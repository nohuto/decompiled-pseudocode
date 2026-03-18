/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1401FC080
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x140080BCC (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  char v9; // [rsp+40h] [rbp-10h]

  if ( KeGetCurrentIrql() >= 2u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, DxgkSetProtectedSessionStatusCB, 0LL, 0LL);
    WdLogGlobalForLineNumber = 32;
  }
  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 15000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 15000);
  if ( *(_QWORD *)a1 )
  {
    v5 = DXGPROTECTEDSESSION::SetSessionStatus(
           *(DXGPROTECTEDSESSION **)a1,
           (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return v5;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
