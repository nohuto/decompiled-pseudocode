/*
 * XREFs of sub_18006ACC0 @ 0x18006ACC0
 * Callers:
 *     sub_180050E50 @ 0x180050E50 (sub_180050E50.c)
 *     sub_18006AD40 @ 0x18006AD40 (sub_18006AD40.c)
 *     sub_1800CACD0 @ 0x1800CACD0 (sub_1800CACD0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18006ACC0(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010EC8(v2);
  return sub_180027BC8((__int64)a1);
}
