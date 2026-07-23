/*
 * XREFs of RtlpNormalizeStringWorker @ 0x14080E928
 * Callers:
 *     RtlNormalizeString @ 0x14080E8A0 (RtlNormalizeString.c)
 * Callees:
 *     Normalization__GuessCharCountBySize @ 0x14080D70C (Normalization__GuessCharCountBySize.c)
 *     Normalization__Normalize @ 0x14080DDE8 (Normalization__Normalize.c)
 */

__int64 __fastcall RtlpNormalizeStringWorker(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, int *a5)
{
  __int64 v5; // rax
  __int64 v6; // r11
  unsigned int v8; // r10d

  v5 = -1LL;
  v6 = *a5;
  *a5 = 0;
  if ( a3 == -1 )
  {
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    a3 = v5 + 1;
  }
  if ( (int)v6 > 0 && a4 )
  {
    if ( a4 < a2 + 2LL * a3 && a4 + 2 * v6 > a2 )
      return 3221225485LL;
    return (unsigned int)Normalization__Normalize(a1, a2, a3, a4, v6, a5);
  }
  else if ( a2 && a3 >= 0 )
  {
    *a5 = Normalization__GuessCharCountBySize(a1, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
