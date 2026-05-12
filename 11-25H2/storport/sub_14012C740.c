/*
 * XREFs of sub_14012C740 @ 0x14012C740
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 */

void __fastcall sub_14012C740(__int64 a1, unsigned int a2)
{
  if ( sub_1400F7308(a1) )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 0;
    PoFxCompleteIdleCondition(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), a2);
    sub_1400F7368(a1);
  }
}
