/*
 * XREFs of sub_180052DB0 @ 0x180052DB0
 * Callers:
 *     sub_180050958 @ 0x180050958 (sub_180050958.c)
 *     sub_1800BA560 @ 0x1800BA560 (sub_1800BA560.c)
 * Callees:
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 */

__int64 __fastcall sub_180052DB0(__int64 a1)
{
  __int64 result; // rax

  sub_180028CF4((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::DeviceTexture::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  sub_1800143C0(a1 + 120);
  result = a1;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  return result;
}
