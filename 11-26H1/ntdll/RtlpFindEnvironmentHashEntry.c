/*
 * XREFs of RtlpFindEnvironmentHashEntry @ 0x1800BC8B0
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x18009CF90 (RtlpInsertEnvironmentHashTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFindEnvironmentHashEntry(__int64 a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v4; // r13d
  char *v5; // rbx
  __int64 v6; // r14
  char *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax
  __int16 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // r9
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int16 *v19; // r10
  signed __int64 v20; // r14
  unsigned __int16 *v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  int v24; // r12d
  __int64 v26; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a2;
  v8 = 314159LL;
  v9 = (unsigned __int64)&a2[2 * (unsigned int)a3];
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_7;
  do
  {
    v10 = *(unsigned __int16 *)v7;
    if ( (unsigned int)v10 < 0x61 )
      goto LABEL_17;
    if ( (unsigned int)v10 <= 0x7A )
    {
      LOBYTE(v11) = v10 - 32;
      LOWORD(v10) = v10 - 32;
      goto LABEL_5;
    }
    if ( qword_1801C5038 && (unsigned __int16)v10 >= 0xC0u )
    {
      v11 = *(_WORD *)(qword_1801C5038
                     + 2
                     * ((v10 & 0xF)
                      + *(unsigned __int16 *)(qword_1801C5038
                                            + 2LL
                                            * (((unsigned __int8)v10 >> 4)
                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v10 >> 8))))))
          + v10;
      LOWORD(v10) = v11;
    }
    else
    {
LABEL_17:
      LOBYTE(v11) = *(_WORD *)v7;
    }
LABEL_5:
    v7 += 2;
    v8 = BYTE1(v10) + 37 * ((unsigned __int8)v11 + 37 * v8);
  }
  while ( (unsigned __int64)v7 < v9 );
  v3 = a3;
LABEL_7:
  v12 = *(_DWORD *)(a1 + 4);
  v13 = 0LL;
  v14 = -1LL << (v12 & 0x1F);
  v15 = v8 & v14;
  v26 = v8 & v14;
LABEL_8:
  if ( v13 )
    goto LABEL_11;
  if ( v12 >> 5 )
  {
    v13 = *(_QWORD *)(v6 + 8)
        + 8LL
        * (((v12 >> 5) - 1) & (HIBYTE(v26)
                             - 877075889
                             + 442596621 * (unsigned __int8)v15
                             + 37
                             * (BYTE6(v26)
                              + 37
                              * (BYTE5(v26) + 37
                                            * (BYTE4(v26) + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * BYTE1(v26))))))));
LABEL_11:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v15 == (v14 & *(_QWORD *)(v13 + 8)) )
      {
        if ( !v13 )
          return 0LL;
        v17 = *(_QWORD *)(v13 + 32);
        v18 = v3;
        v19 = *(unsigned __int16 **)(v13 + 16);
        if ( v17 <= v3 )
          v18 = *(_QWORD *)(v13 + 32);
        v20 = v5 - (char *)v19;
        v21 = &v19[v18];
        while ( v19 < v21 )
        {
          v22 = *v19;
          v23 = *(unsigned __int16 *)((char *)v19 + v20);
          if ( (_WORD)v22 != (_WORD)v23 )
          {
            if ( (unsigned int)v22 >= 0x61 )
            {
              if ( (unsigned int)v22 > 0x7A )
              {
                if ( qword_1801C5038 && (unsigned __int16)v22 >= 0xC0u )
                  LOWORD(v22) = *(_WORD *)(qword_1801C5038
                                         + 2
                                         * ((v22 & 0xF)
                                          + *(unsigned __int16 *)(qword_1801C5038
                                                                + 2LL
                                                                * (((unsigned __int8)v22 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v22 >> 8))))))
                              + v22;
              }
              else
              {
                LOWORD(v22) = v22 - 32;
              }
            }
            if ( (unsigned int)v23 >= 0x61 )
            {
              if ( (unsigned int)v23 > 0x7A )
              {
                if ( qword_1801C5038 )
                {
                  if ( (unsigned __int16)v23 >= 0xC0u )
                    LOWORD(v23) = *(_WORD *)(qword_1801C5038
                                           + 2
                                           * ((v23 & 0xF)
                                            + *(unsigned __int16 *)(qword_1801C5038
                                                                  + 2LL
                                                                  * (((unsigned __int8)v23 >> 4)
                                                                   + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v23 >> 8))))))
                                + v23;
                }
              }
              else
              {
                LOWORD(v23) = v23 - 32;
              }
            }
            if ( (_WORD)v22 != (_WORD)v23 )
            {
              v24 = (unsigned __int16)v22 - (unsigned __int16)v23;
              goto LABEL_34;
            }
          }
          ++v19;
        }
        v24 = v17 - v4;
LABEL_34:
        v5 = a2;
        v3 = a3;
        v6 = a1;
        if ( !v24 )
          return v13;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
