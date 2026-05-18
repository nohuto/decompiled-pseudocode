/*
 * XREFs of sub_1800841B8 @ 0x1800841B8
 * Callers:
 *     sub_180050908 @ 0x180050908 (sub_180050908.c)
 *     sub_1800BA4B0 @ 0x1800BA4B0 (sub_1800BA4B0.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

_QWORD *__fastcall sub_1800841B8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180028D1C((__int64)a1);
  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
