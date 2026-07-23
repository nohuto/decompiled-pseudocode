/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x14097BE40
 * Callers:
 *     RtlUnicodeToOemN @ 0x14097B010 (RtlUnicodeToOemN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCH v7; // rax
  ULONG v8; // r8d
  _WORD *WideCharTable; // rbx
  int v10; // esi
  PWCH v11; // r11
  __int64 v12; // rcx
  __int16 v13; // dx
  ULONG v15; // edx
  _BYTE *v16; // rbx
  PWCH v17; // r9
  __int64 v18; // r11
  __int64 v19; // rcx
  ULONG v20; // ecx
  ULONG *v21; // r8
  NTSTATUS v22; // ebx
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v7 = CustomCPString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v21 = (ULONG *)&v23;
    if ( BytesInCustomCPString )
      v21 = BytesInCustomCPString;
    v22 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(CustomCPString, MaxBytesInCustomCPString, v21, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
      return v22;
    }
    else
    {
      *v21 = 0;
      return 0;
    }
  }
  else
  {
    v8 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      v10 = (int)CustomCPString;
      if ( v8 )
      {
        v11 = UnicodeString;
        while ( MaxBytesInCustomCPString )
        {
          v12 = *v11++;
          v13 = WideCharTable[v12];
          if ( HIBYTE(v13) )
          {
            v20 = MaxBytesInCustomCPString--;
            if ( v20 < 2 )
              break;
            *v7++ = HIBYTE(v13);
          }
          *v7 = v13;
          --MaxBytesInCustomCPString;
          ++v7;
          if ( !--v8 )
            break;
        }
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = (_DWORD)v7 - v10;
    }
    else
    {
      v15 = MaxBytesInCustomCPString;
      if ( v8 < MaxBytesInCustomCPString )
        v15 = BytesInUnicodeString >> 1;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v15;
      v16 = CustomCP->WideCharTable;
      if ( v15 )
      {
        v17 = UnicodeString;
        v18 = v15;
        do
        {
          v19 = *v17;
          ++v7;
          ++v17;
          *(v7 - 1) = v16[v19];
          --v18;
        }
        while ( v18 );
      }
    }
    return MaxBytesInCustomCPString < v8 ? 0x80000005 : 0;
  }
}
