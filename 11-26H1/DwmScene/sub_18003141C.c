/*
 * XREFs of sub_18003141C @ 0x18003141C
 * Callers:
 *     sub_18002D874 @ 0x18002D874 (sub_18002D874.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_18003141C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800129D0(v1);
  return result;
}
