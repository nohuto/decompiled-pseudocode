/*
 * XREFs of sub_180085238 @ 0x180085238
 * Callers:
 *     sub_180085298 @ 0x180085298 (sub_180085298.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180085238(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
