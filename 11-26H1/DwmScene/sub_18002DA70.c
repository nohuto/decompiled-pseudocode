/*
 * XREFs of sub_18002DA70 @ 0x18002DA70
 * Callers:
 *     sub_180030044 @ 0x180030044 (sub_180030044.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 */

void **__fastcall sub_18002DA70(__int64 a1)
{
  _QWORD *v2; // rax
  void **result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800181BC(v4, (__int64)&unk_1801CCF98);
  sub_18005C940(a1, v2);
  result = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
