/*
 * XREFs of RtlpScanEnvironment @ 0x18009CB40
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpInsertEnvironmentHashTableEntry @ 0x18009CF90 (RtlpInsertEnvironmentHashTableEntry.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  __int64 v7; // rbp
  unsigned __int16 *v8; // r11
  int v9; // edi
  unsigned __int16 *v10; // rax
  unsigned int v12; // r15d
  unsigned __int16 *v13; // r13
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rcx
  int v20; // ebp
  _BYTE *v21; // r12
  int v22; // r14d
  __int64 v23; // rdi
  _QWORD *Heap_0; // rax
  _QWORD *v25; // r15
  __int64 v26; // r9
  unsigned __int16 *v27; // r10
  unsigned __int64 v28; // r8
  __int16 v29; // dx
  int inserted; // edi
  unsigned __int64 v31; // rbx
  size_t v32; // rbx
  __int64 v34; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v35; // [rsp+80h] [rbp+8h]

  v7 = qword_1801C5038;
  v8 = &a2[a3];
  v9 = a7;
  v10 = a2;
  v35 = v8;
  v12 = 0;
  v34 = qword_1801C5038;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !*a1 )
      {
        if ( v9 )
        {
          *((_QWORD *)&xmmword_1801CA890 + 1) = a1;
          LOBYTE(xmmword_1801CA890) = 1;
        }
        return 3221225728LL;
      }
      v13 = a1;
      v14 = a1;
      v15 = v10;
      if ( v10 < v8 )
      {
        do
        {
          v16 = *a1;
          if ( !(_WORD)v16 )
            break;
          if ( (unsigned int)v16 >= 0x61 )
          {
            if ( (unsigned int)v16 > 0x7A )
            {
              if ( v7 && (unsigned __int16)v16 >= 0xC0u )
                LOWORD(v16) = *(_WORD *)(v7
                                       + 2
                                       * ((v16 & 0xF)
                                        + *(unsigned __int16 *)(v7
                                                              + 2LL
                                                              * (((unsigned __int8)v16 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v16 >> 8))))))
                            + v16;
            }
            else
            {
              LOWORD(v16) = v16 - 32;
            }
          }
          v17 = *v15;
          if ( (unsigned int)v17 >= 0x61 )
          {
            if ( (unsigned int)v17 > 0x7A )
            {
              if ( v7 && (unsigned __int16)v17 >= 0xC0u )
                LOWORD(v17) = *(_WORD *)(v7
                                       + 2
                                       * ((v17 & 0xF)
                                        + *(unsigned __int16 *)(v7
                                                              + 2LL
                                                              * (((unsigned __int8)v17 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v17 >> 8))))))
                            + v17;
            }
            else
            {
              LOWORD(v17) = v17 - 32;
            }
          }
          if ( (_WORD)v16 != (_WORD)v17 )
            break;
          ++a1;
          ++v15;
        }
        while ( v15 < v8 );
        v9 = a7;
      }
      if ( v15 == v8 && *a1 == 61 )
      {
        v20 = 1;
        v19 = a1;
      }
      else
      {
        v18 = *a1;
        if ( !*a1 )
          goto LABEL_18;
        while ( 1 )
        {
          v19 = a1;
          if ( v18 == 61 && a1 != v13 )
            break;
          v18 = a1[1];
          ++a1;
          if ( !v18 )
            goto LABEL_18;
        }
        if ( !*a1 )
        {
LABEL_18:
          v10 = a2;
          ++a1;
          continue;
        }
        v20 = 0;
      }
      break;
    }
    do
      ++a1;
    while ( *a1 );
    v21 = v19 + 1;
    v22 = v20;
    v23 = v19 - v13;
    if ( !a7 || *((_QWORD *)&xmmword_1801CA890 + 1) >= (unsigned __int64)a1 )
      goto LABEL_24;
    if ( !NtCurrentPeb()->ProcessHeap )
    {
LABEL_64:
      v22 = v20;
LABEL_44:
      v8 = v35;
      v9 = 0;
      a7 = 0;
      goto LABEL_25;
    }
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
    v25 = Heap_0;
    if ( !Heap_0 )
    {
      v12 = 0;
      goto LABEL_64;
    }
    v26 = 314159LL;
    Heap_0[5] = ((char *)a1 - v21) >> 1;
    v22 = v20;
    Heap_0[2] = v13;
    Heap_0[3] = v21;
    v27 = &v14[(unsigned int)v23];
    Heap_0[4] = v23;
    if ( v14 >= v27 )
      goto LABEL_42;
    do
    {
      v28 = *v14;
      if ( (unsigned int)v28 < 0x61 )
        goto LABEL_46;
      if ( (unsigned int)v28 <= 0x7A )
      {
        LOBYTE(v29) = v28 - 32;
        LOWORD(v28) = v28 - 32;
        goto LABEL_40;
      }
      if ( qword_1801C5038 && (unsigned __int16)v28 >= 0xC0u )
      {
        v29 = *(_WORD *)(qword_1801C5038
                       + 2
                       * ((v28 & 0xF)
                        + *(unsigned __int16 *)(qword_1801C5038
                                              + 2LL
                                              * (((unsigned __int8)v28 >> 4)
                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v28 >> 8))))))
            + v28;
        LOWORD(v28) = v29;
      }
      else
      {
LABEL_46:
        LOBYTE(v29) = *v14;
      }
LABEL_40:
      ++v14;
      v26 = BYTE1(v28) + 37 * ((unsigned __int8)v29 + 37 * v26);
    }
    while ( v14 < v27 );
    v25 = Heap_0;
LABEL_42:
    v25[1] = v26;
    inserted = RtlpInsertEnvironmentHashTableEntry(&RtlpEnvironmentHashTable, v25);
    if ( inserted >= 0 )
    {
      v8 = v35;
      v12 = 0;
      *((_QWORD *)&xmmword_1801CA890 + 1) = a1;
    }
    else
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v25);
      v12 = 0;
      if ( inserted != -1073741771 )
        goto LABEL_44;
      v8 = v35;
    }
LABEL_24:
    v9 = a7;
LABEL_25:
    if ( !v22 )
    {
      v10 = a2;
      ++a1;
      v7 = v34;
      continue;
    }
    break;
  }
  v31 = ((char *)a1 - v21) >> 1;
  if ( a4 )
  {
    if ( v31 < a5 )
    {
      *a6 = v31;
      v32 = v31;
      memmove(a4, v21, v32 * 2);
      a4[v32] = 0;
      return v12;
    }
    if ( a5 )
      *a4 = 0;
  }
  v12 = -1073741789;
  *a6 = v31 + 1;
  return v12;
}
