/*
 * XREFs of sub_14004CF78 @ 0x14004CF78
 * Callers:
 *     sub_14004CD00 @ 0x14004CD00 (sub_14004CD00.c)
 *     sub_14004E30C @ 0x14004E30C (sub_14004E30C.c)
 *     sub_140077E38 @ 0x140077E38 (sub_140077E38.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 * Callees:
 *     sub_14001D6A8 @ 0x14001D6A8 (sub_14001D6A8.c)
 */

BOOL __fastcall sub_14004CF78(__int64 a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = sub_14001D6A8(v2);
  if ( *(_QWORD *)a1 )
    return sub_14001D6A8(*(void **)a1);
  return result;
}
