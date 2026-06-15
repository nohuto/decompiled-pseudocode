/*
 * XREFs of sub_140016F3C @ 0x140016F3C
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_14001AF44 @ 0x14001AF44 (sub_14001AF44.c)
 *     sub_14001CF9C @ 0x14001CF9C (sub_14001CF9C.c)
 *     sub_1400B3534 @ 0x1400B3534 (sub_1400B3534.c)
 * Callees:
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 */

__int64 __fastcall sub_140016F3C(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_140017850(result);
  }
  return result;
}
