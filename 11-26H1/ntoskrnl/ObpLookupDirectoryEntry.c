/*
 * XREFs of ObpLookupDirectoryEntry @ 0x1409DF360
 * Callers:
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(unsigned __int16 *a1, char a2, __int64 a3)
{
  unsigned __int16 *v4; // r14
  char v5; // bl
  unsigned int v6; // esi
  unsigned __int16 *v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // edi
  unsigned __int8 v13; // al
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r12
  char *v20; // rdi
  char *v21; // rsi
  unsigned __int16 *v22; // rbp
  SIZE_T v23; // rax
  __int64 v24; // rax
  unsigned __int16 *v25; // rdi
  char *v26; // rsi
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rbp
  __int64 v30; // rax
  __int128 v31; // rt0
  struct _LIST_ENTRY *Flink; // [rsp+60h] [rbp+8h]
  int v35; // [rsp+68h] [rbp+10h]

  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v5 = a2;
  v6 = *a1 >> 1;
  v7 = a1;
  if ( v6 < 4 )
  {
    v10 = 0;
  }
  else
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)v4;
      if ( (*(_QWORD *)v4 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v29 = 4LL;
        do
        {
          v30 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0x61u )
          {
            if ( (unsigned __int16)v9 <= 0x7Au )
              v30 = (unsigned int)(unsigned __int16)v9 - 32;
            else
              v30 = RtlUpcaseUnicodeChar(v9);
          }
          *(_QWORD *)&v31 = v9;
          *((_QWORD *)&v31 + 1) = v30;
          v9 = v31 >> 16;
          --v29;
        }
        while ( v29 );
      }
      else
      {
        v9 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v4 += 4;
      v6 -= 4;
      v8 = v9 + (v8 >> 1) + 3 * v8;
    }
    while ( v6 >= 4 );
    v7 = a1;
    v10 = v8 + HIDWORD(v8);
    v5 = a2;
  }
  while ( v6 )
  {
    v11 = *v4++;
    --v6;
    v12 = (v10 >> 1) + 3 * v10;
    if ( v11 >= 0x61 )
    {
      if ( v11 > 0x7A )
      {
        v10 = RtlUpcaseUnicodeChar(v11) + v12;
        continue;
      }
      v12 -= 32;
    }
    v10 = v11 + v12;
  }
  *(_DWORD *)(a3 + 16) = v10;
  v35 = v5 & 0x40;
  v13 = v10 % 0x25;
  *(_BYTE *)(a3 + 20) = v13;
  v14 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * v13);
  v15 = *(_QWORD *)a3 + 8LL * v13;
  if ( !v14 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v14 + 16) != *(_DWORD *)(a3 + 16) )
      goto LABEL_15;
    Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
    v18 = *v7;
    if ( (_WORD)v18 != *(_WORD *)(v17 + 8) )
      goto LABEL_15;
    v19 = *v7;
    v20 = (char *)*((_QWORD *)v7 + 1);
    v21 = *(char **)(v17 + 16);
    v22 = (unsigned __int16 *)&v20[v18];
    if ( v35 )
      break;
    if ( !memcmp(v20, v21, v19) )
      goto LABEL_20;
LABEL_15:
    v15 = v14;
    v14 = *(_QWORD *)v14;
    if ( !v14 )
      return 0LL;
  }
  v23 = RtlCompareMemory(v20, v21, v19);
  if ( v23 != v19 )
  {
    v24 = 2 * (v23 >> 1);
    v25 = (unsigned __int16 *)&v20[v24];
    v26 = &v21[v24];
    while ( v25 < v22 )
    {
      v27 = *v25;
      v28 = *(unsigned __int16 *)v26;
      if ( (_WORD)v27 != (_WORD)v28 )
      {
        if ( (unsigned int)v27 >= 0x61 )
        {
          if ( (unsigned int)v27 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v27 >= 0xC0u )
              LOWORD(v27) = *((_WORD *)&Flink->Flink
                            + (v27 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v27 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v27 >> 8))))
                          + v27;
          }
          else
          {
            LOWORD(v27) = v27 - 32;
          }
        }
        if ( (unsigned int)v28 >= 0x61 )
        {
          if ( (unsigned int)v28 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v28 >= 0xC0u )
                LOWORD(v28) = *((_WORD *)&Flink->Flink
                              + (v28 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v28 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v28 >> 8))))
                            + v28;
            }
          }
          else
          {
            LOWORD(v28) = v28 - 32;
          }
        }
        if ( (_WORD)v27 != (_WORD)v28 )
          goto LABEL_15;
      }
      ++v25;
      v26 += 2;
    }
  }
LABEL_20:
  result = *(_QWORD *)(v14 + 8);
  *(_QWORD *)(a3 + 8) = v15;
  return result;
}
