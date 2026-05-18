/*
 * XREFs of sub_180093840 @ 0x180093840
 * Callers:
 *     sub_180084328 @ 0x180084328 (sub_180084328.c)
 *     sub_180084360 @ 0x180084360 (sub_180084360.c)
 *     sub_1800CC330 @ 0x1800CC330 (sub_1800CC330.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180093840(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 )
    sub_180010F00(v2);
  return sub_180027BC8((__int64)a1);
}
