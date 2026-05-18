/*
 * XREFs of sub_18005CDF8 @ 0x18005CDF8
 * Callers:
 *     sub_18005D020 @ 0x18005D020 (sub_18005D020.c)
 *     sub_180078090 @ 0x180078090 (sub_180078090.c)
 *     sub_180078B90 @ 0x180078B90 (sub_180078B90.c)
 *     sub_180078F30 @ 0x180078F30 (sub_180078F30.c)
 *     sub_180079548 @ 0x180079548 (sub_180079548.c)
 *     sub_180090744 @ 0x180090744 (sub_180090744.c)
 *     unknown_libname_61 @ 0x1800DD2D0 (unknown_libname_61.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_18005CDF8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_1800129D0((__int64)(a1 + 9));
  v2 = a1[8];
  if ( v2 )
    sub_180010EC8(v2);
  result = sub_1800129D0((__int64)(a1 + 3));
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
    return sub_180010F00(v4);
  return result;
}
