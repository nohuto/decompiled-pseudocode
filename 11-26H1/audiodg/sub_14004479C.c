/*
 * XREFs of sub_14004479C @ 0x14004479C
 * Callers:
 *     sub_1400446B0 @ 0x1400446B0 (sub_1400446B0.c)
 *     sub_140095A54 @ 0x140095A54 (sub_140095A54.c)
 * Callees:
 *     sub_14002C564 @ 0x14002C564 (sub_14002C564.c)
 */

__int64 __fastcall sub_14004479C(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_14002C564(a1 + 12);
  result = a1;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
