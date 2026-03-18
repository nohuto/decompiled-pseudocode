/*
 * XREFs of ?BltLnkReadPat@@YAXPEAEKPEBEKKKK@Z @ 0x14013ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat(
        unsigned __int8 *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v9; // eax
  __int64 v10; // rcx

  v9 = a6;
  switch ( a7 )
  {
    case 2u:
      v9 = 2 * a6;
      break;
    case 3u:
      v9 = 3 * a6;
      break;
    case 4u:
      v9 = 4 * a6;
      break;
  }
  for ( ; v9; --v9 )
  {
    v10 = 0LL;
    ++a1;
    if ( a5 != a4 )
      v10 = a5;
    a5 = v10 + 1;
    *(a1 - 1) = a3[v10];
  }
}
