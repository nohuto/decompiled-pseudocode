/*
 * XREFs of SmpParseCommandLine @ 0x140004280
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140002CA0 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x1400032A0 (SmpStartCsr.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FA78 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     RtlStringCbPrintfW @ 0x140004B90 (RtlStringCbPrintfW.c)
 *     SmpExpandEnvironmentString @ 0x1400087C0 (SmpExpandEnvironmentString.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpParseCommandLine(
        _OWORD *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *DestinationString)
{
  wint_t *i; // rdi
  unsigned __int16 v9; // si
  wint_t *v10; // r15
  int v11; // ebx
  __int64 j; // r14
  WCHAR *Heap; // rax
  __int16 v14; // ax
  NTSTATUS v15; // ebx
  WCHAR *v16; // r15
  ULONG v17; // r15d
  SIZE_T MaximumLength; // r8
  struct _UNICODE_STRING *v20; // r15
  PUNICODE_STRING v21; // r14
  int v22; // eax
  __int64 v23; // rbx
  WCHAR *v24; // rax
  void *v25; // rcx
  SIZE_T v26; // r8
  UNICODE_STRING String1; // [rsp+40h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PWSTR PartName; // [rsp+60h] [rbp-A0h] BYREF
  PUNICODE_STRING NtPathName; // [rsp+68h] [rbp-98h]
  UNICODE_STRING Name; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v32; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING Source; // [rsp+90h] [rbp-70h]
  WCHAR DosPathName[264]; // [rsp+A0h] [rbp-60h] BYREF

  NtPathName = a3;
  Source = DestinationString;
  PartName = 0LL;
  *(_QWORD *)&Name.Length = 655368LL;
  Name.Buffer = (PWSTR)L"Path";
  String1 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  *(_OWORD *)Src = *a1;
  i = (wint_t *)Src[1];
  v9 = (unsigned __int16)Src[0];
  while ( 1 )
  {
    RtlInitUnicodeString(&String1, 0LL);
    v10 = i;
    if ( v9 )
    {
      v11 = 0;
      do
      {
        if ( !iswctype(*v10, 8u) )
          break;
        ++v10;
        v11 += 2;
      }
      while ( (unsigned __int16)v11 < v9 );
      for ( i = v10; (unsigned __int16)v11 < v9; v11 += 2 )
      {
        if ( iswctype(*i, 8u) )
          break;
        ++i;
      }
      for ( j = (unsigned int)((_DWORD)i - (_DWORD)v10); (unsigned __int16)v11 < v9; v11 += 2 )
      {
        if ( !iswctype(*i, 8u) )
          break;
        ++i;
      }
      if ( (_DWORD)j )
      {
        Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, j + 2);
        String1.Buffer = Heap;
        if ( !Heap )
          return 3221225473LL;
        String1.Length = j;
        String1.MaximumLength = j + 2;
        memcpy_0(Heap, v10, (unsigned int)j);
        String1.Buffer[(unsigned __int64)(unsigned int)j >> 1] = 0;
      }
      v14 = LOWORD(Src[1]) - (_WORD)i;
      Src[1] = i;
      v9 += v14;
    }
    v15 = 0;
    if ( !String1.Buffer )
      return 3221225473LL;
    if ( !a2 )
    {
      v15 = RtlStringCbPrintfW(DosPathName, 0x208uLL, L"%s");
      goto LABEL_31;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
    {
      *a2 |= 1u;
      goto LABEL_66;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpASyncKeyword, 1u) )
    {
      *a2 |= 2u;
      goto LABEL_66;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpSecureKeyword, 1u) )
    {
      *a2 |= 0x8000u;
      goto LABEL_66;
    }
    if ( !RtlEqualUnicodeString(&String1, &SmpAutoChkKeyword, 1u) )
      break;
    if ( !SmpPrimarySmss )
      return 3221225485LL;
    if ( SmpHostSmss )
      *a2 |= 4u;
LABEL_66:
    RtlFreeUnicodeString(&String1);
  }
  if ( (*a2 & 0x400) != 0 )
  {
    v20 = NtPathName;
    *NtPathName = String1;
    goto LABEL_48;
  }
  if ( (*a2 & 8) != 0 )
  {
    HIDWORD(Src[0]) = 0;
    if ( String1.MaximumLength >= 0x208u )
    {
      MaximumLength = String1.MaximumLength;
      WORD1(Src[0]) = String1.MaximumLength;
    }
    else
    {
      WORD1(Src[0]) = 520;
      MaximumLength = 520LL;
    }
    Src[1] = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, MaximumLength);
    if ( Src[1] )
    {
      LOWORD(Src[0]) = 0;
      v15 = RtlExpandEnvironmentStrings_U(SmpDefaultEnvironment, &String1, (PUNICODE_STRING)Src, 0LL);
      v25 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
      if ( v15 >= 0 )
      {
        RtlFreeHeap(v25, 0, String1.Buffer);
        String1 = *(UNICODE_STRING *)Src;
        goto LABEL_20;
      }
      RtlFreeHeap(v25, 0, Src[1]);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v15;
  }
LABEL_20:
  if ( RtlCompareUnicodeString(&SmpS0InitCmd, &String1, 0)
    && RtlCompareUnicodeString(&SmscpDefaultCmd, &String1, 0)
    && RtlCompareUnicodeString(&SmpSetupClCmd, &String1, 0) )
  {
    v32 = 0LL;
    RtlInitUnicodeString(&v32, 0LL);
    v16 = SmpDefaultEnvironment;
    Src[0] = (void *)0x10000000;
    Src[1] = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 0x1000uLL);
    if ( Src[1] )
    {
      v15 = RtlQueryEnvironmentVariable_U(v16, &Name, (PUNICODE_STRING)Src);
      if ( v15 == -1073741789 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Src[1]);
        v26 = (unsigned __int16)(LOWORD(Src[0]) + 2);
        LOWORD(Src[0]) = 0;
        WORD1(Src[0]) = v26;
        Src[1] = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v26);
        if ( Src[1] )
        {
          v15 = RtlQueryEnvironmentVariable_U(v16, &Name, (PUNICODE_STRING)Src);
          goto LABEL_25;
        }
        v17 = 0;
        v15 = -1073741670;
      }
      else
      {
LABEL_25:
        if ( v15 < 0 )
        {
          SmpLogFailureString((__int64)"SmpQueryEnvVariable", 0x245Eu, (__int64)Name.Buffer, v15);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Src[1]);
          v17 = 0;
          v15 = -1073741772;
        }
        else
        {
          v32 = *(struct _UNICODE_STRING *)Src;
          v17 = RtlDosSearchPath_U(
                  (PCWSTR)_mm_srli_si128(*(__m128i *)Src, 8).m128i_i64[0],
                  String1.Buffer,
                  L".exe",
                  0x208u,
                  DosPathName,
                  &PartName);
        }
      }
    }
    else
    {
      v17 = 0;
      v15 = -1073741670;
    }
    if ( v32.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v32.Buffer);
  }
  else
  {
    v17 = 0;
  }
  if ( v15 < 0
    || v17
    || RtlDosSearchPath_U(SmpDefaultLibPath.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName) )
  {
LABEL_31:
    RtlFreeUnicodeString(&String1);
    if ( v15 < 0 )
      return (unsigned int)v15;
    v20 = NtPathName;
    if ( !RtlDosPathNameToNtPathName_U(DosPathName, NtPathName, 0LL, 0LL) )
    {
      v15 = -1073741767;
      SmpLogFailureString((__int64)"SmpParseCommandLine", 0x2582u, (__int64)DosPathName, 0xC0000039);
      return (unsigned int)v15;
    }
    if ( !a4 )
      goto LABEL_48;
    if ( PartName > DosPathName )
    {
      *--PartName = 0;
      if ( RtlCreateUnicodeString(a4, DosPathName) == 1 )
      {
LABEL_48:
        v21 = Source;
        RtlInitUnicodeString(Source, 0LL);
        v15 = 0;
        if ( !v9 )
        {
LABEL_54:
          if ( !a2 )
            return (unsigned int)v15;
          if ( (*(_BYTE *)a2 & 8) != 0 )
          {
            if ( v21->Length )
              v15 = SmpExpandEnvironmentString(v21);
          }
          if ( v15 >= 0 )
            return (unsigned int)v15;
          goto LABEL_59;
        }
        do
        {
          if ( !iswctype(*i, 8u) )
            break;
          ++i;
          v15 += 2;
        }
        while ( (unsigned __int16)v15 < v9 );
        v22 = 2 * v15;
        v23 = (unsigned int)v9 - 2 * v15;
        if ( v9 == v22 )
        {
LABEL_53:
          v15 = 0;
          goto LABEL_54;
        }
        v24 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v23 + 2);
        v21->Buffer = v24;
        if ( v24 )
        {
          v21->Length = v23;
          v21->MaximumLength = v23 + 2;
          memcpy_0(v24, i, (unsigned int)v23);
          v21->Buffer[(unsigned __int64)(unsigned int)v23 >> 1] = 0;
          goto LABEL_53;
        }
        v15 = -1073741801;
LABEL_59:
        RtlFreeUnicodeString(v20);
        if ( a4 )
        {
          RtlFreeUnicodeString(a4);
          return (unsigned int)v15;
        }
        return (unsigned int)v15;
      }
      v15 = -1073741823;
    }
    RtlInitUnicodeString(a4, 0LL);
    if ( v15 < 0 )
      goto LABEL_59;
    goto LABEL_48;
  }
  *a2 |= 0x10u;
  *NtPathName = String1;
  if ( a4 )
    RtlInitUnicodeString(a4, 0LL);
  return 0LL;
}
