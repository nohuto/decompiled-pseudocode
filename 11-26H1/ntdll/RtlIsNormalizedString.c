/*
 * XREFs of RtlIsNormalizedString @ 0x1800AF240
 * Callers:
 *     <none>
 * Callees:
 *     Normalization__IsNormalized @ 0x1800ADD10 (Normalization__IsNormalized.c)
 *     RtlpGetNormalization @ 0x1800AE430 (RtlpGetNormalization.c)
 */

__int64 __fastcall RtlIsNormalizedString(unsigned int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !a1 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, a2, v5, a4);
  }
  return result;
}
