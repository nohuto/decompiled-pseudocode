/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x14096D090
 * Callers:
 *     RtlOemToUnicodeN @ 0x14096E4D0 (RtlOemToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x14096D210 (RtlUTF8ToUnicodeN.c)
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
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG *v24; // r8
  NTSTATUS v25; // ebx
  char v26; // [rsp+40h] [rbp+8h] BYREF

  v9 = UnicodeString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v24 = (ULONG *)&v26;
    if ( BytesInUnicodeString )
      v24 = BytesInUnicodeString;
    v25 = 0;
    if ( BytesInCustomCPString )
    {
      if ( RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v24, CustomCPString, BytesInCustomCPString) == -1073741789 )
        return -2147483643;
      return v25;
    }
    else
    {
      *v24 = 0;
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
      while ( 1 )
      {
        v21 = (int)v9;
        if ( !v11 || !v10 )
          break;
        --v11;
        --v10;
        v22 = (unsigned __int8)*v18;
        v23 = DBCSOffsets[v22];
        if ( (_WORD)v23 )
        {
          if ( !v10 )
          {
            v21 = (_DWORD)v9 + 2;
            *v9 = 0;
            break;
          }
          --v10;
          *v9++ = DBCSOffsets[v23 + (unsigned __int8)v18[1]];
          v18 += 2;
        }
        else
        {
          *v9++ = CustomCP->MultiByteTable[v22];
          ++v18;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = v21 - v20;
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
