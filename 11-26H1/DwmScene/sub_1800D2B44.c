/*
 * XREFs of sub_1800D2B44 @ 0x1800D2B44
 * Callers:
 *     sub_1800D2CF0 @ 0x1800D2CF0 (sub_1800D2CF0.c)
 * Callees:
 *     sub_1800D2A48 @ 0x1800D2A48 (sub_1800D2A48.c)
 *     sub_1800D2A78 @ 0x1800D2A78 (sub_1800D2A78.c)
 */

__int64 __fastcall sub_1800D2B44(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  sub_1800D2A48((void **)(a1 + 240));
  sub_1800D2A78((void **)(a1 + 144));
  return sub_1800D0658(a1);
}
