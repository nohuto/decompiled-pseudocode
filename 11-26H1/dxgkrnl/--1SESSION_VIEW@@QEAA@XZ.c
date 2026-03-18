/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x140425330
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x140061E20 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this)
{
  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1968;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_NumDisplaySources == 0) && (IsListEmpty(&m_DisplaySourceListHead))",
      1968LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
