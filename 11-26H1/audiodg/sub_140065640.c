/*
 * XREFs of sub_140065640 @ 0x140065640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140065640(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 48);
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
