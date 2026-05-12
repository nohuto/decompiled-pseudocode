/*
 * XREFs of sub_1400D94E0 @ 0x1400D94E0
 * Callers:
 *     sub_1400D1760 @ 0x1400D1760 (sub_1400D1760.c)
 *     sub_1400F3180 @ 0x1400F3180 (sub_1400F3180.c)
 * Callees:
 *     sub_1400C9458 @ 0x1400C9458 (sub_1400C9458.c)
 */

bool __fastcall sub_1400D94E0(__int64 a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
  {
    if ( sub_1400C9458(a1, *(_QWORD *)(a1 + 728) + 192 * i) )
      return 1;
  }
  return sub_1400C9458(a1, *(_QWORD *)(a1 + 712));
}
