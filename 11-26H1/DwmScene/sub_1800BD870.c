/*
 * XREFs of sub_1800BD870 @ 0x1800BD870
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C574 @ 0x18001C574 (sub_18001C574.c)
 */

__int64 __fastcall sub_1800BD870(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18001C574(*(LPVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
