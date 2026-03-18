/*
 * XREFs of ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE_2@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140288FF4
 * Callers:
 *     DpiFeatureStartDevice @ 0x14024EDAC (DpiFeatureStartDevice.c)
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlUnicodeStringCatString @ 0x14009D9E8 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x14009DAA0 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140289280 (-DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z.c)
 *     EnsureCacheSize @ 0x14028980C (EnsureCacheSize.c)
 */

__int64 __fastcall DxgkCreateFeatureDatabase(
        PCUNICODE_STRING SourceString,
        const struct _DXGKDDI_FEATURE_INTERFACE_2 *a2,
        unsigned __int8 a3,
        char a4,
        struct DXGK_FEATURE_DATABASE **a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 v11; // cl
  unsigned int v12; // esi
  __int64 v13; // rdi
  const wchar_t *v14; // r9
  NTSTRSAFE_PCWSTR v15; // rdx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  char v19; // [rsp+98h] [rbp-70h] BYREF

  v9 = operator new(0x3B0uLL, 0x44786746u, 256LL);
  v10 = v9;
  if ( v9 )
  {
    memset((void *)(v9 + 8), 0, 0x3A8uLL);
    *(_QWORD *)v10 = 0LL;
    if ( a2 )
    {
      *(_OWORD *)(v10 + 872) = *(_OWORD *)a2;
      *(_OWORD *)(v10 + 888) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v10 + 904) = *((_OWORD *)a2 + 2);
      *(_QWORD *)(v10 + 920) = *((_QWORD *)a2 + 6);
    }
    *(_QWORD *)(v10 + 928) = 0LL;
    v11 = 2 * a4;
    v12 = 0;
    *(_DWORD *)(v10 + 936) = (a3 | v11) & 3;
    while ( v12 < 0x10 )
    {
      v13 = v12;
      if ( *(_DWORD *)&asc_14013AD60[2 * v12] && !(unsigned __int8)EnsureCacheSize(v10, v12) )
      {
        WdLogSingleEntry1(6LL);
        v14 = L"Failed to allocate initial database cache for category %u";
        WdLogGlobalForLineNumber = 1355;
        goto LABEL_15;
      }
      ++v12;
    }
    *(_QWORD *)&DestinationString.Length = 34078720LL;
    DestinationString.Buffer = (wchar_t *)&v19;
    RtlUnicodeStringCopy(&DestinationString, SourceString);
    if ( RtlUnicodeStringCatString(&DestinationString, v15) < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1385;
    }
    else
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ZwOpenKey((PHANDLE)(v10 + 864), 0x20019u, &ObjectAttributes);
    }
    *(_QWORD *)(v10 + 736) = v10 + 264;
    *(_QWORD *)(v10 + 744) = v10 + 546;
    *(_QWORD *)(v10 + 752) = v10 + 594;
    *(_QWORD *)(v10 + 760) = v10 + 618;
    result = 0LL;
    *a5 = (struct DXGK_FEATURE_DATABASE *)v10;
  }
  else
  {
    v10 = 0LL;
    WdLogSingleEntry0(6LL);
    v13 = 1324LL;
    v14 = L"Failed to allocate feature database";
    WdLogGlobalForLineNumber = 1324;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    if ( v10 )
      DxgkDestroyFeatureDatabase((struct DXGK_FEATURE_DATABASE *)v10);
    return 3221225495LL;
  }
  return result;
}
