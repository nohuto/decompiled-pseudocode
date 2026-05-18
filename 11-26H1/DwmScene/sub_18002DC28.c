/*
 * XREFs of sub_18002DC28 @ 0x18002DC28
 * Callers:
 *     sub_180030470 @ 0x180030470 (sub_180030470.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800905CC @ 0x1800905CC (sub_1800905CC.c)
 */

void **__fastcall sub_18002DC28(_QWORD *a1)
{
  _QWORD *v2; // rax
  void **result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800181BC(v4, (__int64)&unk_1801CD4D8);
  sub_1800905CC(a1, v2);
  result = &Spectre::Engine::UnlitShaderExtension::`vftable';
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return result;
}
