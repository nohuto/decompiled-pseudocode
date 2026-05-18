/*
 * XREFs of sub_1800273E4 @ 0x1800273E4
 * Callers:
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 *     sub_18005FD88 @ 0x18005FD88 (sub_18005FD88.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_1800273E4(__int64 a1)
{
  __int64 result; // rax

  result = 0x3FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    sub_18001DF68();
  return result;
}
