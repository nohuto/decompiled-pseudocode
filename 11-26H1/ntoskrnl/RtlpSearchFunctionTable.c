/*
 * XREFs of RtlpSearchFunctionTable @ 0x14042D650
 * Callers:
 *     RtlMarkExceptionHandlingPages @ 0x140AA5AD0 (RtlMarkExceptionHandlingPages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8
  unsigned int *v6; // r9
  unsigned __int64 v7; // rcx
  int v9; // r10d
  int i; // ebx
  int v11; // edx
  unsigned __int64 v12; // r11

  if ( !a2 )
    return 0LL;
  v5 = a3 - a4;
  v6 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  v7 = *v6;
  if ( v5 < v7 )
  {
    v9 = a2 - 2;
    for ( i = 0; v9 >= i; v7 = *(unsigned int *)(a1 + 12LL * v11) )
    {
      v11 = (i + v9) >> 1;
      v12 = *(unsigned int *)(a1 + 12LL * v11);
      v6 = (unsigned int *)(a1 + 12LL * v11);
      if ( v5 < v12 )
      {
        v9 = v11 - 1;
      }
      else
      {
        v7 = (unsigned int)v12;
        if ( v5 < v6[3] )
          break;
        i = v11 + 1;
      }
    }
    if ( v5 < v7 )
      return 0LL;
  }
  if ( v5 < v6[1] )
    return v6;
  else
    return 0LL;
}
