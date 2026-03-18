/*
 * XREFs of ??1?$DXGNODELIST@VDXGPROCESS@@VDXGCOPYPROTECTION@@@@AEAA@XZ @ 0x14002D8CC
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x140395514 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>::~DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>(_QWORD *a1)
{
  __int64 result; // rax

  if ( (_QWORD *)*a1 != a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 825;
    return DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 825LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
