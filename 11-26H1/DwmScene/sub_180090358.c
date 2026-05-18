/*
 * XREFs of sub_180090358 @ 0x180090358
 * Callers:
 *     sub_180090114 @ 0x180090114 (sub_180090114.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18007B494 @ 0x18007B494 (sub_18007B494.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180090358(__int64 a1, __int64 a2, __int64 a3)
{
  sub_1800181BC((_QWORD *)a2, a3);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 32);
  return sub_18007B494((__int64 *)(a2 + 40), (void **)(a3 + 40));
}
