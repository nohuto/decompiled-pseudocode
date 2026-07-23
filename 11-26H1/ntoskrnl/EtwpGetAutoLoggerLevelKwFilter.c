/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x140AD3DFC
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD4E78 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerLevelKwFilter(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  WCHAR *v8; // rbx
  unsigned int v9; // r13d
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi
  NTSTATUS v12; // eax
  bool v13; // sf
  NTSTATUS v14; // eax
  unsigned int v15; // esi
  wchar_t *v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  ULONG v20; // [rsp+20h] [rbp-E0h]
  ULONG v21; // [rsp+20h] [rbp-E0h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int v34[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  const wchar_t *v35; // [rsp+1E0h] [rbp+E0h]
  int *v36; // [rsp+1E8h] [rbp+E8h]
  int v37; // [rsp+1F0h] [rbp+F0h]
  char *v38; // [rsp+1F8h] [rbp+F8h]
  __int64 (__fastcall *v39)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+208h] [rbp+108h]
  const wchar_t *v40; // [rsp+218h] [rbp+118h]
  int *v41; // [rsp+220h] [rbp+120h]
  int v42; // [rsp+228h] [rbp+128h]
  char *v43; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v44)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+240h] [rbp+140h]
  const wchar_t *v45; // [rsp+250h] [rbp+150h]
  int *v46; // [rsp+258h] [rbp+158h]
  int v47; // [rsp+260h] [rbp+160h]
  char *v48; // [rsp+268h] [rbp+168h]
  __int64 (__fastcall *v49)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+278h] [rbp+178h]
  const wchar_t *v50; // [rsp+288h] [rbp+188h]
  int *v51; // [rsp+290h] [rbp+190h]
  int v52; // [rsp+298h] [rbp+198h]
  char *v53; // [rsp+2A0h] [rbp+1A0h]

  v4 = -1LL;
  KeyHandle = 0LL;
  v5 = -1LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  DestinationString = 0LL;
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v9 = 2 * v5 + 40;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
    goto LABEL_22;
  v12 = RtlStringCbPrintfW(Pool2, v9, L"%ws\\StackLevelKwFilter", a1);
  v13 = v12 < 0;
  if ( v12 )
    goto LABEL_20;
  RtlInitUnicodeString(&DestinationString, v11);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v14 < 0 )
    KeyHandle = 0LL;
  if ( a2 )
  {
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v15 = 2 * v4 + 40;
    v16 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v8 = v16;
    if ( !v16 )
      goto LABEL_22;
    v17 = RtlStringCbPrintfW(v16, v15, L"%ws\\StackLevelKwFilter", a2);
    v13 = v17 < 0;
    if ( !v17 )
    {
      RtlInitUnicodeString(&DestinationString, v8);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( v14 < 0 )
        Handle = 0LL;
      goto LABEL_13;
    }
LABEL_20:
    if ( !v13 )
      goto LABEL_24;
    goto LABEL_22;
  }
LABEL_13:
  if ( !KeyHandle && !Handle )
  {
    v13 = v14 < 0;
    goto LABEL_20;
  }
  v18 = ExAllocatePool2(0x100uLL);
  *a3 = (PVOID)v18;
  v19 = v18;
  if ( v18 )
  {
    memset_0(v34, 0, 0x498uLL);
    v27 = v19;
    v37 = 11;
    v26 = 11;
    v36 = &v26;
    v42 = 11;
    v35 = L"MatchAnyKeyword";
    v28 = 11;
    v41 = &v28;
    *(_QWORD *)v34 = EtwpQueryRegistryCallback;
    v40 = L"MatchAllKeyword";
    v29 = v19 + 8;
    v46 = &v30;
    v45 = L"Level";
    v31 = v19 + 16;
    v51 = &v32;
    v50 = L"FilterIn";
    v39 = EtwpQueryRegistryCallback;
    v44 = EtwpQueryRegistryCallback;
    v47 = 4;
    v30 = 4;
    v49 = EtwpQueryRegistryCallback;
    v52 = 4;
    v32 = 4;
    v33 = v19 + 17;
    if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v34, 0LL, v20, 1) >= 0 )
    {
      if ( Handle )
      {
        v38 = (char *)*a3;
        v43 = v38 + 8;
        v48 = v38 + 16;
        v53 = v38 + 17;
        RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v34, 0LL, v21, 1);
      }
      goto LABEL_24;
    }
  }
LABEL_22:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
