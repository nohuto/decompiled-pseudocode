/*
 * XREFs of ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x140073870
 * Callers:
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14033BBA0 (DxgkQueryVidPnExclusiveOwnership.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1858;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Acquired == FALSE", 1858LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 6) = 1024;
}
