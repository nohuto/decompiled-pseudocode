/*
 * XREFs of sub_1800965F8 @ 0x1800965F8
 * Callers:
 *     sub_180096650 @ 0x180096650 (sub_180096650.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE5DE @ 0x1800DE5DE (sub_1800DE5DE.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_1800965F8(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::IndexBufferState::`vftable';
  *a1 = &Spectre::Engine::IndexBufferState::`vftable';
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
