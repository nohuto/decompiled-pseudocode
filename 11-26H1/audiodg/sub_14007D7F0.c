/*
 * XREFs of sub_14007D7F0 @ 0x14007D7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007D7F0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    return sub_1400B6010(v1);
  else
    return 2147942414LL;
}
