/*
 * XREFs of sub_180087E28 @ 0x180087E28
 * Callers:
 *     sub_180087EA0 @ 0x180087EA0 (sub_180087EA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001BD20 @ 0x18001BD20 (sub_18001BD20.c)
 */

void **__fastcall sub_180087E28(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  sub_18001BD20((__int64)(a1 + 14));
  v2 = a1[13];
  if ( v2 )
    sub_180010EC8(v2);
  return sub_180041EB4(a1);
}
