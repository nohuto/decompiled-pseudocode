/*
 * XREFs of sub_18002DA34 @ 0x18002DA34
 * Callers:
 *     sub_18002FF78 @ 0x18002FF78 (sub_18002FF78.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 */

void **__fastcall sub_18002DA34(_QWORD *a1)
{
  _QWORD *v2; // rax
  void **result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_1800181BC(v4, (__int64)&unk_1801CD478);
  sub_18005C940(a1, v2);
  result = &Spectre::Engine::FontShaderExtension::`vftable';
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return result;
}
