/*
 * XREFs of sub_18003F324 @ 0x18003F324
 * Callers:
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 * Callees:
 *     sub_18003F398 @ 0x18003F398 (sub_18003F398.c)
 */

__int64 __fastcall sub_18003F324(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18003F398(v2 + 32);
  return sub_18003F1F0(a1);
}
