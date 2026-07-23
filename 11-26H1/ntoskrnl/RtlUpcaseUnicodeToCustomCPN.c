/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1408079A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // ebx
  ULONG v9; // edi
  int v10; // edx
  struct _LIST_ENTRY *Flink; // rcx
  ULONG *v12; // r9
  _BYTE *v13; // r11
  ULONG v14; // eax
  _BYTE *v15; // r14
  PWCH v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r15
  unsigned __int16 v19; // ax
  _BYTE *v20; // r11
  unsigned __int16 *DBCSOffsets; // r15
  int v22; // r12d
  _WORD *WideCharTable; // r13
  PWCH v24; // rbp
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  __int16 v30; // dx
  unsigned int v31; // eax
  int v33; // [rsp+20h] [rbp-48h]

  v7 = MaxBytesInCustomCPString;
  v9 = BytesInUnicodeString >> 1;
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v22 = v10;
    WideCharTable = CustomCP->WideCharTable;
    v33 = v10;
    if ( v9 )
    {
      v24 = UnicodeString;
      v25 = (__int64)Flink;
      do
      {
        if ( !v7 )
          break;
        v26 = *v24++;
        v27 = (unsigned __int16)WideCharTable[v26];
        v28 = DBCSOffsets[v27 >> 8];
        if ( (_WORD)v28 )
          v29 = DBCSOffsets[v28 + (unsigned __int8)v27];
        else
          v29 = CustomCP->MultiByteTable[(unsigned __int8)v27];
        v30 = WideCharTable[(unsigned __int16)NLS_UPCASE(v25, v29)];
        if ( HIBYTE(v30) )
        {
          v31 = v7--;
          if ( v31 < 2 )
            break;
          *v13++ = HIBYTE(v30);
        }
        *v13 = v30;
        --v7;
        LODWORD(v13) = (_DWORD)v13 + 1;
        --v9;
      }
      while ( v9 );
      v22 = v33;
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v13 - v22;
  }
  else
  {
    v14 = v7;
    if ( v9 < v7 )
      v14 = BytesInUnicodeString >> 1;
    if ( v12 )
      *v12 = v14;
    v15 = CustomCP->WideCharTable;
    if ( v14 )
    {
      v16 = UnicodeString;
      v17 = (__int64)Flink;
      v18 = v14;
      do
      {
        v19 = NLS_UPCASE(v17, CustomCP->MultiByteTable[(unsigned __int8)v15[*v16++]]);
        *v20 = v15[v19];
        --v18;
      }
      while ( v18 );
      v7 = MaxBytesInCustomCPString;
    }
  }
  return v7 < v9 ? 0x80000005 : 0;
}
