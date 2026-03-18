/*
 * XREFs of HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus @ 0x1400138C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x140002CE8 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 */

__int64 __fastcall HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny30PortChangeSet(*(_QWORD *)(a1 + 960));
}
