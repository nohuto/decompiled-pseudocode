/*
 * XREFs of sub_180090744 @ 0x180090744
 * Callers:
 *     sub_180076598 @ 0x180076598 (sub_180076598.c)
 *     sub_180079250 @ 0x180079250 (sub_180079250.c)
 *     sub_180090870 @ 0x180090870 (sub_180090870.c)
 *     unknown_libname_54 @ 0x1800DCE25 (unknown_libname_54.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 */

__int64 __fastcall sub_180090744(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  v2 = a1[16];
  if ( v2 )
  {
    sub_18002DD68(v2, a1[17]);
    sub_18000E26C((void *)a1[16], (a1[18] - a1[16]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[16] = 0LL;
    a1[17] = 0LL;
    a1[18] = 0LL;
  }
  return sub_18005CDF8(a1);
}
