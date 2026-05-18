/*
 * XREFs of sub_18005CC70 @ 0x18005CC70
 * Callers:
 *     sub_18005C1B8 @ 0x18005C1B8 (sub_18005C1B8.c)
 * Callees:
 *     sub_180032460 @ 0x180032460 (sub_180032460.c)
 */

__int64 __fastcall sub_18005CC70(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180032460(v2 + 16);
  return sub_18003137C(a1);
}
