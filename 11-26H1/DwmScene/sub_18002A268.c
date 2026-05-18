/*
 * XREFs of sub_18002A268 @ 0x18002A268
 * Callers:
 *     sub_18002AC48 @ 0x18002AC48 (sub_18002AC48.c)
 * Callees:
 *     sub_18009820C @ 0x18009820C (sub_18009820C.c)
 */

__int64 __fastcall sub_18002A268(__int64 a1)
{
  __int64 result; // rax

  result = sub_18009820C();
  *(_WORD *)(a1 + 184) = 257;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
