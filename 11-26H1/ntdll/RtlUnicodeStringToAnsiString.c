/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18001F620
 * Callers:
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 *     GetModuleFullPathName @ 0x18002052C (GetModuleFullPathName.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r12
  NTSTATUS v7; // ebx
  ULONG v8; // r10d
  ULONG Length; // eax
  wchar_t *Buffer; // r9
  ULONG v11; // eax
  ULONG v12; // edi
  ULONG MaximumLength; // edx
  ULONG UnicodeStringByteCount; // ecx
  wchar_t *v15; // r9
  char *v16; // r11
  unsigned __int16 CodePage; // r8
  unsigned __int16 DBCSCodePage; // ax
  _BYTE *WideCharTable; // rdi
  unsigned int v20; // r10d
  ULONG v21; // ecx
  unsigned int v22; // r8d
  int v23; // r15d
  char *v24; // rsi
  __int16 v25; // dx
  unsigned int v26; // eax
  __int16 v28; // dx
  char *Atom; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+38h] [rbp-60h]
  ULONG v33; // [rsp+40h] [rbp-58h]
  int v34; // [rsp+44h] [rbp-54h]
  int v35; // [rsp+48h] [rbp-50h]
  char *v36; // [rsp+50h] [rbp-48h]
  wchar_t *v37; // [rsp+58h] [rbp-40h]
  ULONG v38; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v39; // [rsp+B0h] [rbp+18h]
  ULONG UTF8StringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  v39 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v38 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v30, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( Length )
    {
      RtlUnicodeToUTF8N(0LL, 0, &v38, Buffer, Length);
      v8 = v38;
    }
  }
  else
  {
    _InterlockedOr(v30, 0);
    v11 = Length >> 1;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      for ( ; v11; --v11 )
      {
        v28 = *((_WORD *)GlobalRtlNlsState.WideCharTable + *Buffer++);
        v8 += (HIBYTE(v28) != 0) + 1;
      }
    }
    else
    {
      v8 = v11;
    }
  }
  v12 = v8 + 1;
  UTF8StringActualByteCount = v8 + 1;
  if ( v8 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Atom = (char *)RtlpAllocateAtom(v12);
    DestinationString->Buffer = Atom;
    if ( !Atom )
      return -1073741801;
    DestinationString->MaximumLength = v12;
    LOWORD(MaximumLength) = v12;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v12 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v34 = 0;
  UnicodeStringByteCount = SourceString->Length;
  v15 = SourceString->Buffer;
  v16 = DestinationString->Buffer;
  _InterlockedOr(v30, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = Utf8TableInfo;
    DBCSCodePage = WORD6(Utf8TableInfo);
    WideCharTable = (_BYTE *)*((_QWORD *)&xmmword_1801C5070 + 1);
  }
  else
  {
    _InterlockedOr(v30, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    WideCharTable = GlobalRtlNlsState.WideCharTable;
  }
  v37 = v15;
  v20 = (unsigned __int16)MaximumLength - 1;
  v32 = v20;
  v36 = v16;
  v31 = 0;
  v33 = 0;
  if ( CodePage == 0xFDE9 )
  {
    v35 = 0;
    if ( !UnicodeStringByteCount )
    {
      v20 = 0;
      UTF8StringActualByteCount = 0;
      goto LABEL_31;
    }
    RtlUnicodeToUTF8N(v16, v20, &UTF8StringActualByteCount, v15, UnicodeStringByteCount);
  }
  else
  {
    v21 = UnicodeStringByteCount >> 1;
    v33 = v21;
    if ( !DBCSCodePage )
    {
      if ( v21 < v20 )
        v20 = v21;
      UTF8StringActualByteCount = v20;
      v22 = 0;
      v31 = 0;
      while ( v22 < v20 )
      {
        v16[v22] = WideCharTable[v15[v22]];
        v31 = ++v22;
      }
      goto LABEL_31;
    }
    LOWORD(v38) = 0;
    v23 = (int)v16;
    while ( 1 )
    {
      v24 = v16;
      if ( !v21 || !v20 )
        break;
      v25 = *(_WORD *)&WideCharTable[2 * *v15];
      LOWORD(v38) = v25;
      v37 = ++v15;
      if ( HIBYTE(v25) )
      {
        v26 = v20--;
        v32 = v20;
        if ( v26 < 2 )
          break;
        *v16++ = HIBYTE(v25);
        v36 = v16;
        v24 = v16;
      }
      *v16 = v25;
      v16 = v24 + 1;
      v36 = v24 + 1;
      v32 = --v20;
      v33 = --v21;
    }
    UTF8StringActualByteCount = (_DWORD)v16 - v23;
  }
  v20 = UTF8StringActualByteCount;
LABEL_31:
  v34 = 0;
  DestinationString->Buffer[v20] = 0;
  DestinationString->Length = v20;
  if ( v6 )
    return -2147483643;
  return v7;
}
