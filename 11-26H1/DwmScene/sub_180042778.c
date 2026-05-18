/*
 * XREFs of sub_180042778 @ 0x180042778
 * Callers:
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_180042778(__int64 a1, __int64 a2, __int64 a3, _WORD **a4)
{
  _WORD *result; // rax

  result = *a4;
  *(_WORD *)a2 = **a4;
  *(_DWORD *)(a2 + 4) = 0;
  return result;
}
