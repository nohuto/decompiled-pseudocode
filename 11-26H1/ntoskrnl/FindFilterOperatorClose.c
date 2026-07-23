/*
 * XREFs of FindFilterOperatorClose @ 0x140A81100
 * Callers:
 *     FilterEvalStrict @ 0x140968990 (FilterEvalStrict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFilterOperatorClose(unsigned int a1, __int64 a2, unsigned int *a3)
{
  int v3; // r9d
  int v4; // r10d
  unsigned int i; // eax
  int v7; // ecx

  v3 = 0;
  v4 = 0;
  *a3 = 0;
  for ( i = 0; i < a1; *a3 = i )
  {
    v7 = *(_DWORD *)(56LL * i + a2) & 0xFF00000;
    if ( v7 == 3145728 )
      goto LABEL_11;
    if ( v7 != 0x400000 )
    {
      if ( v7 == 0x100000 )
        goto LABEL_11;
      if ( v7 != 0x200000 )
      {
        if ( v7 == 5242880 )
        {
LABEL_11:
          ++v3;
          goto LABEL_9;
        }
        if ( v7 != 6291456 )
          goto LABEL_9;
      }
    }
    ++v4;
LABEL_9:
    if ( v3 == v4 )
      return 0LL;
    ++i;
  }
  return 3221225485LL;
}
