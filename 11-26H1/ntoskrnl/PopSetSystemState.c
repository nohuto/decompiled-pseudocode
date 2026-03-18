/*
 * XREFs of PopSetSystemState @ 0x1404383B4
 * Callers:
 *     PoSetSystemState @ 0x140438370 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140B6A070 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopDiagTraceSetSystemState @ 0x1404383F0 (PopDiagTraceSetSystemState.c)
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 */

__int64 __fastcall PopSetSystemState(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v2 = a2;
    v3 = a1;
    result = PopDiagTraceSetSystemState(a1, a2);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(v2);
  }
  return result;
}
