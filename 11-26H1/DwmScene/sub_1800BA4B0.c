/*
 * XREFs of sub_1800BA4B0 @ 0x1800BA4B0
 * Callers:
 *     sub_1800BEB00 @ 0x1800BEB00 (sub_1800BEB00.c)
 * Callees:
 *     sub_1800841B8 @ 0x1800841B8 (sub_1800841B8.c)
 */

__int64 __fastcall sub_1800BA4B0(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800841B8(a1);
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
