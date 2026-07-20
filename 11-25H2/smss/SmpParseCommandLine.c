/*
 * XREFs of SmpParseCommandLine @ 0x140004FD0
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpExpandEnvironmentString @ 0x140006B50 (SmpExpandEnvironmentString.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpParseCommandLine(
        _OWORD *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString)
{
  int v7; // edi
  unsigned __int16 v8; // si
  wint_t *v9; // r15
  wint_t *i; // rbx
  __int64 j; // r14
  WCHAR *Heap; // rax
  __int16 v13; // ax
  NTSTATUS v14; // ebx
  WCHAR *v15; // rsi
  ULONG v16; // r14d
  USHORT MaximumLength; // ax
  struct _UNICODE_STRING *v19; // r15
  struct _UNICODE_STRING *v20; // r14
  wint_t *v21; // r14
  int v22; // eax
  __int64 v23; // rbx
  WCHAR *v24; // rax
  void *v25; // rcx
  USHORT Length; // ax
  struct _UNICODE_STRING *v27; // r14
  UNICODE_STRING String1; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Value; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-90h]
  PWSTR PartName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING NtPathName; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Name; // [rsp+98h] [rbp-68h] BYREF
  WCHAR DosPathName[264]; // [rsp+B0h] [rbp-50h] BYREF

  UnicodeString = a4;
  Name.Buffer = (PWSTR)L"Path";
  NtPathName = a3;
  v7 = 0;
  *(_QWORD *)&Name.Length = 655368LL;
  PartName = 0LL;
  String1 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  *(_OWORD *)Src = *a1;
  v8 = (unsigned __int16)Src[0];
  while ( 1 )
  {
    RtlInitUnicodeString(&String1, 0LL);
    v9 = (wint_t *)Src[1];
    if ( v8 )
    {
      do
      {
        if ( !iswctype(*v9, 8u) )
          break;
        ++v9;
        v7 += 2;
      }
      while ( (unsigned __int16)v7 < v8 );
      for ( i = v9; (unsigned __int16)v7 < v8; v7 += 2 )
      {
        if ( iswctype(*i, 8u) )
          break;
        ++i;
      }
      for ( j = (unsigned int)((_DWORD)i - (_DWORD)v9); (unsigned __int16)v7 < v8; v7 += 2 )
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
        memcpy_0(Heap, v9, (unsigned int)j);
        v8 = (unsigned __int16)Src[0];
        String1.Buffer[(unsigned __int64)(unsigned int)j >> 1] = 0;
      }
      v13 = LOWORD(Src[1]) - (_WORD)i;
      Src[1] = i;
      v8 += v13;
      LOWORD(Src[0]) = v8;
      v7 = 0;
    }
    v14 = 0;
    if ( !String1.Buffer )
      return 3221225473LL;
    if ( !a2 )
    {
      v14 = RtlStringCbPrintfW(DosPathName, 0x208uLL, L"%s");
      goto LABEL_32;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
    {
      *a2 |= 1u;
      goto LABEL_64;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpASyncKeyword, 1u) )
    {
      *a2 |= 2u;
      goto LABEL_64;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpSecureKeyword, 1u) )
    {
      *a2 |= 0x8000u;
      goto LABEL_64;
    }
    if ( !RtlEqualUnicodeString(&String1, &SmpAutoChkKeyword, 1u) )
      break;
    if ( !SmpPrimarySmss )
      return 3221225485LL;
    if ( SmpHostSmss )
      *a2 |= 4u;
LABEL_64:
    RtlFreeUnicodeString(&String1);
  }
  if ( (*a2 & 0x400) != 0 )
  {
    v19 = NtPathName;
    *NtPathName = String1;
    goto LABEL_48;
  }
  if ( (*a2 & 8) != 0 )
  {
    MaximumLength = String1.MaximumLength;
    Destination = 0LL;
    if ( String1.MaximumLength < 0x208u )
      MaximumLength = 520;
    Destination.MaximumLength = MaximumLength;
    Destination.Buffer = (PWSTR)RtlAllocateHeap(
                                  *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                  SmBaseTag,
                                  MaximumLength);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      v14 = RtlExpandEnvironmentStrings_U(SmpDefaultEnvironment, &String1, &Destination, 0LL);
      v25 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
      if ( v14 >= 0 )
      {
        RtlFreeHeap(v25, 0, String1.Buffer);
        v8 = (unsigned __int16)Src[0];
        String1 = Destination;
        goto LABEL_20;
      }
      RtlFreeHeap(v25, 0, Destination.Buffer);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v14;
  }
LABEL_20:
  if ( RtlCompareUnicodeString(&SmpS0InitCmd, &String1, 0)
    && RtlCompareUnicodeString(&SmscpDefaultCmd, &String1, 0)
    && RtlCompareUnicodeString(&SmpSetupClCmd, &String1, 0) )
  {
    Destination = 0LL;
    RtlInitUnicodeString(&Destination, 0LL);
    v15 = SmpDefaultEnvironment;
    *(_QWORD *)&Value.Length = 0x10000000LL;
    v16 = 0;
    Value.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 0x1000uLL);
    if ( Value.Buffer )
    {
      v14 = RtlQueryEnvironmentVariable_U(v15, &Name, &Value);
      if ( v14 == -1073741789 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
        Length = Value.Length;
        Value.Length = 0;
        Value.MaximumLength = Length + 2;
        Value.Buffer = (PWSTR)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                SmBaseTag,
                                (unsigned __int16)(Length + 2));
        if ( Value.Buffer )
        {
          v14 = RtlQueryEnvironmentVariable_U(v15, &Name, &Value);
          goto LABEL_25;
        }
        v14 = -1073741670;
      }
      else
      {
LABEL_25:
        if ( v14 < 0 )
        {
          SmpLogFailureString((__int64)"SmpQueryEnvVariable", 0x2474u, (__int64)Name.Buffer, v14);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
          v14 = -1073741772;
        }
        else
        {
          Destination = Value;
          v16 = RtlDosSearchPath_U(
                  (PCWSTR)_mm_srli_si128((__m128i)Value, 8).m128i_i64[0],
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
      v14 = -1073741670;
    }
    if ( Destination.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
    v8 = (unsigned __int16)Src[0];
  }
  else
  {
    v16 = 0;
  }
  if ( v14 < 0
    || v16
    || RtlDosSearchPath_U(SmpDefaultLibPath.Buffer, String1.Buffer, L".exe", 0x208u, DosPathName, &PartName) )
  {
LABEL_32:
    RtlFreeUnicodeString(&String1);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v19 = NtPathName;
    if ( !RtlDosPathNameToNtPathName_U(DosPathName, NtPathName, 0LL, 0LL) )
    {
      v14 = -1073741767;
      SmpLogFailureString((__int64)"SmpParseCommandLine", 0x2598u, (__int64)DosPathName, 0xC0000039);
      return (unsigned int)v14;
    }
    v20 = UnicodeString;
    if ( UnicodeString )
    {
      if ( PartName > DosPathName )
      {
        *--PartName = 0;
        if ( RtlCreateUnicodeString(v20, DosPathName) == 1 )
          goto LABEL_48;
        v14 = -1073741823;
      }
      RtlInitUnicodeString(v20, 0LL);
      if ( v14 < 0 )
      {
LABEL_68:
        RtlFreeUnicodeString(v19);
        if ( v20 )
        {
          RtlFreeUnicodeString(v20);
          return (unsigned int)v14;
        }
        return (unsigned int)v14;
      }
    }
LABEL_48:
    RtlInitUnicodeString(DestinationString, 0LL);
    v21 = (wint_t *)Src[1];
    v14 = 0;
    if ( v8 )
    {
      do
      {
        if ( !iswctype(*v21, 8u) )
          break;
        ++v21;
        v14 += 2;
      }
      while ( (unsigned __int16)v14 < v8 );
      v22 = 2 * v14;
      v23 = (unsigned int)v8 - 2 * v14;
      if ( v8 != v22 )
      {
        v24 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v23 + 2);
        DestinationString->Buffer = v24;
        if ( !v24 )
        {
          v14 = -1073741801;
LABEL_67:
          v20 = UnicodeString;
          goto LABEL_68;
        }
        DestinationString->Length = v23;
        DestinationString->MaximumLength = v23 + 2;
        memcpy_0(v24, v21, (unsigned int)v23);
        DestinationString->Buffer[(unsigned __int64)(unsigned int)v23 >> 1] = 0;
      }
      v14 = 0;
    }
    if ( !a2 )
      return (unsigned int)v14;
    if ( (*(_BYTE *)a2 & 8) == 0 )
      return (unsigned int)v14;
    if ( !DestinationString->Length )
      return (unsigned int)v14;
    v14 = SmpExpandEnvironmentString(DestinationString);
    if ( v14 >= 0 )
      return (unsigned int)v14;
    goto LABEL_67;
  }
  *a2 |= 0x10u;
  v27 = UnicodeString;
  *NtPathName = String1;
  if ( v27 )
    RtlInitUnicodeString(v27, 0LL);
  return 0LL;
}
