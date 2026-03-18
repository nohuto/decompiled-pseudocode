/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180179710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(__int64 a1, __int64 a2, __int64 a3)
{
  return CInteractionProcessor::GetInteractionContext(a1 + 24, a2, a3);
}
