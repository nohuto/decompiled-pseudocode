/*
 * XREFs of ?SetNtObjectPointer@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1403C573C
 * Callers:
 *     DxgkDispMgrCreate @ 0x1403C5460 (DxgkDispMgrCreate.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::SetNtObjectPointer(
        DXGDISPLAYMANAGEROBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT_CONTAINER *a2)
{
  if ( *((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 588;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 588LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = a2;
}
