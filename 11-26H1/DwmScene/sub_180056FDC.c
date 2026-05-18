/*
 * XREFs of sub_180056FDC @ 0x180056FDC
 * Callers:
 *     sub_18005664C @ 0x18005664C (sub_18005664C.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_180056FDC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800129D0(v2 + 40);
  return sub_18002B2F8(a1);
}
