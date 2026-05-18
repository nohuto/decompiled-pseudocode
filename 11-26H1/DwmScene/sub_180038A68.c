/*
 * XREFs of sub_180038A68 @ 0x180038A68
 * Callers:
 *     sub_180038B00 @ 0x180038B00 (sub_180038B00.c)
 *     sub_1800C53AC @ 0x1800C53AC (sub_1800C53AC.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_180038E70 @ 0x180038E70 (sub_180038E70.c)
 */

__int64 __fastcall sub_180038A68(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_180038E70();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 )
    sub_180010F00(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
    sub_180010F00(v3);
  sub_180038A48(a1 + 12);
  return sub_180027BC8((__int64)a1);
}
