/*
 * XREFs of EtwpGetAutoLoggerEventNameFilter @ 0x140AD41CC
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD4E78 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerEventNameFilter(__int64 a1, __int64 a2, __int64 a3, PVOID *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  WCHAR *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r13d
  wchar_t *Pool2; // rax
  WCHAR *v14; // r14
  NTSTATUS v15; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned int v18; // ebx
  wchar_t *v19; // rax
  NTSTATUS v20; // eax
  bool v21; // sf
  __int64 v22; // rax
  __int64 v23; // rbx
  const WCHAR *v24; // rdx
  __int64 v25; // r8
  char *v26; // rcx
  char *v27; // rax
  unsigned __int16 v28; // r8
  unsigned int v29; // ecx
  CHAR *v30; // rcx
  NTSTATUS v31; // eax
  ULONG UnicodeStringByteCount; // [rsp+20h] [rbp-E0h]
  ULONG UnicodeStringByteCounta; // [rsp+20h] [rbp-E0h]
  __int16 v34; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UTF8StringActualByteCount[2]; // [rsp+48h] [rbp-B8h] BYREF
  PCWCH UnicodeStringSource[2]; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-38h]
  int v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+100h] [rbp+0h] BYREF
  PCWCH *v53; // [rsp+108h] [rbp+8h]
  int v54[2]; // [rsp+200h] [rbp+100h] BYREF
  const wchar_t *v55; // [rsp+210h] [rbp+110h]
  int *v56; // [rsp+218h] [rbp+118h]
  int v57; // [rsp+220h] [rbp+120h]
  char *v58; // [rsp+228h] [rbp+128h]
  __int64 (__fastcall *v59)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+238h] [rbp+138h]
  const wchar_t *v60; // [rsp+248h] [rbp+148h]
  int *v61; // [rsp+250h] [rbp+150h]
  int v62; // [rsp+258h] [rbp+158h]
  char *v63; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v64)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+270h] [rbp+170h]
  const wchar_t *v65; // [rsp+280h] [rbp+180h]
  int *v66; // [rsp+288h] [rbp+188h]
  int v67; // [rsp+290h] [rbp+190h]
  char *v68; // [rsp+298h] [rbp+198h]
  __int64 (__fastcall *v69)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+2A8h] [rbp+1A8h]
  const wchar_t *v70; // [rsp+2B8h] [rbp+1B8h]
  int *v71; // [rsp+2C0h] [rbp+1C0h]
  int v72; // [rsp+2C8h] [rbp+1C8h]
  char v73; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 (__fastcall *v74)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+2E0h] [rbp+1E0h]
  const wchar_t *v75; // [rsp+2F0h] [rbp+1F0h]
  int *v76; // [rsp+2F8h] [rbp+1F8h]
  int v77; // [rsp+300h] [rbp+200h]
  __int64 (__fastcall *v78)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+318h] [rbp+218h]
  const wchar_t *v79; // [rsp+328h] [rbp+228h]
  int *v80; // [rsp+330h] [rbp+230h]
  int v81; // [rsp+338h] [rbp+238h]
  PCWCH v82; // [rsp+340h] [rbp+240h]
  int v83; // [rsp+348h] [rbp+248h]

  *(_QWORD *)UTF8StringActualByteCount = a1;
  v41 = a2;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = -1LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  *a4 = 0LL;
  v7 = -1LL;
  *a5 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, 32);
  v34 = 0;
  DestinationString = 0LL;
  *(_OWORD *)UnicodeStringSource = 0LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a3 + 2 * v11) );
  v12 = 2 * (v7 + v11) + 4;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v14 = Pool2;
  if ( Pool2 )
  {
    UnicodeStringByteCount = a3;
    v15 = RtlStringCbPrintfW(Pool2, v12, L"%ws\\%ws", *(_QWORD *)UTF8StringActualByteCount);
    if ( v15 )
      goto LABEL_31;
    RtlInitUnicodeString(&DestinationString, v14);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v15 < 0 )
      KeyHandle = 0LL;
    v16 = v41;
    if ( v41 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(v41 + 2 * v17) );
      do
        ++v6;
      while ( *(_WORD *)(a3 + 2 * v6) );
      v18 = 2 * (v6 + v17) + 4;
      v19 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v10 = v19;
      if ( !v19 )
        goto LABEL_34;
      UnicodeStringByteCount = a3;
      v20 = RtlStringCbPrintfW(v19, v18, L"%ws\\%ws", v16);
      v21 = v20 < 0;
      if ( v20 )
        goto LABEL_32;
      RtlInitUnicodeString(&DestinationString, v10);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( v15 < 0 )
        Handle = 0LL;
    }
    if ( !KeyHandle && !Handle )
    {
LABEL_31:
      v21 = v15 < 0;
      goto LABEL_32;
    }
    *a5 = 4096;
    v22 = ExAllocatePool2(0x100uLL);
    *a4 = (PVOID)v22;
    v23 = v22;
    if ( v22 )
    {
      memset_0(v54, 0, 0x498uLL);
      v43 = v23;
      *(_QWORD *)v54 = EtwpQueryRegistryCallback;
      v57 = 11;
      v56 = &v42;
      v42 = 11;
      v55 = L"MatchAnyKeyword";
      v62 = 11;
      v61 = &v44;
      v60 = L"MatchAllKeyword";
      v45 = v23 + 8;
      v66 = &v46;
      v65 = L"Level";
      v47 = v23 + 16;
      v71 = &v48;
      v70 = L"FilterIn";
      v49 = v23 + 17;
      v76 = &v50;
      v75 = L"NameCount";
      v51 = v23 + 18;
      v44 = 11;
      v80 = &v52;
      v59 = EtwpQueryRegistryCallback;
      v79 = L"Names";
      v82 = (PCWCH)&v34;
      v64 = EtwpQueryRegistryCallback;
      v67 = 4;
      v46 = 4;
      v69 = EtwpQueryRegistryCallback;
      v72 = 4;
      v48 = 4;
      v74 = EtwpQueryRegistryCallback;
      v77 = 4;
      v50 = 4;
      v78 = EtwpQueryRegistryCallback;
      v53 = UnicodeStringSource;
      v81 = 1;
      v52 = 1;
      if ( (int)RtlpQueryRegistryValues(
                  0x40000000LL,
                  (const WCHAR *)KeyHandle,
                  (__int64)v54,
                  0LL,
                  UnicodeStringByteCount,
                  1) >= 0 )
      {
        v24 = (const WCHAR *)Handle;
        if ( Handle )
        {
          v25 = 2LL;
          v58 = (char *)*a4;
          v63 = v58 + 8;
          v68 = v58 + 16;
          v26 = v58 + 17;
          v27 = &v73;
          do
          {
            *(_QWORD *)v27 = v26++;
            v27 += 56;
            --v25;
          }
          while ( v25 );
          v82 = UnicodeStringSource[1];
          v83 = LOWORD(UnicodeStringSource[0]);
          RtlpQueryRegistryValues(0x40000000LL, v24, (__int64)v54, 0LL, UnicodeStringByteCounta, 1);
        }
        v28 = (unsigned __int16)UnicodeStringSource[0];
        v29 = 0;
        if ( ((__int64)UnicodeStringSource[0] & 0xFFFE) != 0 )
        {
          do
          {
            if ( UnicodeStringSource[1][v29] == 59 )
            {
              UnicodeStringSource[1][v29] = 0;
              v28 = (unsigned __int16)UnicodeStringSource[0];
            }
            ++v29;
          }
          while ( v29 < v28 >> 1 );
        }
        v30 = (char *)*a4 + 20;
        UTF8StringActualByteCount[0] = *a5 - 20;
        v31 = RtlUnicodeToUTF8N(
                v30,
                UTF8StringActualByteCount[0],
                UTF8StringActualByteCount,
                UnicodeStringSource[1],
                v28 + 2);
        v21 = v31 < 0;
        if ( !v31 )
        {
          *a5 = UTF8StringActualByteCount[0] + 20;
          goto LABEL_36;
        }
LABEL_32:
        if ( !v21 )
          goto LABEL_36;
      }
    }
  }
LABEL_34:
  *a5 = 0;
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, 0);
    *a4 = 0LL;
  }
LABEL_36:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( UnicodeStringSource[1] )
    ExFreePool((PVOID)UnicodeStringSource[1]);
}
