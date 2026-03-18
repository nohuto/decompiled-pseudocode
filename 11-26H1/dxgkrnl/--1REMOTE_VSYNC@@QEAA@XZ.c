/*
 * XREFs of ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1401FD3C0
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall REMOTE_VSYNC::~REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *((_QWORD *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pEmulation == NULL", 34LL, 0LL, 0LL, 0LL, 0LL);
  }
}
