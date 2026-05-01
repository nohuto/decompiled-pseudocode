/*
 * XREFs of AslpFileHasActiveMarkWrapper @ 0x18009D6CC
 * Callers:
 *     AslpFileGetExeWrapper @ 0x18009BD0C (AslpFileGetExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 i; // rdx

  v4 = 0;
  *a1 = 0;
  v5 = *(_QWORD *)(a3 + 40);
  if ( v5 - 1025 > 0xFFFFFBFE || *(_DWORD *)(a3 + 76) || *(_DWORD *)(a3 + 72) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( *(_WORD *)(a2 + 24) != 267 )
      return (unsigned int)-1073741275;
    if ( a2 == -152 )
      return (unsigned int)-1073741275;
    v6 = (unsigned int)(*(_DWORD *)(a2 + 156) + 1024);
    if ( v5 <= v6 )
    {
      return (unsigned int)-1073741275;
    }
    else
    {
      v7 = v5 + *(_QWORD *)(a3 + 32) - v6;
      for ( i = v7 + 998; i >= v7; --i )
      {
        if ( *(_QWORD *)i == 0x464F564D41534D54LL
          && *(_WORD *)(i + 8) == 1
          && *(unsigned int *)(i + 10) + 622LL + *(unsigned int *)(i + 14) + (unsigned __int64)*(unsigned int *)(i + 18) == *(_DWORD *)(i + 22) )
        {
          *a1 = 1;
          return v4;
        }
      }
    }
  }
  return v4;
}
