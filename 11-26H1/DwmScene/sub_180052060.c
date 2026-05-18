/*
 * XREFs of sub_180052060 @ 0x180052060
 * Callers:
 *     sub_180050F80 @ 0x180050F80 (sub_180050F80.c)
 *     sub_180052150 @ 0x180052150 (sub_180052150.c)
 *     sub_1800C9CC4 @ 0x1800C9CC4 (sub_1800C9CC4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180052060(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
    sub_180010F00(v2);
  v3 = a1[13];
  if ( v3 )
    sub_180010EC8(v3);
  return sub_180027BC8((__int64)a1);
}
