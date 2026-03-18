/*
 * XREFs of ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1402E7248
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void *__fastcall HMGRTABLE::GetEntryObject(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 244;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 244LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = 2 * v3;
  if ( (*(_DWORD *)(*(_QWORD *)this + 8 * v4 + 8) & 0x1F) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 245;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pEntryTable[Index].Type != HMGRENTRY_TYPE_FREE",
      245LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(void **)(*(_QWORD *)this + 8 * v4);
}
