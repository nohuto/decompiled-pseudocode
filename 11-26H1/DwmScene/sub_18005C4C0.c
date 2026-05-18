/*
 * XREFs of sub_18005C4C0 @ 0x18005C4C0
 * Callers:
 *     sub_18005C418 @ 0x18005C418 (sub_18005C418.c)
 *     sub_18005E3D0 @ 0x18005E3D0 (sub_18005E3D0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18005C4C0(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)a2[5];
  if ( v2 )
    sub_180010F00(v2);
  return sub_18000E26C(a2, 0x30uLL);
}
