/*
 * XREFs of sub_180050870 @ 0x180050870
 * Callers:
 *     sub_180051790 @ 0x180051790 (sub_180051790.c)
 * Callees:
 *     sub_1800842E8 @ 0x1800842E8 (sub_1800842E8.c)
 */

__int64 __fastcall sub_180050870(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800842E8();
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  return result;
}
