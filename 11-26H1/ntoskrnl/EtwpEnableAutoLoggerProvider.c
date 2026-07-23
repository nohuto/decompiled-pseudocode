/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x140AD4710
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x140B40078 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD4E78 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnableTrace @ 0x140AD66E4 (EtwpEnableTrace.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnableAutoLoggerProvider(
        void *a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r12
  WCHAR *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r13d
  wchar_t *Pool2; // rax
  WCHAR *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r13
  NTSTATUS RegistryValues; // eax
  const WCHAR *v19; // rdx
  UNICODE_STRING *p_UnicodeString; // rdi
  __int64 *v21; // rbx
  __int64 v22; // rdi
  WCHAR *v23; // rdx
  int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // edi
  wchar_t *v29; // rax
  ULONG Data; // [rsp+20h] [rbp-F0h]
  ULONG Dataa; // [rsp+20h] [rbp-F0h]
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v33; // [rsp+70h] [rbp-A0h]
  size_t v34; // [rsp+80h] [rbp-90h]
  HANDLE v35; // [rsp+90h] [rbp-80h] BYREF
  int v36; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+9Ch] [rbp-74h] BYREF
  int v38; // [rsp+A0h] [rbp-70h] BYREF
  char v39[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  ULONG v40; // [rsp+A8h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-60h] BYREF
  size_t v42; // [rsp+B8h] [rbp-58h] BYREF
  int v43; // [rsp+C0h] [rbp-50h] BYREF
  int v44[2]; // [rsp+C8h] [rbp-48h]
  __int64 v45; // [rsp+D0h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-20h] BYREF
  PVOID P; // [rsp+F8h] [rbp-18h] BYREF
  PVOID v50; // [rsp+100h] [rbp-10h] BYREF
  PVOID v51; // [rsp+108h] [rbp-8h] BYREF
  PVOID v52; // [rsp+110h] [rbp+0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+8h] BYREF
  UNICODE_STRING v54; // [rsp+148h] [rbp+38h] BYREF
  __int64 v55[2]; // [rsp+158h] [rbp+48h] BYREF
  GUID Guid; // [rsp+168h] [rbp+58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+180h] [rbp+70h] BYREF
  int v58; // [rsp+1C0h] [rbp+B0h] BYREF
  int *v59; // [rsp+1C8h] [rbp+B8h]
  int v60; // [rsp+1D0h] [rbp+C0h] BYREF
  int *v61; // [rsp+1D8h] [rbp+C8h]
  int v62; // [rsp+1E0h] [rbp+D0h] BYREF
  char *v63; // [rsp+1E8h] [rbp+D8h]
  int v64; // [rsp+1F0h] [rbp+E0h] BYREF
  unsigned int *v65; // [rsp+1F8h] [rbp+E8h]
  int v66; // [rsp+200h] [rbp+F0h] BYREF
  __int64 *v67; // [rsp+208h] [rbp+F8h]
  int v68; // [rsp+210h] [rbp+100h] BYREF
  __int64 *v69; // [rsp+218h] [rbp+108h]
  int v70[2]; // [rsp+310h] [rbp+200h] BYREF
  const wchar_t *v71; // [rsp+320h] [rbp+210h]
  int *v72; // [rsp+328h] [rbp+218h]
  int v73; // [rsp+330h] [rbp+220h]
  int *v74; // [rsp+338h] [rbp+228h]
  int v75; // [rsp+340h] [rbp+230h]
  __int64 (__fastcall *v76)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+348h] [rbp+238h]
  const wchar_t *v77; // [rsp+358h] [rbp+248h]
  int *v78; // [rsp+360h] [rbp+250h]
  int v79; // [rsp+368h] [rbp+258h]
  int *v80; // [rsp+370h] [rbp+260h]
  int v81; // [rsp+378h] [rbp+268h]
  __int64 (__fastcall *v82)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+380h] [rbp+270h]
  const wchar_t *v83; // [rsp+390h] [rbp+280h]
  int *v84; // [rsp+398h] [rbp+288h]
  int v85; // [rsp+3A0h] [rbp+290h]
  char *v86; // [rsp+3A8h] [rbp+298h]
  int v87; // [rsp+3B0h] [rbp+2A0h]
  __int64 (__fastcall *v88)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3B8h] [rbp+2A8h]
  const wchar_t *v89; // [rsp+3C8h] [rbp+2B8h]
  int *v90; // [rsp+3D0h] [rbp+2C0h]
  int v91; // [rsp+3D8h] [rbp+2C8h]
  unsigned int *v92; // [rsp+3E0h] [rbp+2D0h]
  int v93; // [rsp+3E8h] [rbp+2D8h]
  __int64 (__fastcall *v94)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3F0h] [rbp+2E0h]
  const wchar_t *v95; // [rsp+400h] [rbp+2F0h]
  int *v96; // [rsp+408h] [rbp+2F8h]
  int v97; // [rsp+410h] [rbp+300h]
  __int64 *v98; // [rsp+418h] [rbp+308h]
  int v99; // [rsp+420h] [rbp+310h]
  __int64 (__fastcall *v100)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+428h] [rbp+318h]
  const wchar_t *v101; // [rsp+438h] [rbp+328h]
  int *v102; // [rsp+440h] [rbp+330h]
  int v103; // [rsp+448h] [rbp+338h]
  __int64 *v104; // [rsp+450h] [rbp+340h]
  int v105; // [rsp+458h] [rbp+348h]

  *(_QWORD *)&Guid.Data1 = a5;
  v6 = a2;
  v35 = a1;
  *(_QWORD *)v44 = a4;
  v9 = 0LL;
  v36 = 0;
  DestinationString = 0LL;
  *(_DWORD *)v39 = 0;
  v37 = 0;
  v38 = 0;
  v45 = 0LL;
  v48 = 0LL;
  v40 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  P = 0LL;
  v43 = 0;
  v54 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v42 = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset_0(v70, 0, 0x498uLL);
  memset_0(&UnicodeString, 0, 0x40uLL);
  v10 = -1LL;
  *(_OWORD *)v55 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(a4 + 2 * v12) );
  v13 = 2 * (v11 + v12) + 4;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v15 = Pool2;
  v16 = 4LL;
  if ( !Pool2 )
    goto LABEL_16;
  Data = (unsigned int)a3;
  if ( RtlStringCbPrintfW(Pool2, v13, L"%ws\\%ws", *(_QWORD *)v44) )
    goto LABEL_16;
  RtlInitUnicodeString(&v54, v15);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v54;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_16;
  v17 = *(_QWORD *)&Guid.Data1;
  if ( *(_QWORD *)&Guid.Data1 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a3[v27] );
    do
      ++v10;
    while ( *(_WORD *)(*(_QWORD *)&Guid.Data1 + 2 * v10) );
    v28 = 2 * (v10 + v27) + 4;
    v29 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v9 = v29;
    if ( !v29 )
      goto LABEL_16;
    Data = (unsigned int)a3;
    if ( !RtlStringCbPrintfW(v29, v28, L"%ws\\%ws", v17) )
    {
      RtlInitUnicodeString(&v54, v9);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v54;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) < 0 )
        Handle = 0LL;
    }
  }
  v73 = 4;
  *(_QWORD *)v70 = EtwpQueryRegistryCallback;
  v76 = EtwpQueryRegistryCallback;
  v72 = &v58;
  v82 = EtwpQueryRegistryCallback;
  v71 = L"Enabled";
  v88 = EtwpQueryRegistryCallback;
  v59 = &v36;
  v94 = EtwpQueryRegistryCallback;
  v78 = &v60;
  v77 = L"EnableProperty";
  v61 = &v38;
  v84 = &v62;
  v83 = L"EnableLevel";
  v63 = v39;
  v90 = &v64;
  v89 = L"EnableFlags";
  v65 = &v37;
  v96 = &v66;
  v95 = L"MatchAnyKeyword";
  v67 = &v45;
  v102 = &v68;
  v101 = L"MatchAllKeyword";
  v97 = 11;
  v66 = 11;
  v100 = EtwpQueryRegistryCallback;
  v103 = 11;
  v68 = 11;
  v69 = &v48;
  v58 = 4;
  v79 = 4;
  v60 = 4;
  v85 = 4;
  v62 = 4;
  v91 = 4;
  v64 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v70, 0LL, Data, 1);
  if ( RegistryValues < 0 )
    goto LABEL_10;
  v19 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    v75 = 4;
    v74 = &v36;
    v81 = 4;
    v80 = &v38;
    v87 = 4;
    v86 = v39;
    v93 = 4;
    v92 = &v37;
    v98 = &v45;
    v104 = &v48;
    v99 = 8;
    v105 = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v70, 0LL, Dataa, 1);
    if ( RegistryValues < 0 )
    {
LABEL_10:
      v40 = RtlNtStatusToDosError(RegistryValues);
      goto LABEL_11;
    }
    v19 = (const WCHAR *)Handle;
  }
  if ( !v36 )
    goto LABEL_12;
  *(_QWORD *)v44 = 0LL;
  v23 = v9;
  if ( a6 )
    v23 = 0LL;
  Guid = 0LL;
  if ( (_DWORD)v6 )
    LOWORD(v44[0]) = v6;
  else
    LOWORD(v44[0]) = -1;
  EtwpGetAutoLoggerProviderFilter(v15, v23, &UnicodeString, v55, &P, &v43, &v50, (char *)&v42 + 4, &v51, &v42, &v52);
  RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
  if ( RegistryValues < 0 )
    goto LABEL_10;
  if ( !memcmp(&Guid, qword_14001F880, 0x10uLL) || !memcmp(&Guid, &s_ProviderThreatInt, 0x10uLL) )
  {
    v24 = (int)v35;
    if ( v35 != (HANDLE)EtwpHostSiloState )
      goto LABEL_16;
    if ( (unsigned int)v6 < *((_DWORD *)v35 + 4) )
    {
      v26 = *(_QWORD *)(*((_QWORD *)v35 + 89) + 8 * v6);
      if ( (v26 & 1) == 0 )
      {
        if ( *(_QWORD *)(v26 + 160) )
          goto LABEL_16;
        _InterlockedOr((volatile signed __int32 *)(v26 + 816), 0x4000u);
      }
    }
  }
  else
  {
    v24 = (int)v35;
  }
  v25 = v45;
  if ( !v45 )
  {
    v25 = v37;
    v45 = v37;
  }
  LODWORD(v33) = HIDWORD(v42);
  LODWORD(v34) = v42;
  LODWORD(Size) = v43;
  RegistryValues = EtwpEnableTrace(
                     v24,
                     (int)&Guid,
                     0,
                     v44[0],
                     1,
                     v39[0],
                     v25,
                     v48,
                     v38,
                     (__int64)&UnicodeString,
                     (__int64)v55,
                     P,
                     Size,
                     v50,
                     v33,
                     v51,
                     v34,
                     (__int64)v52);
  if ( RegistryValues < 0 )
    goto LABEL_10;
LABEL_11:
  v19 = (const WCHAR *)Handle;
LABEL_12:
  v35 = 0LL;
  DestinationString = 0LL;
  if ( !v19 )
    v19 = (const WCHAR *)KeyHandle;
  if ( (int)RtlpGetRegistryHandle(0x40000000, v19, 1, &v35) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Status");
    ZwSetValueKey(v35, &DestinationString, 0, 4u, &v40, 4u);
  }
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  p_UnicodeString = &UnicodeString;
  do
  {
    RtlFreeAnsiString(p_UnicodeString++);
    --v16;
  }
  while ( v16 );
  v21 = v55;
  v22 = 2LL;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag((PVOID)*v21, 0);
    ++v21;
    --v22;
  }
  while ( v22 );
}
