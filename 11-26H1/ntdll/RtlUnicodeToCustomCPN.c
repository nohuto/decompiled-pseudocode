/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x18001F960
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180021500 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeToOemN @ 0x180021780 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r10d
  PCH v7; // r11
  ULONG v8; // eax
  ULONG v9; // edx
  _BYTE *v10; // r8
  _WORD *WideCharTable; // rdi
  PWCH v13; // rsi
  __int64 v14; // rcx
  __int16 v15; // r8
  PWCH v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  ULONG *v19; // r8
  NTSTATUS v20; // ebx
  unsigned int v21; // ecx
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v6 = MaxBytesInCustomCPString;
  v7 = CustomCPString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v19 = (ULONG *)&v22;
    if ( BytesInCustomCPString )
      v19 = BytesInCustomCPString;
    v20 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(CustomCPString, v6, v19, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
      return v20;
    }
    else
    {
      *v19 = 0;
      return 0;
    }
  }
  else
  {
    v8 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      if ( v8 )
      {
        v13 = UnicodeString;
        while ( v6 )
        {
          v14 = *v13++;
          v15 = WideCharTable[v14];
          if ( HIBYTE(v15) )
          {
            v21 = v6--;
            if ( v21 < 2 )
              break;
            *v7++ = HIBYTE(v15);
          }
          *v7 = v15;
          --v6;
          ++v7;
          if ( !--v8 )
            break;
        }
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = (_DWORD)v7 - (_DWORD)CustomCPString;
    }
    else
    {
      v9 = MaxBytesInCustomCPString;
      if ( v8 < MaxBytesInCustomCPString )
        v9 = BytesInUnicodeString >> 1;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v9;
      v10 = CustomCP->WideCharTable;
      if ( v9 )
      {
        v16 = UnicodeString;
        v17 = v9;
        do
        {
          v18 = *v16;
          ++v7;
          ++v16;
          *(v7 - 1) = v10[v18];
          --v17;
        }
        while ( v17 );
      }
    }
    return v6 < v8 ? 0x80000005 : 0;
  }
}
