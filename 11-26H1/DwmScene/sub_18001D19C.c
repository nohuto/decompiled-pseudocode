/*
 * XREFs of sub_18001D19C @ 0x18001D19C
 * Callers:
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_18001D19C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = sub_18001D260(a2, *a4);
  *(_QWORD *)(v5 + 32) = 0LL;
  return result;
}
