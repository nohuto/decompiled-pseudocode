/*
 * XREFs of sub_14007F1E0 @ 0x14007F1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14007F1E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( a3 == -1 )
    sub_14007E8FC((RTL_SRWLOCK *)&byte_1400E7528, a1, a2);
  else
    sub_14007E828((__int64)&byte_1400E7528, a1, a2, a3);
}
