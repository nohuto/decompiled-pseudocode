/*
 * XREFs of sub_180075A5C @ 0x180075A5C
 * Callers:
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_180075A5C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800129D0(v2 + 32);
  return sub_1800313A0(a1);
}
