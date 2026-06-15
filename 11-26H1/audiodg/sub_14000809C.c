/*
 * XREFs of sub_14000809C @ 0x14000809C
 * Callers:
 *     sub_140007F0C @ 0x140007F0C (sub_140007F0C.c)
 *     sub_14006ED00 @ 0x14006ED00 (sub_14006ED00.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 */

__int64 __fastcall sub_14000809C(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_QWORD *)(a1 + 56) )
  {
    result = sub_14000DEF8();
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
