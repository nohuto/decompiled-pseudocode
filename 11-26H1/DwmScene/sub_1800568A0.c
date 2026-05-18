/*
 * XREFs of sub_1800568A0 @ 0x1800568A0
 * Callers:
 *     sub_18005664C @ 0x18005664C (sub_18005664C.c)
 * Callees:
 *     sub_180056AB4 @ 0x180056AB4 (sub_180056AB4.c)
 */

__int64 __fastcall sub_1800568A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  sub_180056AB4(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return result;
}
