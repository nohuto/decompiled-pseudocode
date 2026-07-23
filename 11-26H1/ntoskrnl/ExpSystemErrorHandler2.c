/*
 * XREFs of ExpSystemErrorHandler2 @ 0x140C056F0
 * Callers:
 *     ExpSystemErrorHandler @ 0x1405376F0 (ExpSystemErrorHandler.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     strcat_s @ 0x14053EA40 (strcat_s.c)
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PoShutdownBugCheck @ 0x1407D4050 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlxUnicodeStringToOemSize @ 0x14097CB20 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     PsQuerySystemDllInfo @ 0x1409E8308 (PsQuerySystemDllInfo.c)
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     RtlUnicodeStringToOemString @ 0x140B3EDD0 (RtlUnicodeStringToOemString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSystemErrorHandler2(ULONG MessageId, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v8; // edx
  const void *v9; // r9
  __int16 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 i; // rsi
  char *Buffer; // rax
  char *v15; // rbx
  char *v16; // r14
  char *v17; // rdi
  __int64 SystemDllInfo; // rax
  void *v19; // r10
  unsigned __int16 v20; // r15
  char *Pool2; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  char *v24; // rax
  char *v25; // rbx
  int j; // esi
  __int64 *v27; // rax
  char *v28; // rdi
  unsigned __int64 CurrentServerSilo; // rax
  NTSTATUS v30; // [rsp+50h] [rbp-218h]
  char *Src; // [rsp+78h] [rbp-1F0h]
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+80h] [rbp-1E8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-1E0h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-1D0h] BYREF
  _STRING v35; // [rsp+A8h] [rbp-1C0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+B8h] [rbp-1B0h]
  _STRING DestinationString; // [rsp+C0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-188h]
  __int64 v40; // [rsp+F0h] [rbp-178h]
  char pszFormat[40]; // [rsp+F8h] [rbp-170h] BYREF
  char pszDest[256]; // [rsp+120h] [rbp-148h] BYREF

  LODWORD(BugCheckParameter1) = MessageId;
  *(_QWORD *)&DestinationString.Length = 0LL;
  MessageEntry = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  v35 = 0LL;
  v10 = WORD2(PsGetCurrentServerSiloGlobals()[65].Flink);
  v11 = 5;
  if ( v8 <= 5 )
    v11 = v8;
  v12 = v11;
  pszFormat[0] = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memmove(BugCheckParameter2, v9, 8LL * v11);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      v30 = RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)(a4 + 8 * i), 1u);
      Buffer = (char *)L"???";
      if ( v30 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v15 = pszFormat;
  v16 = "Unknown Hard Error";
  v17 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0);
  if ( SystemDllInfo )
  {
    v19 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v19 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v19, 0xBu, v10 != 0 ? 0x409 : 0, MessageId, &MessageEntry) < 0 )
    {
      v17 = "Unknown Hard Error";
      v15 = "Unknown Hard Error";
      goto LABEL_43;
    }
    if ( (MessageEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageEntry->Text);
      SourceString.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
      v20 = SourceString.Length + 16;
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
      v17 = Pool2;
      if ( !Pool2 )
      {
LABEL_20:
        v15 = "Unknown Hard Error";
        v22 = -1LL;
LABEL_27:
        v17 = "Unknown Hard Error";
        goto LABEL_28;
      }
      SourceString.MaximumLength = v20;
      SourceString.Buffer = Pool2;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        goto LABEL_20;
      }
      v22 = -1LL;
    }
    else
    {
      Src = (char *)MessageEntry->Text;
      v22 = -1LL;
      v23 = -1LL;
      do
        ++v23;
      while ( MessageEntry->Text[v23] );
      MessageEntry = (PMESSAGE_RESOURCE_ENTRY)(unsigned int)(v23 + 16);
      v24 = (char *)ExAllocatePool2(0x40uLL);
      v17 = v24;
      if ( !v24 )
      {
        v15 = "Unknown Hard Error";
        goto LABEL_27;
      }
      strcpy_s(v24, (rsize_t)MessageEntry, Src);
    }
LABEL_28:
    if ( v17 != "Unknown Hard Error" )
    {
      v25 = v17;
      do
        ++v22;
      while ( v17[v22] );
      for ( j = v22; j && *v25 >= 32; --j )
        ++v25;
      *v25 = 0;
      v15 = v25 + 1;
      LODWORD(i) = j - 1;
      while ( (_DWORD)i && *v15 && *v15 <= 32 )
      {
        ++v15;
        LODWORD(i) = i - 1;
      }
    }
    v27 = qword_140C14620;
    if ( (_DWORD)i )
      v27 = (__int64 *)v15;
    v15 = (char *)v27;
  }
LABEL_43:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", MessageId, v17) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v28 = "Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v35.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v35.MaximumLength = v35.Length;
    v16 = (char *)ExAllocatePool2(0x40uLL);
    v35.Buffer = v16;
    if ( v16 )
      RtlUnicodeStringToOemString(&v35, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, v15, BugCheckParameter2[0], BugCheckParameter2[1], v39) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      (_DWORD)v39,
      DWORD2(v39));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v35.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v35.MaximumLength = v35.Length;
    v28 = (char *)ExAllocatePool2(0x40uLL);
    v35.Buffer = v28;
    if ( v28 )
      RtlUnicodeStringToOemString(&v35, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
      PoShutdownBugCheck(
        1,
        0x4Cu,
        (unsigned int)BugCheckParameter1,
        (ULONG_PTR)BugCheckParameter2,
        (ULONG_PTR)v16,
        (ULONG_PTR)v28);
    KeBugCheckEx(0x4Cu, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v16, (ULONG_PTR)v28);
  }
  PsTerminateServerSilo(CurrentServerSilo);
}
