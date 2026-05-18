/*
 * XREFs of sub_1800BA0EC @ 0x1800BA0EC
 * Callers:
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

__int64 __fastcall sub_1800BA0EC(_QWORD *a1)
{
  __int64 result; // rax

  sub_180028D1C((__int64)a1);
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  result = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return result;
}
