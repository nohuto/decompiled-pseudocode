/*
 * XREFs of sub_180027B84 @ 0x180027B84
 * Callers:
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_1800C1A7C @ 0x1800C1A7C (sub_1800C1A7C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180027B84(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  v2 = a1[15];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[13];
  if ( v3 )
    sub_180010EC8(v3);
  return sub_180027BC8(a1);
}
