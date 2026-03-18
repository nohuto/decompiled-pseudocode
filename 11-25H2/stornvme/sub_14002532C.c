/*
 * XREFs of sub_14002532C @ 0x14002532C
 * Callers:
 *     sub_140027B40 @ 0x140027B40 (sub_140027B40.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 */

__int64 __fastcall sub_14002532C(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  sub_14000B900(a2, &v5);
  v5 = 0LL;
  sub_140006100(a1, 0x10u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
