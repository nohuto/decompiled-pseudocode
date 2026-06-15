/*
 * XREFs of sub_14007F220 @ 0x14007F220
 * Callers:
 *     <none>
 * Callees:
 *     sub_14007EFCC @ 0x14007EFCC (sub_14007EFCC.c)
 */

void __fastcall sub_14007F220(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  void *v2; // rcx

  if ( (a1 & 0x80000000) != 0 )
  {
    if ( !byte_1400E7528 )
      return;
    v1 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
    v2 = &unk_1400E75C0;
  }
  else
  {
    if ( !byte_1400E7528 )
      return;
    v1 = a1;
    v2 = &unk_1400E7570;
  }
  sub_14007EFCC((__int64)v2, (RTL_SRWLOCK *)&unk_1400E7548, v1);
}
