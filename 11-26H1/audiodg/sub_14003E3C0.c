/*
 * XREFs of sub_14003E3C0 @ 0x14003E3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001FE30 @ 0x14001FE30 (sub_14001FE30.c)
 */

void *sub_14003E3C0()
{
  if ( !byte_1400E8410 )
  {
    sub_14001FE30((LPCWSTR)sub_14004E9C0, 0LL, (__int64)&unk_1400E8430, 64LL);
    byte_1400E8410 = 1;
  }
  return &unk_1400E8430;
}
