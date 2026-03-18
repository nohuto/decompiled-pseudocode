/*
 * XREFs of ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1401ECB30
 * Callers:
 *     ??1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ @ 0x14007F904 (--1OUTPUTDUPL_MGR_INDIRECT@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x14007F998 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x14007BCE0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401ED718 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::~OUTPUTDUPL_MGR(OUTPUTDUPL_MGR **this)
{
  DXGDIAGNOSTICS *v2; // rcx

  if ( this[7] != (OUTPUTDUPL_MGR *)(this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 884;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_PendingDestroyListHead)",
      884LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  OUTPUTDUPL_MGR::DestroySourceContextLists((OUTPUTDUPL_MGR *)this);
  v2 = this[10];
  if ( v2 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v2);
    this[10] = 0LL;
  }
}
