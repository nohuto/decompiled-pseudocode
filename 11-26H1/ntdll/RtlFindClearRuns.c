/*
 * XREFs of RtlFindClearRuns @ 0x1800D4930
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800D48E0 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  PRTL_BITMAP_RUN v4; // r12
  ULONG v5; // ebp
  unsigned int SizeOfBitMap; // r8d
  BOOLEAN v7; // r15
  unsigned int *Buffer; // r10
  unsigned int v9; // edx
  unsigned int v10; // ebx
  ULONG v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rdi
  ULONG v14; // r13d
  int v15; // r11d
  unsigned __int8 v16; // r9
  __int64 v17; // rsi
  ULONG v18; // edi
  unsigned __int8 j; // r9
  ULONG v20; // r8d
  unsigned __int8 *v21; // rsi
  __int64 v22; // r12
  int v23; // r15d
  char k; // si
  signed int v25; // ebp
  __int64 v26; // r8
  _RTL_BITMAP_RUN *m; // r14
  signed int v28; // ebp
  __int64 v29; // r14
  _RTL_BITMAP_RUN *i; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  _RTL_BITMAP_RUN *v33; // rdx
  signed int v34; // edx
  __int64 v36; // r8
  _RTL_BITMAP_RUN *n; // r9
  unsigned int v38; // [rsp+0h] [rbp-58h]
  unsigned int v39; // [rsp+4h] [rbp-54h]
  ULONG v40; // [rsp+60h] [rbp+8h]

  v4 = RunArray;
  v5 = SizeOfRunArray;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v7 = LocateLongestRuns;
  Buffer = BitMapHeader->Buffer;
  v9 = BitMapHeader->SizeOfBitMap & 7;
  v39 = BitMapHeader->SizeOfBitMap;
  v38 = v9;
  v10 = (BitMapHeader->SizeOfBitMap >> 3) + (v9 != 0);
  v11 = 0;
  v12 = 0;
  v40 = 0;
  LODWORD(v13) = 0;
  v14 = 0;
  v15 = 0;
  while ( v12 < v10 )
  {
    v16 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v12 == v10 - 1 && v9 )
      v16 |= byte_18017B818[SizeOfBitMap & 7];
    if ( !v16 )
    {
      LODWORD(v13) = v13 + 8;
      goto LABEL_6;
    }
    v17 = (unsigned __int8)RtlpBitsClearLow[v16];
    v18 = v17 + v13;
    if ( v18 )
    {
      if ( v11 < v5 )
      {
        v40 = ++v11;
LABEL_26:
        v28 = v11 - 2;
        if ( v7 )
        {
          v29 = v28;
          for ( i = &v4[v28 + 1]; v29 >= 0 && i[-1].NumberOfBits < v18; --i )
          {
            --v28;
            --v29;
            *i = i[-1];
          }
          v11 = v40;
          v7 = LocateLongestRuns;
        }
        v31 = v28;
        v5 = SizeOfRunArray;
        v4[v31 + 1].NumberOfBits = v18;
        v4[v31 + 1].StartingIndex = v14;
        if ( !v7 && v11 >= SizeOfRunArray )
          return v11;
        goto LABEL_8;
      }
      if ( v4[v11 - 1].NumberOfBits < v18 )
        goto LABEL_26;
    }
LABEL_8:
    v13 = RtlpBitsClearHigh[v16];
    v14 = v15 - v13 + 8;
    for ( j = *((_BYTE *)&unk_18017B820 - v13) | byte_18018A108[v17] | v16; ; j |= k )
    {
      v20 = v11;
      if ( j == 0xFF )
        break;
      v21 = (unsigned __int8 *)&RtlpBitsClearAnywhere + j;
      if ( v11 >= v5 && v4[v11 - 1].NumberOfBits >= *v21 )
        break;
      v22 = *v21;
      v23 = 0;
      for ( k = byte_18018A108[v22]; ((unsigned __int8)k & j) != 0; ++v23 )
        k *= 2;
      ++v11;
      if ( v20 >= v5 )
        v11 = v20;
      v40 = v11;
      v25 = v11 - 2;
      if ( LocateLongestRuns )
      {
        v26 = v25;
        for ( m = &RunArray[v25 + 1]; v26 >= 0 && m[-1].NumberOfBits < (unsigned int)v22; --m )
        {
          --v25;
          --v26;
          *m = m[-1];
        }
        v11 = v40;
      }
      v32 = v25;
      v5 = SizeOfRunArray;
      v33 = &RunArray[v32];
      LODWORD(v32) = v15 + v23;
      v33[1].NumberOfBits = v22;
      v7 = LocateLongestRuns;
      v33[1].StartingIndex = v32;
      if ( !LocateLongestRuns && v11 >= SizeOfRunArray )
        return v11;
      v4 = RunArray;
    }
    LOBYTE(SizeOfBitMap) = v39;
    v9 = v38;
LABEL_6:
    ++v12;
    v15 += 8;
  }
  if ( (_DWORD)v13 )
  {
    if ( v11 < v5 )
    {
      ++v11;
LABEL_44:
      v34 = v11 - 2;
      if ( v7 )
      {
        v36 = v34;
        for ( n = &v4[v34 + 1]; v36 >= 0 && n[-1].NumberOfBits < (unsigned int)v13; --n )
        {
          --v34;
          --v36;
          *n = n[-1];
        }
      }
      v4[v34 + 1].NumberOfBits = v13;
      v4[v34 + 1].StartingIndex = v14;
    }
    else if ( v4[v11 - 1].NumberOfBits < (unsigned int)v13 )
    {
      goto LABEL_44;
    }
  }
  return v11;
}
