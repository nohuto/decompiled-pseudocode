/*
 * XREFs of sub_14007F060 @ 0x14007F060
 * Callers:
 *     sub_140048218 @ 0x140048218 (sub_140048218.c)
 * Callees:
 *     sub_14007EFCC @ 0x14007EFCC (sub_14007EFCC.c)
 */

void __fastcall sub_14007F060(__int64 a1)
{
  if ( a1 )
  {
    if ( qword_1400E7540 )
      sub_14007EFCC(qword_1400E7540 + 200, (RTL_SRWLOCK *)qword_1400E7540, a1);
  }
}
