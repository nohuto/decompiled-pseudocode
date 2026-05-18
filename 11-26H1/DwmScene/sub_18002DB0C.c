/*
 * XREFs of sub_18002DB0C @ 0x18002DB0C
 * Callers:
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 */

void **__fastcall sub_18002DB0C(__int64 a1)
{
  _QWORD *v2; // rax
  void **result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800181BC(v4, (__int64)&unk_1801CD378);
  sub_18005C940(a1, v2);
  result = &Spectre::Engine::SymbolShaderExtension::`vftable';
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
