/*
 * XREFs of sub_180050EA0 @ 0x180050EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800840DC @ 0x1800840DC (sub_1800840DC.c)
 */

_QWORD *__fastcall sub_180050EA0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  sub_1800840DC();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
