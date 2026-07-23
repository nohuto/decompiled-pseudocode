/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x140508024
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KiSaveExtendedAndSupervisorState @ 0x1403D7100 (KiSaveExtendedAndSupervisorState.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return KiSaveExtendedAndSupervisorState(a1, a2, retaddr);
}
