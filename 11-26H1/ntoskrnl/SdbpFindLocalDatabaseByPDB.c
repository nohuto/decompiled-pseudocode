/*
 * XREFs of SdbpFindLocalDatabaseByPDB @ 0x14088C5BC
 * Callers:
 *     SdbTagIDToTagRef @ 0x14088BFF0 (SdbTagIDToTagRef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpFindLocalDatabaseByPDB(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int i; // r8d
  int v7; // eax
  __int64 v8; // rcx

  v4 = 0;
  for ( i = 0; i < 0x10; ++i )
  {
    v7 = *(_DWORD *)(a1 + 36);
    if ( _bittest(&v7, i) )
    {
      v8 = 32LL * i;
      if ( (*(_DWORD *)(v8 + a1 + 64) & 2) != 0 && a2 == *(_QWORD *)(v8 + a1 + 56) )
      {
        v4 = 1;
        if ( a4 )
          *a4 = i;
        return v4;
      }
    }
  }
  return v4;
}
