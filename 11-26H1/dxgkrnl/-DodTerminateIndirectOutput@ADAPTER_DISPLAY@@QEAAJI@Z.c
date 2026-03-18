/*
 * XREFs of ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1401A3174
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401B81E0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodTerminateIndirectOutput(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD); // rax

  if ( !*((_QWORD *)this + 58) )
    return 3221225485LL;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 8807;
    return 3221225485LL;
  }
  v3 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v3 + 444) & 0x100) == 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 8813;
    return 3221225485LL;
  }
  v4 = *(unsigned int (__fastcall **)(_QWORD))(v3 + 2400);
  if ( !v4 )
    return 3221225659LL;
  if ( v4(*(_QWORD *)(v3 + 2336)) == -1073741637 )
    DxgkMiracastStopAllMiracastSessions(0LL, 0LL, 144LL);
  return 0LL;
}
