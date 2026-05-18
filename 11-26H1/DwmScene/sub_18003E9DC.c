/*
 * XREFs of sub_18003E9DC @ 0x18003E9DC
 * Callers:
 *     sub_18003E6E8 @ 0x18003E6E8 (sub_18003E6E8.c)
 *     sub_18003E9A4 @ 0x18003E9A4 (sub_18003E9A4.c)
 *     sub_18004190C @ 0x18004190C (sub_18004190C.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18003E9DC(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[4];
  if ( v2 )
    sub_180010F00(v2);
  return sub_18000E26C(a2, 0x28uLL);
}
