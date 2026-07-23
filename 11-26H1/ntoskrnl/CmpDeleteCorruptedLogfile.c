/*
 * XREFs of CmpDeleteCorruptedLogfile @ 0x1408691C8
 * Callers:
 *     CmpStartCLFSLog @ 0x140869768 (CmpStartCLFSLog.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     CmpDeleteCorruptedFile @ 0x1406E7E18 (CmpDeleteCorruptedFile.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDeleteCorruptedLogfile(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        unsigned int a5,
        const wchar_t *pszFormat,
        USHORT a7)
{
  unsigned int v7; // esi
  NTSTATUS v9; // r15d
  int v11; // edi
  int v12; // r13d
  NTSTATUS v13; // r14d
  USHORT Length; // dx
  NTSTATUS appended; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v17; // rax
  unsigned int MaximumLength; // ebx
  wchar_t *v20; // rax
  NTSTATUS v21; // eax
  unsigned __int16 v22; // r15
  int v23; // r12d
  NTSTATUS v24; // eax
  NTSTATUS v25; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v27; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING v28; // [rsp+60h] [rbp-A0h] BYREF
  PCUNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  NTSTATUS v31; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+84h] [rbp-7Ch] BYREF
  NTSTATUS v33; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING v34; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v35; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v37; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D0h] [rbp-30h] BYREF
  NTSTATUS *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  NTSTATUS *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  PCUNICODE_STRING *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  PCUNICODE_STRING *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  PCUNICODE_STRING *p_Source; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]

  v7 = a5;
  v34 = a2;
  Source = a1;
  v9 = 0;
  v28 = a4;
  v25 = 0;
  DestinationString = 0LL;
  v11 = 0;
  v12 = 0;
  v37 = 0LL;
  v13 = 0;
  v35 = 0LL;
  v27 = 0LL;
  Destination = 0LL;
  v30 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v37, L".blf");
  RtlInitUnicodeString(&v35, L".cnpf");
  RtlInitUnicodeString(&v27, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  RtlInitUnicodeString(&v30, 0LL);
  Length = a2->Length;
  DestinationString.MaximumLength = Source->Length;
  appended = RtlUShortAdd(DestinationString.MaximumLength, Length, &DestinationString.MaximumLength);
  if ( appended < 0
    || (appended = RtlUShortAdd(DestinationString.MaximumLength, a3->Length, &DestinationString.MaximumLength),
        appended < 0)
    || (appended = RtlUShortAdd(DestinationString.MaximumLength, v37.Length, &DestinationString.MaximumLength),
        appended < 0)
    || (appended = RtlUShortAdd(DestinationString.MaximumLength, v35.Length, &DestinationString.MaximumLength),
        appended < 0)
    || (appended = RtlUShortAdd(DestinationString.MaximumLength, 2u, &DestinationString.MaximumLength), appended < 0) )
  {
LABEL_15:
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
    {
      v25 = appended;
      v39 = &v25;
      v40 = 4LL;
      v41 = &v31;
      v31 = v13;
      v43 = &v32;
      v42 = 4LL;
      v45 = &v33;
      v32 = v11;
      v47 = &v34;
      LODWORD(v28) = a5;
      v49 = &v28;
      p_Source = &Source;
      v53 = &v35;
      v44 = 4LL;
      v33 = v9;
      v46 = 4LL;
      LODWORD(v34) = v12;
      v48 = 4LL;
      v50 = 4LL;
      LODWORD(Source) = v7;
      v52 = 4LL;
      *(_QWORD *)&v35.Length = 0x1000000LL;
      v54 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)&byte_14005854F,
        0LL,
        0LL,
        0xAu,
        &v38);
    }
    goto LABEL_18;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  DestinationString.Buffer = Pool2;
  if ( !Pool2 )
  {
    appended = -1073741670;
    goto LABEL_15;
  }
  memset_0(Pool2, 0, DestinationString.MaximumLength);
  v27.MaximumLength = DestinationString.MaximumLength;
  appended = RtlUShortAdd(DestinationString.MaximumLength, a7, &v27.MaximumLength);
  if ( appended < 0
    || (appended = RtlUShortAdd(v27.MaximumLength, v28->Length, &v27.MaximumLength), appended < 0)
    || (appended = RtlUShortAdd(v27.MaximumLength, v35.Length, &v27.MaximumLength), appended < 0)
    || (appended = RtlUShortAdd(v27.MaximumLength, 2u, &v27.MaximumLength), appended < 0) )
  {
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  v17 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v27.Buffer = v17;
  if ( !v17 )
    goto LABEL_13;
  memset_0(v17, 0, v27.MaximumLength);
  Destination = v27;
  v30.MaximumLength = a7;
  appended = RtlUShortAdd(a7, 2u, &v30.MaximumLength);
  if ( appended < 0 )
    goto LABEL_14;
  MaximumLength = v30.MaximumLength;
  v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v30.Buffer = v20;
  if ( !v20 )
  {
LABEL_13:
    appended = -1073741670;
    goto LABEL_14;
  }
  memset_0(v20, 0, MaximumLength);
  appended = RtlAppendUnicodeStringToString(&DestinationString, Source);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, v34);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, a3);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  appended = RtlAppendUnicodeStringToString(&DestinationString, &v37);
  if ( appended < 0 )
    goto LABEL_14;
  appended = CmpDeleteCorruptedFile(&DestinationString);
  if ( appended < 0 )
    goto LABEL_14;
  v11 = 1;
  appended = RtlAppendUnicodeStringToString(&DestinationString, &v35);
  if ( appended < 0 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v21 = CmpDeleteCorruptedFile(&DestinationString);
  v22 = Destination.Length;
  v13 = v21;
  v11 = (v21 >> 31) + 2;
  v23 = 0;
  while ( v7 != -1 )
  {
    v30.Length = 0;
    appended = RtlUnicodeStringPrintf(&v30, pszFormat, v7);
    if ( appended < 0 )
      goto LABEL_46;
    v27.Length = v22;
    appended = RtlAppendUnicodeStringToString(&v27, &v30);
    if ( appended < 0 )
      goto LABEL_46;
    appended = RtlAppendUnicodeStringToString(&v27, v28);
    if ( appended < 0 )
      goto LABEL_46;
    v24 = CmpDeleteCorruptedFile(&v27);
    appended = v24;
    if ( v24 < 0 )
    {
      if ( v24 == -1073741772 )
      {
        appended = 0;
        goto LABEL_18;
      }
      break;
    }
    v25 = ++v23;
    appended = RtlAppendUnicodeStringToString(&v27, &v35);
    if ( appended < 0 )
      goto LABEL_46;
    v13 = CmpDeleteCorruptedFile(&v27);
    if ( v13 >= 0 )
      ++v12;
    ++v7;
  }
  if ( appended < 0 )
  {
LABEL_46:
    v9 = v25;
    goto LABEL_15;
  }
LABEL_18:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v27.Buffer )
    ExFreePoolWithTag(v27.Buffer, 0);
  if ( v30.Buffer )
    ExFreePoolWithTag(v30.Buffer, 0);
  return (unsigned int)appended;
}
