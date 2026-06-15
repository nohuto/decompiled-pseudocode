/*
 * XREFs of sub_14008A3AC @ 0x14008A3AC
 * Callers:
 *     sub_14008A430 @ 0x14008A430 (sub_14008A430.c)
 * Callees:
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

__int64 __fastcall sub_14008A3AC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  sub_140056130((__int64 *)(a1 + 64));
  *(_DWORD *)(a1 + 60) = -1073741823;
  return sub_140089834((_QWORD *)a1, v2, v3, v4);
}
