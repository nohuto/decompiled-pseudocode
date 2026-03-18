/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1402021C4
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x140082134 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1403B3974 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this)
{
  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 27)
    || *((_DWORD *)this + 26)
    || *((SESSION_ADAPTER **)this + 14) != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2304;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_RefCount == 0) && (m_DisplayAdapter == NULL) && (m_DxgCddDevice == NULL) && (m_DxgCddContext == NULL) "
                "&& (m_NumDisplaySources == 0) && (m_SourcesMask == 0) && IsListEmpty(&m_DisplaySourceListHead)",
      2304LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
}
