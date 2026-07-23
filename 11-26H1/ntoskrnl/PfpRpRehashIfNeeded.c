/*
 * XREFs of PfpRpRehashIfNeeded @ 0x140ABD31C
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1408DB1B0 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpRehashIfNeeded(__int64 a1, void **a2, __int64 a3)
{
  _BYTE *v3; // r11
  unsigned int v4; // r10d
  unsigned int v6; // edi
  char *v8; // rbx
  char i; // cl
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdx
  void *v16; // rcx
  int v17; // eax
  __int64 v19; // [rsp+28h] [rbp+8h]

  v3 = (_BYTE *)(a1 + 4);
  v4 = 0;
  v6 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
  if ( *(_DWORD *)a1 >= v6 )
  {
    if ( !v6 )
      v6 = 64;
    if ( v6 <= (unsigned int)a3 )
    {
      v8 = (char *)*a2;
      if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
      {
        for ( i = -1; (_DWORD)a3; LODWORD(a3) = (unsigned int)a3 >> 1 )
          ++i;
        a3 = (unsigned int)(1 << i);
      }
      if ( (unsigned int)a3 > 0x4000000 )
        a3 = 0x4000000LL;
      v10 = (unsigned int)a3;
      if ( v8 > &v8[8 * a3] )
        v10 = 0LL;
      if ( v10 )
        memset64(v8, a1 | 1, v10);
      v11 = 0;
      v12 = -1LL << (*v3 & 0x1F);
      if ( (*(_DWORD *)v3 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v11);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v11) = *v14;
            v19 = v12 & v14[1];
            v15 = ((_DWORD)a3 - 1) & (HIBYTE(v19)
                                    + 37
                                    * (BYTE6(v19)
                                     + 37
                                     * (BYTE5(v19)
                                      + 37
                                      * (BYTE4(v19)
                                       + 37
                                       * (BYTE3(v19)
                                        + 374026047
                                        + 37
                                        * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * (unsigned int)(unsigned __int8)v19)))))));
            *v14 = *(_QWORD *)&v8[8 * v15];
            *(_QWORD *)&v8[8 * v15] = v14;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)v3 >> 5 );
      }
      v16 = *(void **)(a1 + 8);
      v3 = (_BYTE *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v8;
      v17 = (32 * a3) | *(_DWORD *)(a1 + 4) & 0x1F;
      *a2 = v16;
      *(_DWORD *)(a1 + 4) = v17;
    }
  }
  LOBYTE(v4) = *(_DWORD *)v3 >= 0x20u;
  return v4;
}
