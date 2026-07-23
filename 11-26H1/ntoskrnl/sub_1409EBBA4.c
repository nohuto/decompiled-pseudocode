/*
 * XREFs of sub_1409EBBA4 @ 0x1409EBBA4
 * Callers:
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 *     sub_1409ED7B4 @ 0x1409ED7B4 (sub_1409ED7B4.c)
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 */

signed __int64 __fastcall sub_1409EBBA4(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      sub_1409EBBDC(a1);
  }
  return v1;
}
