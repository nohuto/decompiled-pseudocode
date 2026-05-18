/*
 * XREFs of sub_180031CF4 @ 0x180031CF4
 * Callers:
 *     sub_1800324D0 @ 0x1800324D0 (sub_1800324D0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_180031CF4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **result; // rax

  v2 = a1[4];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[2];
  if ( v3 )
    sub_180010EC8(v3);
  result = &Spectre::Engine::SceneCustomData::`vftable';
  *a1 = &Spectre::Engine::SceneCustomData::`vftable';
  return result;
}
