/*
 * XREFs of sub_1800964BC @ 0x1800964BC
 * Callers:
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_1800964BC(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = &Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = a1[4];
  if ( v3 )
    result = (void **)sub_180010EC8(v3);
  v4 = a1[2];
  if ( v4 )
    return (void **)sub_180010EC8(v4);
  return result;
}
