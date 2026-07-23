/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x180025D10
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1800240D0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlpComputeLangListCheckSum @ 0x180054740 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToUnicodeString @ 0x180055710 (RtlIntegerToUnicodeString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     ApiSetResolveToHost2 @ 0x18013B31C (ApiSetResolveToHost2.c)
 *     RtlInt64ToUnicodeString @ 0x180141860 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // r9d
  ULONG UTF8StringByteCount; // eax
  char *Buffer; // r10
  unsigned int v9; // ebx
  wchar_t *Atom; // rax
  NTSTATUS result; // eax
  ULONG Length; // r9d
  char *v13; // rsi
  ULONG v14; // edx
  WCHAR *v15; // r11
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r14
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // rbx
  unsigned __int16 *DBCSOffsets; // r10
  ULONG v21; // edx
  ULONG v22; // r10d
  ULONG v23; // r8d
  int v24; // ebx
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rsi
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  ULONG v33; // [rsp+30h] [rbp-68h]
  ULONG v34; // [rsp+34h] [rbp-64h]
  ULONG v35; // [rsp+38h] [rbp-60h]
  NTSTATUS v36; // [rsp+40h] [rbp-58h]
  WCHAR *v37; // [rsp+48h] [rbp-50h]
  char *v38; // [rsp+50h] [rbp-48h]
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v40; // [rsp+B0h] [rbp+18h]
  int v41; // [rsp+B8h] [rbp+20h]

  v40 = AllocateDestinationString;
  v6 = 0;
  UnicodeStringActualByteCount = 0;
  UTF8StringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v32, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( UTF8StringByteCount )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
      v6 = UnicodeStringActualByteCount;
    }
  }
  else
  {
    _InterlockedOr(v32, 0);
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v31 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C5020 + 2 * v31) )
        {
          if ( !UTF8StringByteCount )
          {
            v6 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * UTF8StringByteCount;
    }
  }
  v9 = v6 + 2;
  UnicodeStringActualByteCount = v6 + 2;
  if ( v6 + 2 > 0xFFFE )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Atom = (wchar_t *)RtlpAllocateAtom(v9);
    DestinationString->Buffer = Atom;
    if ( Atom )
    {
      DestinationString->MaximumLength = v9;
      result = 0;
    }
    else
    {
      DestinationString->MaximumLength = 0;
      result = -1073741801;
      LOWORD(v9) = 0;
    }
  }
  else
  {
    if ( v9 <= DestinationString->MaximumLength && DestinationString->Buffer )
      result = 0;
    else
      result = -2147483643;
    LOWORD(v9) = DestinationString->MaximumLength;
  }
  v36 = result;
  if ( result >= 0 )
  {
    Length = SourceString->Length;
    v13 = SourceString->Buffer;
    v14 = (unsigned __int16)v9;
    v15 = DestinationString->Buffer;
    _InterlockedOr(v32, 0);
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
      _InterlockedOr(v32, 0);
      CodePage = GlobalRtlNlsState.CodePage;
      p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
      DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    }
    v35 = Length;
    v38 = v13;
    v37 = v15;
    v33 = 0;
    v34 = 0;
    if ( CodePage == 0xFDE9 )
    {
      v41 = 0;
      if ( Length )
      {
        RtlUTF8ToUnicodeN(v15, v14, &UnicodeStringActualByteCount, v13, Length);
        v22 = UnicodeStringActualByteCount;
      }
      else
      {
        v22 = 0;
        UnicodeStringActualByteCount = 0;
      }
    }
    else
    {
      v21 = v14 >> 1;
      v34 = v21;
      if ( DBCSCodePage )
      {
        v24 = (int)v15;
        v25 = (int)v15;
        v26 = (int)v15;
        while ( v21 )
        {
          v25 = v26;
          if ( !Length )
            break;
          v34 = --v21;
          v35 = --Length;
          v26 = (_DWORD)v15 + 2;
          v27 = (unsigned __int8)*v13;
          v28 = DBCSOffsets[v27];
          v37 = v15 + 1;
          if ( (_WORD)v28 )
          {
            if ( !Length )
            {
              *v15 = 0;
              v25 = (_DWORD)v15 + 2;
              break;
            }
            v29 = v13 + 1;
            v38 = v29;
            *v15 = DBCSOffsets[v28 + (unsigned __int8)*v29];
            v13 = v29 + 1;
            v35 = --Length;
          }
          else
          {
            *v15 = (*p_MultiByteTable)[v27];
            ++v13;
          }
          v25 = (_DWORD)v15 + 2;
          v38 = v13;
          ++v15;
        }
        UnicodeStringActualByteCount = v25 - v24;
        v22 = v25 - v24;
      }
      else
      {
        if ( v21 < Length )
          Length = v21;
        v22 = 2 * Length;
        UnicodeStringActualByteCount = 2 * Length;
        v23 = 0;
        v33 = 0;
        while ( v23 < Length )
        {
          v15[v23] = MultiByteTable[(unsigned __int8)v13[v23]];
          v33 = ++v23;
        }
      }
    }
    v36 = 0;
    DestinationString->Length = v22;
    DestinationString->Buffer[(unsigned __int64)v22 >> 1] = 0;
    return 0;
  }
  return result;
}
