/*
 * XREFs of EmpEvaluateParseNodeMapping @ 0x14046DED8
 * Callers:
 *     EmpEvaluateNodeLink @ 0x14046D9BC (EmpEvaluateNodeLink.c)
 * Callees:
 *     <none>
 */

char __fastcall EmpEvaluateParseNodeMapping(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13,
        unsigned int a14)
{
  char v14; // r10
  unsigned int j; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int k; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int i; // edx
  __int64 v25; // r8
  __int64 v26; // rax

  v14 = 0;
  if ( a1 && a2 == a14 + a10 + a12 )
  {
    if ( a9 )
    {
      for ( i = 0; i < a10; ++i )
      {
        v25 = i;
        v26 = *(unsigned int *)(a1 + 4LL * i);
        if ( (unsigned int)v26 >= a4 )
          return v14;
        *(_QWORD *)(a9 + 8 * v25) = *(_QWORD *)(a3 + 8 * v26);
      }
    }
    if ( a11 )
    {
      for ( j = 0; j < a12; ++j )
      {
        v18 = *(unsigned int *)(a1 + 4LL * (j + a10));
        if ( (unsigned int)v18 >= a6 )
          return v14;
        v19 = j;
        *(_DWORD *)(a11 + 4 * v19) = *(_DWORD *)(a5 + 4 * v18);
      }
    }
    if ( a13 )
    {
      for ( k = 0; k < a14; ++k )
      {
        v21 = *(unsigned int *)(a1 + 4LL * (k + a10 + a12));
        if ( (unsigned int)v21 >= a8 )
          return v14;
        v22 = k;
        *(_QWORD *)(a13 + 8 * v22) = *(_QWORD *)(a7 + 8 * v21);
      }
    }
    return 1;
  }
  return v14;
}
