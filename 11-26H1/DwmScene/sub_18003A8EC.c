/*
 * XREFs of sub_18003A8EC @ 0x18003A8EC
 * Callers:
 *     sub_1800DA558 @ 0x1800DA558 (sub_1800DA558.c)
 *     sub_1800DA58E @ 0x1800DA58E (sub_1800DA58E.c)
 * Callees:
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 */

__int64 __fastcall sub_18003A8EC(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = sub_180032460(i);
  return result;
}
