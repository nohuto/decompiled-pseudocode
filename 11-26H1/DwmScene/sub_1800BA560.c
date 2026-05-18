/*
 * XREFs of sub_1800BA560 @ 0x1800BA560
 * Callers:
 *     sub_1800BE420 @ 0x1800BE420 (sub_1800BE420.c)
 * Callees:
 *     sub_180052DB0 @ 0x180052DB0 (sub_180052DB0.c)
 */

__int64 __fastcall sub_1800BA560(__int64 a1)
{
  __int64 result; // rax

  sub_180052DB0(a1);
  *(_BYTE *)(a1 + 192) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  result = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  return result;
}
