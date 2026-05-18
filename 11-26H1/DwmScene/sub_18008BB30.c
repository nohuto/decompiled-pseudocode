/*
 * XREFs of sub_18008BB30 @ 0x18008BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008BB30(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 1896) = 0;
  return result;
}
