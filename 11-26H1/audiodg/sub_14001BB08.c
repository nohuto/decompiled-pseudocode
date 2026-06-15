/*
 * XREFs of sub_14001BB08 @ 0x14001BB08
 * Callers:
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 * Callees:
 *     sub_14001C2E4 @ 0x14001C2E4 (sub_14001C2E4.c)
 *     sub_14001C364 @ 0x14001C364 (sub_14001C364.c)
 */

__int64 __fastcall sub_14001BB08(__int64 a1)
{
  __int64 result; // rax

  sub_14001C364();
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = off_1400B9268;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 8) = off_1400B9228;
  *(_QWORD *)(a1 + 16) = off_1400B9300;
  *(_QWORD *)(a1 + 24) = off_1400B9248;
  sub_14001C2E4(a1 + 80);
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  return result;
}
