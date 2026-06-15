/*
 * XREFs of sub_14003DBAC @ 0x14003DBAC
 * Callers:
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003DBAC(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    sub_1400B6010(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
