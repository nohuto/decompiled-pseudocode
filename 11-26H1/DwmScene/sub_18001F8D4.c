/*
 * XREFs of sub_18001F8D4 @ 0x18001F8D4
 * Callers:
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001F420 @ 0x18001F420 (sub_18001F420.c)
 *     sub_1800307B8 @ 0x1800307B8 (sub_1800307B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F8D4(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = *(_OWORD *)a2;
  a1[1] = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
