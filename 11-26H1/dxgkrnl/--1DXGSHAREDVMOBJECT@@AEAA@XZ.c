/*
 * XREFs of ??1DXGSHAREDVMOBJECT@@AEAA@XZ @ 0x140061CEC
 * Callers:
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSHAREDVMOBJECT::~DXGSHAREDVMOBJECT(DXGSHAREDVMOBJECT *this)
{
  if ( *((_QWORD *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 182;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pDxgkObject", 182LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 183;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_Reference", 183LL, 0LL, 0LL, 0LL, 0LL);
  }
}
