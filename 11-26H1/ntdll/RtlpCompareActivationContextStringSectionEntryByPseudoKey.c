/*
 * XREFs of RtlpCompareActivationContextStringSectionEntryByPseudoKey @ 0x1800BF6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCompareActivationContextStringSectionEntryByPseudoKey(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
