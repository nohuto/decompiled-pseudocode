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
  void *Pool2; // rbx
  ULONG ValueLength; // r14d
  int v6; // edi
  unsigned int PersistedStateLocation; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  Pool2 = 0LL;
  ValueLength = RtlLengthSecurityDescriptor(a2);
  v6 = 0;
  LODWORD(v10) = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(L"ETWSecurityPath", Pool2, v6, (__int64)&v10);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    v6 = v10;
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, (PCWSTR)Pool2, *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v8;
}
