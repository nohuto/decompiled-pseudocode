/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x14097D9D0
 * Callers:
 *     RtlOemToUnicodeN @ 0x14097E070 (RtlOemToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x14097DB50 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  PWCH v9; // r11
  ULONG v10; // r9d
  ULONG v11; // eax
  ULONG v12; // edx
  unsigned __int16 *MultiByteTable; // r10
  PCH v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  PCH v18; // rbx
  unsigned __int16 *DBCSOffsets; // rsi
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG *v23; // r8
  NTSTATUS v24; // ebx
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v9 = UnicodeString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v23 = (ULONG *)&v25;
    if ( BytesInUnicodeString )
      v23 = BytesInUnicodeString;
    v24 = 0;
    if ( BytesInCustomCPString )
    {
      if ( RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v23, CustomCPString, BytesInCustomCPString) == -1073741789 )
        return -2147483643;
      return v24;
    }
    else
    {
      *v23 = 0;
      return 0;
    }
  }
  else
  {
    v10 = BytesInCustomCPString;
    v11 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      v18 = CustomCPString;
      DBCSOffsets = CustomCP->DBCSOffsets;
      v20 = (int)UnicodeString;
      while ( v11 && v10 )
      {
        --v11;
        --v10;
        v21 = (unsigned __int8)*v18;
        v22 = DBCSOffsets[v21];
        if ( (_WORD)v22 )
        {
          if ( !v10 )
          {
            *v9 = 0;
            LODWORD(v9) = (_DWORD)v9 + 2;
            break;
          }
          --v10;
          *v9++ = DBCSOffsets[v22 + (unsigned __int8)v18[1]];
          v18 += 2;
        }
        else
        {
          *v9++ = CustomCP->MultiByteTable[v21];
          ++v18;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v9 - v20;
    }
    else
    {
      v12 = BytesInCustomCPString;
      if ( v11 < BytesInCustomCPString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      MultiByteTable = CustomCP->MultiByteTable;
      if ( v12 )
      {
        v14 = CustomCPString;
        v15 = v12;
        do
        {
          v16 = (unsigned __int8)*v14;
          ++v9;
          ++v14;
          *(v9 - 1) = MultiByteTable[v16];
          --v15;
        }
        while ( v15 );
      }
    }
    return v11 < v10 ? 0x80000005 : 0;
  }
}
