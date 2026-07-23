/*
 * XREFs of RtlpNormalizeStringWorker @ 0x1800ADF80
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlNormalizeString @ 0x1800ADEF0 (RtlNormalizeString.c)
 * Callees:
 *     Normalization__Normalize @ 0x1800AE150 (Normalization__Normalize.c)
 */

__int64 __fastcall RtlpNormalizeStringWorker(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, int *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v11; // ecx

  v6 = *a5;
  *a5 = 0;
  if ( a3 == -1 )
  {
    v7 = -1LL;
    while ( *(_WORD *)(a2 + 2 * v7++ + 2) != 0 )
      ;
    a3 = v7 + 1;
  }
  if ( (int)v6 > 0 && a4 )
  {
    if ( a4 >= a2 + 2LL * a3 || a4 + 2 * v6 <= a2 )
      return (unsigned int)Normalization__Normalize(a1, a2, a3, a4, v6, (__int64)a5);
    return 3221225485LL;
  }
  else
  {
    if ( !a2 || a3 < 0 )
      return (unsigned int)-1073741811;
    v11 = a3 + (a3 >> 3);
    if ( v11 < 64 )
    {
      v11 = *(_DWORD *)(a1 + 24) * a3;
      if ( v11 > 64 )
        v11 = 64;
    }
    *a5 = v11;
    return 0LL;
  }
}
