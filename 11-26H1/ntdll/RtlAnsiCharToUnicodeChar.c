/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1800B7C80
 * Callers:
 *     toupper @ 0x18012D5E0 (toupper.c)
 *     _mbstrlen @ 0x180131548 (_mbstrlen.c)
 *     mbtowc @ 0x1801324B0 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x180134C94 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  int v2; // edx
  const CHAR *v3; // r9
  UCHAR v4; // al
  ULONG UTF8StringByteCount; // edi
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // rsi
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // r10
  unsigned __int16 *DBCSOffsets; // r14
  WCHAR *p_UnicodeStringDestination; // r8
  ULONG v12; // r11d
  __int64 v13; // r8
  WCHAR *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 *v19; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  _InterlockedOr(v20, 0);
  v2 = 1;
  if ( CodePageTable.CodePage != 0xFDE9 && GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v20, 0);
    v3 = (const CHAR *)*SourceCharacter;
    if ( *(_WORD *)(qword_1801C5020 + 2LL * **SourceCharacter) )
    {
      UTF8StringByteCount = 2;
      goto LABEL_6;
    }
    goto LABEL_19;
  }
  v3 = (const CHAR *)*SourceCharacter;
  v4 = **SourceCharacter;
  if ( v4 < 0xC0u )
  {
LABEL_19:
    UTF8StringByteCount = 1;
    goto LABEL_6;
  }
  if ( v4 < 0xE0u )
  {
    UTF8StringByteCount = 2;
  }
  else if ( v4 >= 0xF0u )
  {
    UTF8StringByteCount = 1;
    if ( v4 < 0xF8u )
      UTF8StringByteCount = 4;
  }
  else
  {
    UTF8StringByteCount = 3;
  }
LABEL_6:
  _InterlockedOr(v20, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    CodePage = Utf8TableInfo;
    p_MultiByteTable = (unsigned __int16 **)&xmmword_1801C5070;
    DBCSCodePage = WORD6(Utf8TableInfo);
    MultiByteTable = (unsigned __int16 *)xmmword_1801C5070;
    DBCSOffsets = (unsigned __int16 *)qword_1801C5088;
  }
  else
  {
    _InterlockedOr(v20, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v12 = UTF8StringByteCount;
  if ( CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
  }
  else if ( DBCSCodePage )
  {
    while ( v2 && v12 )
    {
      --v2;
      --v12;
      v17 = *(unsigned __int8 *)v3;
      v18 = DBCSOffsets[v17];
      if ( (_WORD)v18 )
      {
        if ( !v12 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v19 = (unsigned __int8 *)(v3 + 1);
        --v12;
        *p_UnicodeStringDestination++ = DBCSOffsets[*v19 + v18];
        v3 = (const CHAR *)(v19 + 1);
      }
      else
      {
        *p_UnicodeStringDestination++ = (*p_MultiByteTable)[v17];
        ++v3;
      }
    }
  }
  else
  {
    v13 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v13 = 1LL;
    v14 = &UnicodeStringDestination;
    do
    {
      v15 = *(unsigned __int8 *)v3;
      ++v14;
      ++v3;
      *(v14 - 1) = MultiByteTable[v15];
      --v13;
    }
    while ( v13 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
