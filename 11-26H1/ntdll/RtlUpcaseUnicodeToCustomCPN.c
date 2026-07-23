/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x18013C3C0
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // ebx
  PULONG v8; // r14
  ULONG v9; // edi
  _BYTE *v10; // r11
  ULONG v11; // eax
  _BYTE *v12; // r14
  PWCH v13; // rbp
  __int64 v14; // r15
  unsigned __int16 v15; // ax
  _BYTE *v16; // r11
  unsigned __int16 *DBCSOffsets; // r15
  int v18; // r12d
  _WORD *WideCharTable; // r13
  PWCH v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  int v26; // edx
  __int16 v27; // dx
  unsigned int v28; // eax
  int v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp+8h]

  v7 = BytesInUnicodeString >> 1;
  v8 = BytesInCustomCPString;
  v9 = MaxBytesInCustomCPString;
  v31 = qword_1801C5038;
  LODWORD(v10) = (_DWORD)CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v18 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    v30 = (int)CustomCPString;
    if ( v7 )
    {
      v20 = UnicodeString;
      v21 = qword_1801C5038;
      do
      {
        if ( !v9 )
          break;
        v22 = *v20++;
        v23 = (unsigned __int16)WideCharTable[v22];
        v24 = (unsigned __int8)v23;
        v25 = v23 >> 8;
        if ( DBCSOffsets[v25] )
          v26 = DBCSOffsets[DBCSOffsets[v25] + v24];
        else
          v26 = CustomCP->MultiByteTable[v24];
        v27 = WideCharTable[(unsigned __int16)NLS_UPCASE(v21, v26)];
        if ( HIBYTE(v27) )
        {
          v28 = v9--;
          if ( v28 < 2 )
            break;
          *v10++ = HIBYTE(v27);
        }
        *v10 = v27;
        --v9;
        LODWORD(v10) = (_DWORD)v10 + 1;
        --v7;
      }
      while ( v7 );
      v8 = BytesInCustomCPString;
      v18 = v30;
    }
    if ( v8 )
      *v8 = (_DWORD)v10 - v18;
  }
  else
  {
    v11 = MaxBytesInCustomCPString;
    if ( v7 < MaxBytesInCustomCPString )
      v11 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v11;
    v12 = CustomCP->WideCharTable;
    if ( v11 )
    {
      v13 = UnicodeString;
      v14 = v11;
      do
      {
        v15 = NLS_UPCASE(v31, CustomCP->MultiByteTable[(unsigned __int8)v12[*v13++]]);
        *v16 = v12[v15];
        --v14;
      }
      while ( v14 );
      v9 = MaxBytesInCustomCPString;
    }
  }
  return v9 < v7 ? 0x80000005 : 0;
}
