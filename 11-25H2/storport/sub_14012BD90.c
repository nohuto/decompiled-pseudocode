/*
 * XREFs of sub_14012BD90 @ 0x14012BD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_140121184 @ 0x140121184 (sub_140121184.c)
 */

void __fastcall sub_14012BD90(__int64 a1)
{
  if ( sub_1400F7308(a1) )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 1;
    sub_140121184(*(_QWORD *)(a1 + 256));
    sub_1400F7368(a1);
  }
}
