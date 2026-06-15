/*
 * XREFs of sub_14002678C @ 0x14002678C
 * Callers:
 *     sub_140003E20 @ 0x140003E20 (sub_140003E20.c)
 *     sub_140028A40 @ 0x140028A40 (sub_140028A40.c)
 *     sub_140028BA0 @ 0x140028BA0 (sub_140028BA0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002678C(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v2 = *a1;
  if ( v2 )
    sub_1400B6010(v2);
  return 0LL;
}
