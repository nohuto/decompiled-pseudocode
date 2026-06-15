/*
 * XREFs of sub_1400484A8 @ 0x1400484A8
 * Callers:
 *     sub_14004392C @ 0x14004392C (sub_14004392C.c)
 *     sub_14006B300 @ 0x14006B300 (sub_14006B300.c)
 *     sub_1400B2DF3 @ 0x1400B2DF3 (sub_1400B2DF3.c)
 *     sub_1400B2E29 @ 0x1400B2E29 (sub_1400B2E29.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 */

__int64 __fastcall sub_1400484A8(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 8);
    v2 = **(_QWORD **)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return sub_1400031E4(v2);
  }
  return result;
}
