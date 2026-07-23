/*
 * XREFs of MmQueryPfnList @ 0x140A5CB60
 * Callers:
 *     PfpPfnPrioRequest @ 0x140A5C74C (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1402D2DA0 (MiIdentifyPfnWrapper.c)
 */

__int64 __fastcall MmQueryPfnList(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 24 * a1;
  for ( i = a2; i < v2; i += 24LL )
  {
    MiIdentifyPfnWrapper(48LL * *(_QWORD *)(i + 8) - 0x220000000000LL, 0LL, (_QWORD *)i);
    if ( (*(_BYTE *)(i + 16) & 2) != 0 )
      return 3221225712LL;
  }
  return 0LL;
}
