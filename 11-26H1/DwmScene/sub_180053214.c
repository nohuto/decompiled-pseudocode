/*
 * XREFs of sub_180053214 @ 0x180053214
 * Callers:
 *     sub_180050FD0 @ 0x180050FD0 (sub_180050FD0.c)
 *     sub_1800C2A6C @ 0x1800C2A6C (sub_1800C2A6C.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800531D0 @ 0x1800531D0 (sub_1800531D0.c)
 */

__int64 __fastcall sub_180053214(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceTexture::`vftable';
  sub_1800129D0((__int64)(a1 + 15));
  sub_1800531D0(a1 + 14);
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
    sub_180010F00(v2);
  return sub_180027BC8((__int64)a1);
}
