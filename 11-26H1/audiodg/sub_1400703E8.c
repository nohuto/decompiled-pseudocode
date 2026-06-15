/*
 * XREFs of sub_1400703E8 @ 0x1400703E8
 * Callers:
 *     sub_1400702A0 @ 0x1400702A0 (sub_1400702A0.c)
 *     sub_140070344 @ 0x140070344 (sub_140070344.c)
 * Callees:
 *     sub_140037E4C @ 0x140037E4C (sub_140037E4C.c)
 */

__int64 __fastcall sub_1400703E8(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 256) = 0LL;
  *(_OWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_BYTE *)(a1 + 296) = 0;
  sub_140037E4C(a1);
  *(_QWORD *)(a1 + 304) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  return result;
}
