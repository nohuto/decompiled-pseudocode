/*
 * XREFs of EtwpPerfectHashFunctionSearch @ 0x140441960
 * Callers:
 *     EtwpApplyStackWalkIdFilter @ 0x14044187C (EtwpApplyStackWalkIdFilter.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x14051F084 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpPerfectHashFunctionSearch(__int16 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(a2 + 2) & __ROR2__(a1, *(_BYTE *)(a2 + 1));
  while ( a1 != *(_WORD *)(a2 + 4LL * v2 + 8) )
  {
    v2 = *(unsigned __int8 *)(a2 + 4LL * v2 + 6);
    if ( v2 == 255 )
      return 0;
  }
  return 1;
}
