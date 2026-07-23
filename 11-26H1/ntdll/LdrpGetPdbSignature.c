/*
 * XREFs of LdrpGetPdbSignature @ 0x18015D2A0
 * Callers:
 *     LdrpCgLogFailure @ 0x18015CD50 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlpImageNtHeader @ 0x18015DC34 (RtlpImageNtHeader.c)
 */

__int64 __fastcall LdrpGetPdbSignature(__int64 a1, unsigned __int64 a2, _OWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 i; // rdx

  if ( !a1 || !a2 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  v9 = RtlpImageNtHeader();
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 + 184);
    if ( !(_DWORD)v10 )
      return 3221226021LL;
    v12 = *(unsigned int *)(v9 + 188);
    v13 = (unsigned int)(v12 + v10);
    if ( (unsigned int)v13 >= (unsigned int)v10 && v13 <= a2 )
    {
      v14 = (unsigned __int64)(((v12 * (unsigned __int128)0x2492492492492493uLL) >> 64)
                             + ((unsigned __int64)((unsigned int)v12
                                                 - ((v12 * (unsigned __int128)0x2492492492492493uLL) >> 64)) >> 1)) >> 4;
      if ( (unsigned int)v12 == 28 * v14 )
      {
        v15 = 0LL;
        v16 = (unsigned int *)(v10 + 16 + a1);
        while ( v15 < v14 )
        {
          if ( *(v16 - 1) == 2 )
          {
            v17 = v16[1];
            v18 = *v16;
            v19 = (unsigned int)v17 + *v16;
            if ( (unsigned int)v19 < (unsigned int)v17 || !(_DWORD)v17 || v19 > a2 )
              return 3221225595LL;
            v20 = a1 + v17;
            if ( *(_DWORD *)v20 == 1396986706 )
            {
              if ( v18 >= 0x1C )
              {
                for ( i = v18 - 1; i >= 0x18; --i )
                {
                  if ( !*(_BYTE *)(v20 + i) )
                  {
                    *a3 = *(_OWORD *)(v20 + 4);
                    *a4 = *(_DWORD *)(v20 + 20);
                    *a5 = v20 + 24;
                    return 0LL;
                  }
                }
              }
              return 3221225595LL;
            }
          }
          ++v15;
          v16 += 7;
        }
        return 3221226021LL;
      }
    }
  }
  return 3221225595LL;
}
