/*
 * XREFs of sub_18004193C @ 0x18004193C
 * Callers:
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_18004193C(__int64 a1)
{
  __int64 result; // rax

  result = 0x333333333333333LL;
  if ( *(_QWORD *)(a1 + 8) == 0x333333333333333LL )
    sub_18001DF68();
  return result;
}
