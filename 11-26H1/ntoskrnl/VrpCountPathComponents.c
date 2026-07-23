/*
 * XREFs of VrpCountPathComponents @ 0x14093ABC0
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 */

__int64 __fastcall VrpCountPathComponents(unsigned __int16 *a1)
{
  unsigned __int16 v2; // di
  unsigned __int64 v3; // r8
  __int16 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 v9; // rax
  __int16 k; // cx
  __int64 m; // rax
  __int64 n; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v3 = *a1;
  v4 = 0;
  v5 = 0LL;
  if ( *a1 )
  {
    v6 = 0LL;
    do
    {
      if ( *(_WORD *)(v6 + *((_QWORD *)a1 + 1)) != 92 )
        break;
      ++v5;
      v6 = 2 * v5;
    }
    while ( 2 * v5 < v3 );
  }
  for ( i = 2 * v5; 2 * v5 < v3; i = 2 * v5 )
  {
    if ( *(_WORD *)(i + *((_QWORD *)a1 + 1)) == 92 )
      break;
    ++v5;
    v4 += 2;
  }
  for ( j = 2 * v5; 2 * v5 < v3; j = 2 * v5 )
  {
    if ( *(_WORD *)(j + *((_QWORD *)a1 + 1)) != 92 )
      break;
    ++v5;
  }
  if ( v4 )
  {
    do
    {
      ++v2;
      v9 = 2 * v5;
      for ( k = 0; 2 * v5 < v3; v9 = 2 * v5 )
      {
        if ( *(_WORD *)(*((_QWORD *)a1 + 1) + v9) != 92 )
          break;
        ++v5;
      }
      for ( m = 2 * v5; 2 * v5 < v3; m = 2 * v5 )
      {
        if ( *(_WORD *)(*((_QWORD *)a1 + 1) + m) == 92 )
          break;
        ++v5;
        k += 2;
      }
      for ( n = 2 * v5; 2 * v5 < v3; n = 2 * v5 )
      {
        if ( *(_WORD *)(n + *((_QWORD *)a1 + 1)) != 92 )
          break;
        ++v5;
      }
    }
    while ( k );
  }
  return v2;
}
