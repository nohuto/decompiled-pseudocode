/*
 * XREFs of sub_14004CD00 @ 0x14004CD00
 * Callers:
 *     sub_14004EC80 @ 0x14004EC80 (sub_14004EC80.c)
 * Callees:
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 *     sub_14004CDB4 @ 0x14004CDB4 (sub_14004CDB4.c)
 *     sub_14004CF78 @ 0x14004CF78 (sub_14004CF78.c)
 */

int __fastcall sub_14004CD00(__int64 a1)
{
  int result; // eax
  void *v3; // rcx

  sub_14004CDB4(a1 + 40);
  result = sub_14004CF78(a1 + 16);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    return sub_14001D6A8(v3);
  return result;
}
