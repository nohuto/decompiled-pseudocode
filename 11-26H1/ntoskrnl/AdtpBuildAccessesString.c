/*
 * XREFs of AdtpBuildAccessesString @ 0x14097AAF4
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14071A02C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x140B5EC24 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING a5,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  NTSTATUS appended; // r13d
  int v11; // edx
  unsigned __int64 *v12; // r14
  int v13; // ecx
  const WCHAR *v14; // r12
  int v15; // ebx
  __int64 v16; // rax
  int v17; // ecx
  wchar_t *Pool2; // rax
  unsigned int v19; // ebx
  int *v20; // rsi
  wchar_t **v21; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v23; // si
  unsigned __int64 *v24; // rbx
  const UNICODE_STRING *v25; // rdi
  BOOLEAN v26; // al
  unsigned __int64 *v27; // rcx
  _QWORD *v28; // r15
  _QWORD *v29; // rbx
  bool v30; // r14
  const UNICODE_STRING *v31; // r12
  _QWORD *v32; // rdi
  int v33; // r14d
  int v34; // esi
  unsigned int i; // ebx
  unsigned int v37; // esi
  __int64 *v38; // r14
  int v39; // r9d
  wchar_t *Buffer; // rax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-89h] BYREF
  int v42; // [rsp+30h] [rbp-79h]
  const WCHAR *v43; // [rsp+38h] [rbp-71h]
  wchar_t **v44; // [rsp+40h] [rbp-69h]
  UNICODE_STRING String; // [rsp+48h] [rbp-61h] BYREF
  PCUNICODE_STRING String2; // [rsp+58h] [rbp-51h]
  PCUNICODE_STRING v47; // [rsp+60h] [rbp-49h]
  _QWORD *v48; // [rsp+68h] [rbp-41h]
  wchar_t *v49; // [rsp+70h] [rbp-39h]
  UNICODE_STRING *v50; // [rsp+78h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING v52; // [rsp+90h] [rbp-19h] BYREF

  v9 = a3;
  v42 = a3;
  v47 = a2;
  appended = 0;
  String2 = a1;
  v11 = 0;
  v44 = a6;
  v12 = 0LL;
  v50 = a5;
  *(_QWORD *)&String.Length = 0LL;
  v48 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  v52 = 0LL;
  if ( !a3 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = L"-";
    }
    else if ( a5 )
    {
      RtlInitUnicodeString(a5, L"-");
    }
    return 0LL;
  }
  v13 = a3;
  do
  {
    ++v11;
    v13 &= v13 - 1;
  }
  while ( v13 );
  if ( !a4 )
    goto LABEL_5;
  v39 = a4 - 1;
  if ( v39 )
  {
    if ( v39 != 1 )
    {
LABEL_5:
      v14 = L"\r\n\t\t\t\t";
      goto LABEL_6;
    }
    v14 = L":\t";
  }
  else
  {
    v14 = L"\r\n";
  }
LABEL_6:
  v43 = v14;
  v15 = 24 * v11 + 1;
  if ( a7 && a8 && (v16 = (unsigned int)*a8, v17 = v16 + v15, (unsigned int)(v16 + v15) < 0x400) )
  {
    Pool2 = (wchar_t *)(a7 + 2 * v16);
    *a8 = v17;
    v49 = Pool2;
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v49 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *a9 = 1;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v15;
  v19 = 5;
  Destination.Buffer = Pool2;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v37 = 0;
    v38 = AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *(_DWORD *)v38) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v37);
        appended = RtlAppendUnicodeToString(&Destination, v14);
      }
      ++v37;
      v38 = (__int64 *)((char *)v38 + 4);
    }
    while ( v37 < 5 );
    v12 = *(unsigned __int64 **)&String.Length;
  }
  v20 = &dword_14001478C;
  do
  {
    if ( (v9 & *v20) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v19);
      appended = RtlAppendUnicodeToString(&Destination, v14);
    }
    ++v19;
    ++v20;
  }
  while ( v19 < 7 );
  v21 = v44;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&gLoadedDiffHivesLock.Spare35[1], 1u);
    v23 = 0;
    v24 = &gLoadedDiffHivesLock.Padding[2];
    if ( gLoadedDiffHivesLock.Padding[2] )
    {
      v25 = String2;
      do
      {
        if ( v23 )
          break;
        v26 = RtlEqualUnicodeString((PCUNICODE_STRING)(*v24 + 8), v25, 1u);
        v27 = (unsigned __int64 *)*v24;
        if ( v26 )
        {
          v23 = 1;
          *v24 = *v27;
          v12 = v27;
          *v27 = gLoadedDiffHivesLock.Padding[2];
          gLoadedDiffHivesLock.Padding[2] = (unsigned __int64)v27;
        }
        else
        {
          v24 = (unsigned __int64 *)*v24;
        }
      }
      while ( *v24 );
      v21 = v44;
      if ( v23 == 1 )
      {
        v28 = v12 + 3;
        v23 = 0;
        v29 = v12 + 3;
        RtlInitUnicodeString(&DestinationString, L"DS");
        v30 = 0;
        if ( RtlEqualUnicodeString(String2, &DestinationString, 1u) )
        {
          if ( v47->Length == 78 )
          {
            Buffer = v47->Buffer;
            if ( *Buffer == 37 && Buffer[1] == 123 && Buffer[38] == 125 )
              v30 = 1;
          }
        }
        RtlInitUnicodeString(&v52, L"Directory Service Object");
        if ( *v28 )
        {
          v31 = v47;
          do
          {
            if ( v23 )
              break;
            if ( v30 && RtlEqualUnicodeString((PCUNICODE_STRING)(*v29 + 8LL), &v52, 1u)
              || RtlEqualUnicodeString((PCUNICODE_STRING)(*v29 + 8LL), v31, 1u) )
            {
              v32 = (_QWORD *)*v29;
              v23 = 1;
              v48 = v32;
              *v29 = *v32;
              *v32 = *v28;
              *v28 = v32;
            }
            else
            {
              v29 = (_QWORD *)*v29;
            }
          }
          while ( *v29 );
          v21 = v44;
          v14 = v43;
        }
        v9 = v42;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&gLoadedDiffHivesLock.Spare35[1]);
    KeLeaveCriticalRegion();
    if ( v23 )
      v33 = *((_DWORD *)v48 + 6);
    else
      v33 = 1552;
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v52;
    v34 = 1;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (v34 & v9) != 0 )
      {
        appended = RtlIntegerToUnicodeString(i + v33, 0xAu, &String);
        if ( appended >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v14);
        }
      }
      v34 *= 2;
    }
  }
  if ( appended >= 0 )
  {
    if ( v21 )
    {
      *v21 = v49;
      v21[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v50 = Destination;
    }
  }
  return (unsigned int)appended;
}
