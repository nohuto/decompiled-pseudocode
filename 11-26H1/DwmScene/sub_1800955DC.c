/*
 * XREFs of sub_1800955DC @ 0x1800955DC
 * Callers:
 *     sub_180095630 @ 0x180095630 (sub_180095630.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE56B @ 0x1800DE56B (sub_1800DE56B.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_1800955DC(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::ShaderState::`vftable';
  *a1 = &Spectre::Engine::ShaderState::`vftable';
  v3 = a1[6];
  if ( v3 )
    result = (void **)sub_180010EC8(v3);
  v4 = a1[4];
  if ( v4 )
    result = (void **)sub_180010EC8(v4);
  v5 = a1[2];
  if ( v5 )
    return (void **)sub_180010EC8(v5);
  return result;
}
