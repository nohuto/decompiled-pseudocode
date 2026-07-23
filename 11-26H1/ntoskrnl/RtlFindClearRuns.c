/*
 * XREFs of RtlFindClearRuns @ 0x140407B70
 * Callers:
 *     RtlFindLongestRunClear @ 0x14061BA60 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  PRTL_BITMAP_RUN v4; // r13
  ULONG v5; // r12d
  unsigned int SizeOfBitMap; // r8d
  BOOLEAN v7; // r15
  unsigned int *Buffer; // r10
  unsigned int v9; // edx
  ULONG v10; // r14d
  unsigned int v11; // esi
  __int64 v12; // rbx
  ULONG v13; // ebp
  unsigned int v14; // r9d
  int v15; // edi
  unsigned __int8 v16; // al
  __int64 v17; // r11
  ULONG v18; // ebx
  unsigned __int8 v19; // al
  ULONG v20; // r8d
  signed int v21; // r12d
  __int64 v22; // r15
  _RTL_BITMAP_RUN *i; // r14
  unsigned __int8 *v24; // r11
  __int64 v25; // r15
  int v26; // r13d
  char j; // r12
  ULONG v28; // r11d
  ULONG v29; // r14d
  signed int v30; // r14d
  __int64 v31; // r11
  _RTL_BITMAP_RUN *k; // r8
  signed int v33; // edx
  __int64 v34; // r8
  _RTL_BITMAP_RUN *m; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  _RTL_BITMAP_RUN *v39; // rdx
  unsigned int v40; // [rsp+0h] [rbp-58h]
  unsigned int v41; // [rsp+4h] [rbp-54h]
  ULONG v42; // [rsp+60h] [rbp+8h]

  v4 = RunArray;
  v5 = SizeOfRunArray;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v7 = LocateLongestRuns;
  Buffer = BitMapHeader->Buffer;
  v9 = BitMapHeader->SizeOfBitMap & 7;
  v41 = BitMapHeader->SizeOfBitMap;
  v40 = v9;
  v10 = 0;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + (v9 != 0);
  LODWORD(v12) = 0;
  v42 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  while ( v14 < v11 )
  {
    v16 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v14 == v11 - 1 && v9 )
      v16 |= byte_140018470[SizeOfBitMap & 7];
    if ( v16 )
    {
      v17 = *((unsigned __int8 *)RtlpBitsClearLow + v16);
      v18 = v17 + v12;
      if ( v18 )
      {
        if ( v10 < v5 )
        {
          v42 = ++v10;
        }
        else if ( v4[v10 - 1].NumberOfBits >= v18 )
        {
          goto LABEL_6;
        }
        v21 = v10 - 2;
        if ( v7 )
        {
          v22 = v21;
          for ( i = &v4[v21 + 1]; v22 >= 0 && i[-1].NumberOfBits < v18; --i )
          {
            --v21;
            --v22;
            *i = i[-1];
          }
          v10 = v42;
          v7 = LocateLongestRuns;
        }
        v37 = v21;
        v5 = SizeOfRunArray;
        v4[v37 + 1].NumberOfBits = v18;
        v4[v37 + 1].StartingIndex = v13;
        if ( !v7 && v10 >= SizeOfRunArray )
          return v10;
      }
LABEL_6:
      v12 = *((unsigned __int8 *)RtlpBitsClearHigh + v16);
      v13 = v15 - v12 + 8;
      v7 = LocateLongestRuns;
      v19 = *((_BYTE *)&qword_140018478 - v12) | byte_1400327C0[v17] | v16;
      while ( 1 )
      {
        v20 = v10;
        if ( v19 == 0xFF )
          break;
        v24 = (unsigned __int8 *)RtlpBitsClearAnywhere + v19;
        if ( v10 >= v5 && v4[v10 - 1].NumberOfBits >= *v24 )
          break;
        v25 = *v24;
        v26 = 0;
        for ( j = byte_1400327C0[v25]; ((unsigned __int8)j & v19) != 0; ++v26 )
          j *= 2;
        v28 = SizeOfRunArray;
        v29 = v10 + 1;
        if ( v20 >= SizeOfRunArray )
          v29 = v20;
        v42 = v29;
        v30 = v29 - 2;
        if ( LocateLongestRuns )
        {
          v31 = v30;
          for ( k = &RunArray[v30 + 1]; v31 >= 0 && k[-1].NumberOfBits < (unsigned int)v25; --k )
          {
            --v30;
            --v31;
            *k = k[-1];
          }
          v28 = SizeOfRunArray;
        }
        v38 = v30;
        v10 = v42;
        v39 = &RunArray[v38];
        v39[1].NumberOfBits = v25;
        v7 = LocateLongestRuns;
        v39[1].StartingIndex = v15 + v26;
        if ( !LocateLongestRuns && v42 >= v28 )
          return v10;
        v4 = RunArray;
        v19 |= j;
        v5 = SizeOfRunArray;
      }
      LOBYTE(SizeOfBitMap) = v41;
      v9 = v40;
      ++v14;
      v15 += 8;
    }
    else
    {
      LODWORD(v12) = v12 + 8;
      ++v14;
      v15 += 8;
    }
  }
  if ( (_DWORD)v12 )
  {
    if ( v10 < v5 )
    {
      ++v10;
      goto LABEL_32;
    }
    if ( v4[v10 - 1].NumberOfBits < (unsigned int)v12 )
    {
LABEL_32:
      v33 = v10 - 2;
      if ( v7 )
      {
        v34 = v33;
        for ( m = &v4[v33 + 1]; v34 >= 0 && m[-1].NumberOfBits < (unsigned int)v12; --m )
        {
          --v33;
          --v34;
          *m = m[-1];
        }
      }
      v4[v33 + 1].NumberOfBits = v12;
      v4[v33 + 1].StartingIndex = v13;
    }
  }
  return v10;
}
