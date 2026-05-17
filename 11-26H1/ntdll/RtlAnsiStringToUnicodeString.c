/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x18003B7A0
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180009010 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToUnicodeString @ 0x180009FE0 (RtlIntegerToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180039B60 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     ApiSetResolveToHost2 @ 0x18013B5AC (ApiSetResolveToHost2.c)
 *     RtlInt64ToUnicodeString @ 0x180141960 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int v6; // r9d
  int Length; // eax
  char *Buffer; // r10
  unsigned int v9; // ebx
  wchar_t *Atom; // rax
  NTSTATUS result; // eax
  unsigned int v12; // r9d
  char *v13; // rsi
  unsigned int v14; // edx
  wchar_t *v15; // r11
  __int16 v16; // cx
  __int64 *v17; // r14
  __int16 v18; // ax
  __int64 v19; // rbx
  __int64 v20; // r10
  unsigned int v21; // edx
  unsigned int v22; // r10d
  unsigned int v23; // r8d
  int v24; // ebx
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rsi
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  int v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+34h] [rbp-64h]
  int v35; // [rsp+38h] [rbp-60h]
  NTSTATUS v36; // [rsp+40h] [rbp-58h]
  wchar_t *v37; // [rsp+48h] [rbp-50h]
  char *v38; // [rsp+50h] [rbp-48h]
  int v39; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v40; // [rsp+B0h] [rbp+18h]
  int v41; // [rsp+B8h] [rbp+20h]

  v40 = AllocateDestinationString;
  v6 = 0;
  v39 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v32, 0);
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( Length )
    {
      RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v39, (_DWORD)Buffer, Length);
      v6 = v39;
    }
  }
  else
  {
    _InterlockedOr(v32, 0);
    if ( word_1801C5F9C )
    {
      while ( Length-- )
      {
        v31 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801C6020 + 2 * v31) )
        {
          if ( !Length )
          {
            v6 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * Length;
    }
  }
  v9 = v6 + 2;
  v39 = v6 + 2;
  if ( (unsigned int)(v6 + 2) > 0xFFFE )
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
    v12 = SourceString->Length;
    v13 = SourceString->Buffer;
    v14 = (unsigned __int16)v9;
    v15 = DestinationString->Buffer;
    _InterlockedOr(v32, 0);
    if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
    {
      v16 = Utf8TableInfo;
      v17 = (__int64 *)&xmmword_1801C6070;
      v18 = WORD6(Utf8TableInfo);
      v19 = xmmword_1801C6070;
      v20 = qword_1801C6088;
    }
    else
    {
      _InterlockedOr(v32, 0);
      v16 = GlobalRtlNlsState;
      v17 = &qword_1801C5FB0;
      v18 = word_1801C5F9C;
      v19 = qword_1801C5FB0;
      v20 = qword_1801C5FC8;
    }
    v35 = v12;
    v38 = v13;
    v37 = v15;
    v33 = 0;
    v34 = 0;
    if ( v16 == -535 )
    {
      v41 = 0;
      if ( v12 )
      {
        RtlUTF8ToUnicodeN((_DWORD)v15, v14, (unsigned int)&v39, (_DWORD)v13, v12);
        v22 = v39;
      }
      else
      {
        v22 = 0;
        v39 = 0;
      }
    }
    else
    {
      v21 = v14 >> 1;
      v34 = v21;
      if ( v18 )
      {
        v24 = (int)v15;
        v25 = (int)v15;
        v26 = (int)v15;
        while ( v21 )
        {
          v25 = v26;
          if ( !v12 )
            break;
          v34 = --v21;
          v35 = --v12;
          v26 = (_DWORD)v15 + 2;
          v27 = 2LL * (unsigned __int8)*v13;
          v28 = *(unsigned __int16 *)(v27 + v20);
          v37 = v15 + 1;
          if ( (_WORD)v28 )
          {
            if ( !v12 )
            {
              *v15 = 0;
              v25 = (_DWORD)v15 + 2;
              break;
            }
            v29 = v13 + 1;
            v38 = v29;
            *v15 = *(_WORD *)(v20 + 2 * (v28 + (unsigned __int8)*v29));
            v13 = v29 + 1;
            v35 = --v12;
          }
          else
          {
            *v15 = *(_WORD *)(v27 + *v17);
            ++v13;
          }
          v25 = (_DWORD)v15 + 2;
          v38 = v13;
          ++v15;
        }
        v39 = v25 - v24;
        v22 = v25 - v24;
      }
      else
      {
        if ( v21 < v12 )
          v12 = v21;
        v22 = 2 * v12;
        v39 = 2 * v12;
        v23 = 0;
        v33 = 0;
        while ( v23 < v12 )
        {
          v15[v23] = *(_WORD *)(v19 + 2LL * (unsigned __int8)v13[v23]);
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
