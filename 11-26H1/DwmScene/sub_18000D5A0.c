/*
 * XREFs of sub_18000D5A0 @ 0x18000D5A0
 * Callers:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 * Callees:
 *     <none>
 */

int sub_18000D5A0()
{
  if ( qword_1801C8398 )
    return qword_1801C8398(&unk_1801C8358);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
