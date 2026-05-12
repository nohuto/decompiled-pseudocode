/*
 * XREFs of RaidpIsPerProcessorCompletionsFlushSet @ 0x14000EC70
 * Callers:
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidAdapterIrpComplete @ 0x140062C18 (RaidAdapterIrpComplete.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidpIsPerProcessorCompletionsFlushSet(unsigned __int16 *a1)
{
  return *((_DWORD *)g_RaidPerProcessorState + 2048 * (unsigned __int64)*a1 + 32 * *((unsigned __int8 *)a1 + 2) + 24) == 2;
}
