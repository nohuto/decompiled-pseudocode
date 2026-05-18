/*
 * XREFs of sub_1800841FC @ 0x1800841FC
 * Callers:
 *     sub_180050F30 @ 0x180050F30 (sub_180050F30.c)
 *     sub_180084230 @ 0x180084230 (sub_180084230.c)
 *     sub_1800C9FCC @ 0x1800C9FCC (sub_1800C9FCC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800841FC(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010EC8(v2);
  return sub_180027BC8((__int64)a1);
}
