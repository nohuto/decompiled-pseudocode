/*
 * XREFs of sub_180082690 @ 0x180082690
 * Callers:
 *     sub_180050990 @ 0x180050990 (sub_180050990.c)
 *     sub_1800BA5B8 @ 0x1800BA5B8 (sub_1800BA5B8.c)
 * Callees:
 *     sub_1800840AC @ 0x1800840AC (sub_1800840AC.c)
 */

_QWORD *__fastcall sub_180082690(_QWORD *a1)
{
  sub_1800840AC(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
