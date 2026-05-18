/*
 * XREFs of sub_1800CD480 @ 0x1800CD480
 * Callers:
 *     sub_1800CCE00 @ 0x1800CCE00 (sub_1800CCE00.c)
 * Callees:
 *     sub_18004F1EC @ 0x18004F1EC (sub_18004F1EC.c)
 */

__int64 __fastcall sub_1800CD480(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 136) = 3;
  sub_18004F1EC((_QWORD *)(a1 + 104));
  sub_18004F1EC((_QWORD *)(a1 + 120));
  result = 0LL;
  *(_QWORD *)&v3 = 0LL;
  *(_DWORD *)((char *)&v3 + 9) = 0;
  *(_WORD *)((char *)&v3 + 13) = 0;
  HIBYTE(v3) = 0;
  BYTE8(v3) = 1;
  *(_OWORD *)(a1 + 144) = v3;
  return result;
}
