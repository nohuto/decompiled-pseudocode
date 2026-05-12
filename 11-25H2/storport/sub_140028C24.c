/*
 * XREFs of sub_140028C24 @ 0x140028C24
 * Callers:
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140059080 @ 0x140059080 (sub_140059080.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_140028CA8 @ 0x140028CA8 (sub_140028CA8.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 */

void __fastcall sub_140028C24(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // bl

  if ( a2 )
    sub_14000D760(a1 - 720, 0);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  LOBYTE(v5) = 1;
  v6 = v4;
  sub_140028D00(a1, v5);
  sub_140028CA8(a1, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
}
