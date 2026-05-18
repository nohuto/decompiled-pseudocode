/*
 * XREFs of sub_1800842E8 @ 0x1800842E8
 * Callers:
 *     sub_180050870 @ 0x180050870 (sub_180050870.c)
 *     sub_1800BA0B0 @ 0x1800BA0B0 (sub_1800BA0B0.c)
 * Callees:
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 */

__int64 __fastcall sub_1800842E8(__int64 a1)
{
  sub_180028CF4((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  return a1;
}
