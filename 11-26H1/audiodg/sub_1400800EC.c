/*
 * XREFs of sub_1400800EC @ 0x1400800EC
 * Callers:
 *     sub_140080170 @ 0x140080170 (sub_140080170.c)
 * Callees:
 *     sub_140039C30 @ 0x140039C30 (sub_140039C30.c)
 */

HLOCAL __fastcall sub_1400800EC(__int64 a1)
{
  HLOCAL result; // rax

  result = sub_140039C30((void **)(a1 + 40));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
