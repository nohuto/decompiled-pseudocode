/*
 * XREFs of sub_1800547F0 @ 0x1800547F0
 * Callers:
 *     sub_180054798 @ 0x180054798 (sub_180054798.c)
 *     sub_180055BDC @ 0x180055BDC (sub_180055BDC.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_1800547F0(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010F00(v2);
  return sub_18000E26C(a2, 0x48uLL);
}
