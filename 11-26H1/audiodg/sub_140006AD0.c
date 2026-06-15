/*
 * XREFs of sub_140006AD0 @ 0x140006AD0
 * Callers:
 *     sub_14000589C @ 0x14000589C (sub_14000589C.c)
 *     sub_140048068 @ 0x140048068 (sub_140048068.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 * Callees:
 *     sub_140006AFC @ 0x140006AFC (sub_140006AFC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140006AD0(__int64 a1)
{
  sub_140006AFC();
  j_j__o_free(a1, 64LL);
  return a1;
}
