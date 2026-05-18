/*
 * XREFs of sub_18008A4E4 @ 0x18008A4E4
 * Callers:
 *     sub_18008A5A0 @ 0x18008A5A0 (sub_18008A5A0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

void **__fastcall sub_18008A4E4(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = a1[224];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[222];
  if ( v4 )
    sub_180010EC8(v4);
  return sub_1800570E0((__int64)a1, a2);
}
