/*
 * XREFs of ?GetInteractionContext@CInteraction@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180178E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetInteractionContext(__int64 a1, __int64 a2, __int64 a3)
{
  return CInteractionProcessor::GetInteractionContext(a1 + 288, a2, a3);
}
