/*
 * XREFs of sub_14000B358 @ 0x14000B358
 * Callers:
 *     sub_14000B2CC @ 0x14000B2CC (sub_14000B2CC.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 * Callees:
 *     sub_14000C020 @ 0x14000C020 (sub_14000C020.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 */

char __fastcall sub_14000B358(__int64 a1, unsigned int a2)
{
  int v3; // eax

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 1184), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1248));
  if ( (_BYTE)v3 )
  {
    v3 = sub_14000D4EC(a1);
    if ( v3 )
      LOBYTE(v3) = sub_14000C020(a1, 0LL);
  }
  return v3;
}
