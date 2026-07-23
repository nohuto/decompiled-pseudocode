/*
 * XREFs of RtlpQueryEnvironmentHashTable @ 0x18009D240
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpQueryEnvironmentHashTable(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r12
  char *v7; // r15
  __int64 v8; // r13
  char *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int16 v13; // r8
  unsigned int v14; // ebp
  unsigned int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  unsigned __int16 *v21; // r11
  signed __int64 v22; // r15
  unsigned __int16 *v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  int v26; // r13d
  bool v27; // zf
  unsigned __int64 v28; // rcx
  const void *v29; // rdx
  __int64 v30; // rbx

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = a2;
  v10 = 314159LL;
  v11 = (unsigned __int64)&a2[2 * (unsigned int)a3];
  if ( (unsigned __int64)a2 >= v11 )
    goto LABEL_7;
  do
  {
    v12 = *(unsigned __int16 *)v9;
    if ( (unsigned int)v12 < 0x61 )
      goto LABEL_16;
    if ( (unsigned int)v12 <= 0x7A )
    {
      LOBYTE(v13) = v12 - 32;
      LOWORD(v12) = v12 - 32;
      goto LABEL_5;
    }
    if ( qword_1801C5038 && (unsigned __int16)v12 >= 0xC0u )
    {
      v13 = *(_WORD *)(qword_1801C5038
                     + 2
                     * ((v12 & 0xF)
                      + *(unsigned __int16 *)(qword_1801C5038
                                            + 2LL
                                            * (((unsigned __int8)v12 >> 4)
                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v12 >> 8))))))
          + v12;
      LOWORD(v12) = v13;
    }
    else
    {
LABEL_16:
      LOBYTE(v13) = *(_WORD *)v9;
    }
LABEL_5:
    v9 += 2;
    v10 = BYTE1(v12) + 37 * ((unsigned __int8)v13 + 37 * v10);
  }
  while ( (unsigned __int64)v9 < v11 );
  v6 = a3;
LABEL_7:
  v14 = *(_DWORD *)(a1 + 4);
  v15 = 0;
  v16 = 0LL;
  v17 = v10 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
  while ( 1 )
  {
    if ( v16 )
      goto LABEL_11;
    if ( !(v14 >> 5) )
      return 3221225728LL;
    v16 = *(_QWORD *)(v8 + 8)
        + 8LL
        * (((v14 >> 5) - 1) & (HIBYTE(v17)
                             - 877075889
                             + 442596621 * (unsigned __int8)v17
                             + 37
                             * (BYTE6(v17)
                              + 37
                              * (BYTE5(v17) + 37
                                            * (BYTE4(v17) + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * BYTE1(v17))))))));
    do
    {
LABEL_11:
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        return 3221225728LL;
    }
    while ( v17 != ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v16 + 8)) );
    if ( !v16 )
      return 3221225728LL;
    v19 = *(_QWORD *)(v16 + 32);
    v20 = v6;
    v21 = *(unsigned __int16 **)(v16 + 16);
    if ( v19 <= v6 )
      v20 = *(_QWORD *)(v16 + 32);
    v22 = v7 - (char *)v21;
    v23 = &v21[v20];
    while ( v21 < v23 )
    {
      v24 = *v21;
      v25 = *(unsigned __int16 *)((char *)v21 + v22);
      if ( (_WORD)v24 != (_WORD)v25 )
      {
        if ( (unsigned int)v24 >= 0x61 )
        {
          if ( (unsigned int)v24 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v24 >= 0xC0u )
              LOWORD(v24) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v24 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (((unsigned __int8)v24 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                 + 2 * (v24 >> 8))))))
                          + v24;
          }
          else
          {
            LOWORD(v24) = v24 - 32;
          }
        }
        if ( (unsigned int)v25 >= 0x61 )
        {
          if ( (unsigned int)v25 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v25 >= 0xC0u )
              LOWORD(v25) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v25 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (((unsigned __int8)v25 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                 + 2 * (v25 >> 8))))))
                          + v25;
          }
          else
          {
            LOWORD(v25) = v25 - 32;
          }
        }
        if ( (_WORD)v24 != (_WORD)v25 )
        {
          v6 = a3;
          v26 = (unsigned __int16)v24 - (unsigned __int16)v25;
          goto LABEL_33;
        }
      }
      ++v21;
    }
    v6 = a3;
    v26 = v19 - a3;
LABEL_33:
    v7 = a2;
    v27 = v26 == 0;
    v8 = a1;
    if ( v27 )
    {
      v28 = *(_QWORD *)(v16 + 40);
      v29 = *(const void **)(v16 + 24);
      if ( a4 )
      {
        if ( v28 < a5 )
        {
          v30 = v28;
          *a6 = v28;
          memmove(a4, v29, 2 * v28);
          a4[v30] = 0;
          return v15;
        }
        if ( a5 )
          *a4 = 0;
      }
      v15 = -1073741789;
      *a6 = v28 + 1;
      return v15;
    }
  }
}
