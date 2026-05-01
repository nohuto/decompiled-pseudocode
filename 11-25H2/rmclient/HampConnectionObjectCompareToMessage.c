/*
 * XREFs of HampConnectionObjectCompareToMessage @ 0x18000BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCompareToMessage(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 48);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
