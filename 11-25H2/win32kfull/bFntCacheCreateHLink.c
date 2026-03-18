/*
 * XREFs of bFntCacheCreateHLink @ 0x140303BE4
 * Callers:
 *     SearchFntCacheNewLink @ 0x140303B08 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bFntCacheCreateHLink(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v9; // rcx

  v3 = *(__int64 **)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 19600LL);
  v4 = *v3;
  v5 = a1 % 0x3D;
  v6 = *(unsigned int *)(*v3 + 4 * v5 + 72);
  if ( (_DWORD)v6 == -1 )
  {
    *(_DWORD *)(v4 + 4 * v5 + 72) = *((_DWORD *)v3 + 2);
  }
  else
  {
    v7 = *(_DWORD *)(v4 + 16);
    if ( (unsigned int)v6 > v7 )
      return 0LL;
    while ( 1 )
    {
      v9 = v4 + 80 * (v6 + 4);
      v6 = *(unsigned int *)(v9 + 8);
      if ( (_DWORD)v6 == -1 )
        break;
      if ( (unsigned int)v6 > v7 )
      {
        *((_DWORD *)v3 + 4) |= 2u;
        return 0LL;
      }
    }
    *(_DWORD *)(v9 + 8) = *((_DWORD *)v3 + 2);
  }
  return 1LL;
}
