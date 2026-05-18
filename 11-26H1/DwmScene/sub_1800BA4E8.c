/*
 * XREFs of sub_1800BA4E8 @ 0x1800BA4E8
 * Callers:
 *     sub_1800BEC40 @ 0x1800BEC40 (sub_1800BEC40.c)
 * Callees:
 *     sub_180028CF4 @ 0x180028CF4 (sub_180028CF4.c)
 */

void **__fastcall sub_1800BA4E8(_QWORD *a1)
{
  void **result; // rax

  sub_180028CF4(a1);
  result = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[16] = 0LL;
  return result;
}
