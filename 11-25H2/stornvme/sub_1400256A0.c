/*
 * XREFs of sub_1400256A0 @ 0x1400256A0
 * Callers:
 *     sub_140027B40 @ 0x140027B40 (sub_140027B40.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_1400256A0(__int64 a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_14000B900(a2, v5);
  v5[0] = 0LL;
  sub_140006100(a1, 8u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
