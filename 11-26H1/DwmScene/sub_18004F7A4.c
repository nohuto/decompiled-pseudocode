/*
 * XREFs of sub_18004F7A4 @ 0x18004F7A4
 * Callers:
 *     sub_18004FB00 @ 0x18004FB00 (sub_18004FB00.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001E844 @ 0x18001E844 (sub_18001E844.c)
 */

void **__fastcall sub_18004F7A4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::LightProbe::`vftable';
  v2 = a1[65];
  if ( v2 )
    sub_180010EC8(v2);
  sub_18001E844((__int64)(a1 + 59));
  v3 = a1[57];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[55];
  if ( v4 )
    sub_180010EC8(v4);
  return sub_180041EB4(a1);
}
