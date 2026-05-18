/*
 * XREFs of sub_18005CD18 @ 0x18005CD18
 * Callers:
 *     sub_18005C4F0 @ 0x18005C4F0 (sub_18005C4F0.c)
 * Callees:
 *     sub_18005CF24 @ 0x18005CF24 (sub_18005CF24.c)
 */

__int64 __fastcall sub_18005CD18(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18005CF24(v2 + 40);
  return sub_18001D5C8(a1);
}
