/*
 * XREFs of TelemetryCoverageCheckTableForCoverageInternal @ 0x18010C4DC
 * Callers:
 *     EtwCheckCoverage @ 0x18010C490 (EtwCheckCoverage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TelemetryCoverageCheckTableForCoverageInternal(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  unsigned int v7; // ecx
  _DWORD *i; // rax
  bool v9; // zf

  v2 = a1[1];
  v4 = a1[2] & a2;
  v5 = (unsigned __int64)&a1[v2 + 13];
  if ( (unsigned int)v4 >= (unsigned int)v2 )
    v4 = (int)v4 - (int)v2 < (unsigned int)v2 ? (unsigned int)(v4 - v2) : 0;
  v6 = (unsigned __int64)&a1[v4 + 13];
  v7 = 0;
  for ( i = (_DWORD *)v6; (unsigned __int64)i < v5; ++i )
  {
    if ( !*i )
      goto LABEL_14;
    v9 = *i == a2;
    if ( *i == a2 )
      goto LABEL_15;
  }
  for ( i = a1 + 13; (unsigned __int64)i < v6; ++i )
  {
    if ( !*i )
      goto LABEL_14;
    v9 = *i == a2;
    if ( *i == a2 )
      goto LABEL_15;
  }
  i = 0LL;
LABEL_14:
  v9 = *i == a2;
LABEL_15:
  LOBYTE(v7) = v9;
  return v7;
}
