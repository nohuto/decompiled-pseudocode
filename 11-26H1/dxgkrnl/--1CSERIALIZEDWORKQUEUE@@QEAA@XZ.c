/*
 * XREFs of ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x14007BB58
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1402020B0 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE(CSERIALIZEDWORKQUEUE *this)
{
  if ( *((_BYTE *)this + 64) || *((CSERIALIZEDWORKQUEUE **)this + 6) != (CSERIALIZEDWORKQUEUE *)((char *)this + 48) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 829;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_WorkItemActive && IsListEmpty(&m_WorkItemList)",
      829LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
