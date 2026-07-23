/*
 * XREFs of RtlpGetMultiStringLength @ 0x1801429FC
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetMultiStringLength(_WORD *a1, _WORD *a2, _DWORD *a3)
{
  __int16 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( *a1 )
  {
    v3 = 0;
    do
    {
      if ( a3 )
        ++*a3;
      v4 = -1LL;
      do
        ++v4;
      while ( a1[v4] );
      v3 += v4 + 1;
      v5 = -1LL;
      do
        ++v5;
      while ( a1[v5] );
      a1 += v5 + 1;
    }
    while ( *a1 );
    *a2 = v3;
  }
  return 0LL;
}
