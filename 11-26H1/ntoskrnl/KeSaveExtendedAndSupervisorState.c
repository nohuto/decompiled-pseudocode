/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x14050E5B4
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C02C90 (PopHandleNextState.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D4130 (KiSaveExtendedAndSupervisorState.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return KiSaveExtendedAndSupervisorState(a1, a2, retaddr);
}
