/*
 * XREFs of PerfSelectionFeedback @ 0x14000C620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionFeedback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 568);
  *(_DWORD *)(a3 + 20) = result;
  return result;
}
