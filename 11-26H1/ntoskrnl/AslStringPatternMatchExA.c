/*
 * XREFs of AslStringPatternMatchExA @ 0x1409D57E0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchExA @ 0x1409D57E0 (AslStringPatternMatchExA.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     toupper @ 0x14053A1E0 (toupper.c)
 *     AslStringPatternMatchExA @ 0x1409D57E0 (AslStringPatternMatchExA.c)
 */

__int64 __fastcall AslStringPatternMatchExA(char *a1, _BYTE *a2)
{
  char v4; // al
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // ebp
  int v10; // ebx

  while ( 1 )
  {
    v4 = *a1;
    if ( !*a1 )
      break;
    if ( v4 == 63 )
      goto LABEL_3;
    if ( v4 != 42 )
      goto LABEL_16;
    v6 = a1[1];
    if ( a1[1] == 42 )
    {
      ++a1;
    }
    else
    {
      if ( !(_BYTE)v6 )
        return 1LL;
      v7 = (char)*a2;
      if ( (_BYTE)v6 == *a2 || (v8 = toupper(v6), v8 == toupper(v7)) )
      {
        if ( (unsigned int)AslStringPatternMatchExA(a1 + 1, a2) )
          return 1LL;
      }
LABEL_4:
      if ( !*a2 )
        return 0LL;
      ++a2;
    }
  }
  if ( !*a2 )
    return 1LL;
LABEL_16:
  v9 = (char)*a2;
  if ( v4 == *a2 || (v10 = toupper(*a1), v10 == toupper(v9)) )
  {
LABEL_3:
    ++a1;
    goto LABEL_4;
  }
  return 0LL;
}
