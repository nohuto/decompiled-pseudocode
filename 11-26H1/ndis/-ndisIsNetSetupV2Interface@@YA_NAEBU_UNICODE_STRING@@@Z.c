/*
 * XREFs of ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140167C50
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x140167A00 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x14006DE70 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

char __fastcall ndisIsNetSetupV2Interface(const struct _UNICODE_STRING *a1)
{
  wchar_t *v2; // rax
  __int64 v3; // rdx
  int v5; // eax
  __int16 v6; // dx
  HANDLE KeyHandle; // [rsp+20h] [rbp-268h] BYREF
  __int128 v8; // [rsp+28h] [rbp-260h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-250h] BYREF
  wchar_t v10[256]; // [rsp+70h] [rbp-218h] BYREF

  memset(v10, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              v10,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  v2 = v10;
  KeyHandle = 0LL;
  v8 = 0LL;
  v3 = 0x7FFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = -1073741811;
  if ( v3 )
  {
    v5 = 0;
    v6 = 2 * v3;
    LOWORD(v8) = -2 - v6;
    WORD1(v8) = -v6;
    *((_QWORD *)&v8 + 1) = v10;
  }
  if ( v5 < 0
    || (KeyHandle = 0LL,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8,
        *(_QWORD *)&ObjectAttributes.Length = 48LL,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0) )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    return 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 1;
}
