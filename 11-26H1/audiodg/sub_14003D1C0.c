/*
 * XREFs of sub_14003D1C0 @ 0x14003D1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003D1C0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    return sub_1400B6010(v1);
  else
    return 2147500033LL;
}
