/*
 * XREFs of sub_140028694 @ 0x140028694
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_140046698 @ 0x140046698 (sub_140046698.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140028694(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    sub_14004639C(2147500037LL, a2);
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 + 16;
}
