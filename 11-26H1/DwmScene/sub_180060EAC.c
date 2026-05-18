/*
 * XREFs of sub_180060EAC @ 0x180060EAC
 * Callers:
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 * Callees:
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 */

__int64 __fastcall sub_180060EAC(__int64 *a1, _DWORD *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18005FFB4(a1, (__int64)v3, a2) + 40LL;
}
