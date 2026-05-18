/*
 * XREFs of sub_180082C20 @ 0x180082C20
 * Callers:
 *     sub_1800508D4 @ 0x1800508D4 (sub_1800508D4.c)
 *     sub_1800BA1F4 @ 0x1800BA1F4 (sub_1800BA1F4.c)
 * Callees:
 *     sub_1800840AC @ 0x1800840AC (sub_1800840AC.c)
 */

_QWORD *__fastcall sub_180082C20(_QWORD *a1)
{
  sub_1800840AC(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
