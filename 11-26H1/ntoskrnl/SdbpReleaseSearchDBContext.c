/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x1409E33B8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409E31A8 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409E4A54 (SdbpCheckKObject.c)
 * Callees:
 *     SdbpFreeAppAttributes @ 0x140884194 (SdbpFreeAppAttributes.c)
 *     AslHashFree @ 0x14088B068 (AslHashFree.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _DWORD *v4; // rdi
  __int64 i; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = (_QWORD *)a1;
    if ( v1 )
    {
      AslFree(a1, v1);
      v2[3] = 0LL;
    }
    v3 = v2[8];
    if ( v3 )
    {
      AslFree(a1, v3);
      v2[8] = 0LL;
    }
    v4 = (_DWORD *)v2[9];
    if ( v4 )
    {
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v6 = 12 * i;
        if ( &v4[12 * i + 2] )
        {
          v7 = *(_QWORD *)&v4[v6 + 6];
          if ( v7 )
          {
            AslHashFree(v7);
            *(_QWORD *)&v4[v6 + 6] = 0LL;
          }
          a1 = *(_QWORD *)&v4[v6 + 8];
          if ( a1 )
          {
            AslHashFree(a1);
            *(_QWORD *)&v4[v6 + 8] = 0LL;
          }
          v8 = *(_QWORD *)&v4[v6 + 12];
          if ( v8 )
          {
            AslFree(a1, v8);
            *(_OWORD *)&v4[v6 + 10] = 0LL;
          }
        }
        v4 = (_DWORD *)v2[9];
      }
      AslFree(a1, v4);
      v2[9] = 0LL;
    }
    v9 = v2[4];
    if ( v9 )
    {
      AslFree(a1, v9);
      v2[4] = 0LL;
    }
    v10 = v2[5];
    if ( v10 )
    {
      AslFree(a1, v10);
      v2[5] = 0LL;
    }
    v11 = v2[6];
    if ( v11 )
    {
      AslFree(a1, v11);
      v2[6] = 0LL;
    }
    v12 = v2[11];
    if ( v12 )
    {
      SdbpFreeAppAttributes(v12);
      v2[11] = 0LL;
    }
    v13 = v2[12];
    if ( v13 )
    {
      SdbpFreeAppAttributes(v13);
      v2[12] = 0LL;
    }
  }
}
