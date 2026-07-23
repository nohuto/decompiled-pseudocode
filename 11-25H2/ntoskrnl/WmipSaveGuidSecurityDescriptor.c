/*
 * XREFs of WmipSaveGuidSecurityDescriptor @ 0x140796D88
 * Callers:
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 * Callees:
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x1409B3D60 (RtlGetPersistedStateLocation.c)
 *     RtlWriteRegistryValue @ 0x140A50A70 (RtlWriteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSaveGuidSecurityDescriptor(__int64 a1, void *a2)
{
  WCHAR *TargetPath; // rbx
  ULONG v5; // r14d
  ULONG BufferLengthIn; // edi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v8; // edi
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  TargetPath = 0LL;
  v5 = RtlLengthSecurityDescriptor(a2);
  BufferLengthIn = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    if ( BufferLengthIn )
    {
      TargetPath = (WCHAR *)ExAllocatePool2(0x100uLL);
      if ( !TargetPath )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( TargetPath )
    {
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
    }
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, TargetPath, *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return v8;
}
