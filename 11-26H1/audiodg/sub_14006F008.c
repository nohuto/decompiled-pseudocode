/*
 * XREFs of sub_14006F008 @ 0x14006F008
 * Callers:
 *     sub_14006F504 @ 0x14006F504 (sub_14006F504.c)
 *     sub_14006F638 @ 0x14006F638 (sub_14006F638.c)
 * Callees:
 *     sub_140037EE8 @ 0x140037EE8 (sub_140037EE8.c)
 */

__int64 __fastcall sub_14006F008(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_BYTE *)(a1 + 200) = 0;
  sub_140037EE8(a1);
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)a1 = off_1400BCB88;
  *(_QWORD *)(a1 + 8) = off_1400BC950;
  *(_QWORD *)(a1 + 16) = off_1400BCC68;
  *(_QWORD *)(a1 + 24) = off_1400BCB68;
  result = a1;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  return result;
}
