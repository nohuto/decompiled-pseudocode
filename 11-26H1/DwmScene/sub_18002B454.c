/*
 * XREFs of sub_18002B454 @ 0x18002B454
 * Callers:
 *     sub_18002B48C @ 0x18002B48C (sub_18002B48C.c)
 *     sub_18002B720 @ 0x18002B720 (sub_18002B720.c)
 *     unknown_libname_18 @ 0x1800D93E2 (unknown_libname_18.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18002B454(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = (volatile signed __int32 *)a1[9];
  if ( v2 )
    sub_180010F00(v2);
  return sub_180025B90((__int64)(a1 + 1));
}
