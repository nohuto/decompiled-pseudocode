/*
 * XREFs of sub_18006BAD8 @ 0x18006BAD8
 * Callers:
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 *     sub_1800D3E58 @ 0x1800D3E58 (sub_1800D3E58.c)
 * Callees:
 *     sub_18003EE44 @ 0x18003EE44 (sub_18003EE44.c)
 */

__int64 __fastcall sub_18006BAD8(_DWORD *a1)
{
  __int64 v1; // rcx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  sub_18003EE44(a1, v3);
  return v1;
}
