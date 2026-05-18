/*
 * XREFs of sub_1800BA054 @ 0x1800BA054
 * Callers:
 *     sub_1800BE240 @ 0x1800BE240 (sub_1800BE240.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

void **__fastcall sub_1800BA054(__int64 a1)
{
  void **result; // rax

  sub_180028D1C(a1);
  result = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  return result;
}
