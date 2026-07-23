/*
 * XREFs of LdrpGenerateSnapsUnicodeStrings @ 0x1800338F0
 * Callers:
 *     LdrpEtwLogLoaderSnaps @ 0x180114708 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x180033C60 (RtlStringCchPrintfExW.c)
 *     _vsnprintf @ 0x180128AA0 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGenerateSnapsUnicodeStrings(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char *Format,
        va_list ArgList)
{
  int Args; // ecx
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  ULONG v15; // edx
  ULONG UTF8StringByteCount; // esi
  WCHAR *v17; // r10
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r9
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // r11
  unsigned __int16 *DBCSOffsets; // rbx
  char *v23; // r8
  ULONG v24; // edx
  char *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int8 *v30; // r8
  int UniqueThread; // r8d
  int UniqueProcess; // r9d
  wchar_t *v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-180h]
  char *v36; // [rsp+40h] [rbp-178h]
  __int64 v37; // [rsp+48h] [rbp-170h]
  char *v38; // [rsp+50h] [rbp-168h]
  ULONG UnicodeStringActualByteCount[4]; // [rsp+60h] [rbp-158h] BYREF
  char Buffer[256]; // [rsp+70h] [rbp-148h] BYREF

  *(_QWORD *)UnicodeStringActualByteCount = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
  if ( a1 )
  {
    UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    v38 = (&off_180171218)[2 * a5];
    v37 = a4;
    LODWORD(v36) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v33 = *(wchar_t **)(a2 + 8);
    LODWORD(v35) = UniqueThread;
    result = RtlStringCchPrintfExW(v33, 0, (wchar_t *)L"%04x:%04x @ %08d - %S - %S", UniqueProcess);
  }
  else
  {
    Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
    v36 = (&off_180170128)[2 * a5];
    v35 = a4;
    result = RtlStringCchPrintfExW(*(wchar_t **)(a2 + 8), 0, (wchar_t *)L"%x-%S-%S-", Args);
  }
  if ( !(_DWORD)result || (_DWORD)result == -2147483643 )
  {
    *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2 * LOWORD(UnicodeStringActualByteCount[0]);
    v13 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
    if ( v13 < 0 || (unsigned __int64)v13 > 0xFE )
    {
      v14 = 1;
      Buffer[255] = 0;
    }
    else
    {
      v14 = 256 - v13;
    }
    v15 = *(unsigned __int16 *)(a3 + 2);
    UTF8StringByteCount = 256 - v14;
    v17 = *(WCHAR **)(a3 + 8);
    *(_WORD *)a3 = 2 * (256 - v14);
    _InterlockedOr(v34, 0);
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
      _InterlockedOr(v34, 0);
      CodePage = GlobalRtlNlsState.CodePage;
      p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
      DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    }
    v23 = Buffer;
    if ( CodePage == 0xFDE9 )
    {
      if ( UTF8StringByteCount )
        RtlUTF8ToUnicodeN(v17, v15, UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    }
    else
    {
      v24 = v15 >> 1;
      if ( DBCSCodePage )
      {
        while ( v24 && UTF8StringByteCount )
        {
          --v24;
          --UTF8StringByteCount;
          v28 = (unsigned __int8)*v23;
          v29 = DBCSOffsets[v28];
          if ( (_WORD)v29 )
          {
            if ( !UTF8StringByteCount )
            {
              *v17 = 0;
              return 0LL;
            }
            v30 = (unsigned __int8 *)(v23 + 1);
            --UTF8StringByteCount;
            *v17++ = DBCSOffsets[*v30 + v29];
            v23 = (char *)(v30 + 1);
          }
          else
          {
            *v17++ = (*p_MultiByteTable)[v28];
            ++v23;
          }
        }
      }
      else
      {
        if ( v24 >= UTF8StringByteCount )
          v24 = UTF8StringByteCount;
        if ( v24 )
        {
          v25 = Buffer;
          v26 = v24;
          do
          {
            v27 = (unsigned __int8)*v25;
            ++v17;
            ++v25;
            *(v17 - 1) = MultiByteTable[v27];
            --v26;
          }
          while ( v26 );
        }
      }
    }
    return 0LL;
  }
  return result;
}
