/*
 * XREFs of LdrpFindKnownDll @ 0x180079F80
 * Callers:
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     LdrpAllocateUnicodeString @ 0x180098350 (LdrpAllocateUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenSection @ 0x18015F520 (NtOpenSection.c)
 */

__int64 __fastcall LdrpFindKnownDll(
        UNICODE_STRING *Source,
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING Destination,
        PHANDLE SectionHandle)
{
  NTSTATUS v8; // eax
  int UnicodeString; // ebx
  const WCHAR *v11; // rbx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrmap.c",
    1904,
    (__int64)"LdrpFindKnownDll",
    3,
    "DLL name: %wZ\n",
    Source,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    ObjectAttributes.SecurityQualityOfService);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1905, (__int64)"LdrpFindKnownDll", 5, "%wZ\n", Source);
  if ( !LdrpKnownDllDirectoryHandle )
    goto LABEL_4;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenSection(SectionHandle, 0xDu, &ObjectAttributes);
  UnicodeString = v8;
  if ( v8 >= 0 )
  {
    UnicodeString = LdrpAllocateUnicodeString(Destination, Source->Length + (unsigned int)LdrpKnownDllPath.Length + 2);
    if ( UnicodeString < 0 )
    {
      NtClose(*SectionHandle);
    }
    else
    {
      RtlAppendUnicodeStringToString(Destination, &LdrpKnownDllPath);
      RtlAppendUnicodeToString(Destination, L"\\");
      v11 = (wchar_t *)((char *)Destination->Buffer + Destination->Length);
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlInitUnicodeStringEx(DestinationString, v11);
      UnicodeString = 0;
    }
  }
  else if ( v8 == -1073741772 )
  {
LABEL_4:
    UnicodeString = -1073741515;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1975, (__int64)"LdrpFindKnownDll", 4, "Status: 0x%08lx\n", UnicodeString);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 1976, (__int64)"LdrpFindKnownDll", 6, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
