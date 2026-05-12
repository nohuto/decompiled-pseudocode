/*
 * XREFs of sub_1400E91B4 @ 0x1400E91B4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400CB21C @ 0x1400CB21C (sub_1400CB21C.c)
 *     sub_1401305DC @ 0x1401305DC (sub_1401305DC.c)
 * Callees:
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 */

char __fastcall sub_1400E91B4(__int64 a1, char a2, int a3)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
    sub_1400E74D0(*(_QWORD *)(a1 + 728) + 192 * i, a2, a3);
  return sub_1400E74D0(*(_QWORD *)(a1 + 712), a2, a3);
}
