/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1400622C8
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1403AD850 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 228);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 228);
    if ( v2 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1806;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Result >= 0", 1806LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v2 != 0;
}
