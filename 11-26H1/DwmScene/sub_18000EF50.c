/*
 * XREFs of sub_18000EF50 @ 0x18000EF50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 */

void *sub_18000EF50()
{
  if ( !byte_1801C846C )
  {
    sub_18000F300((LPCWSTR)sub_180010070);
    byte_1801C846C = 1;
  }
  return &unk_1801C8490;
}
