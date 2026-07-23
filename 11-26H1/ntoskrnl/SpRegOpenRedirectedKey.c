/*
 * XREFs of SpRegOpenRedirectedKey @ 0x140840930
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x14083EFE8 (ExpOsProductCacheProviderHelper.c)
 *     sub_14083F2FC @ 0x14083F2FC (sub_14083F2FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SpRegOpenKey @ 0x140840894 (SpRegOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  int v6; // ebx
  ULONG BufferLengthIn; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  HANDLE v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v12; // [rsp+70h] [rbp+20h] BYREF
  ULONG BufferLengthOut; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  TargetPath = 0LL;
  v12 = 0LL;
  BufferLengthOut = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             off_140FD65F0,
                             L"TargetNtPath",
                             0LL,
                             LocationTypeRegistry,
                             0LL,
                             0,
                             &BufferLengthOut);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !TargetPath )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(
           off_140FD65F0,
           L"TargetNtPath",
           0LL,
           LocationTypeRegistry,
           TargetPath,
           BufferLengthIn,
           &BufferLengthOut);
    if ( v6 < 0 )
    {
LABEL_15:
      ExFreePoolWithTag(TargetPath, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, TargetPath);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_11;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140FD65F8;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 < 0 )
  {
    v9 = v12;
    goto LABEL_12;
  }
LABEL_11:
  v9 = 0LL;
  *a3 = v12;
LABEL_12:
  if ( v9 )
    ZwClose(v9);
  if ( TargetPath )
    goto LABEL_15;
  return (unsigned int)v6;
}
