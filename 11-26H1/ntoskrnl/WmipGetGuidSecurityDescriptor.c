/*
 * XREFs of WmipGetGuidSecurityDescriptor @ 0x140A0F458
 * Callers:
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140A0FF10 (RtlGetPersistedStateLocation.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGetGuidSecurityDescriptor(__int64 a1, PVOID *a2)
{
  ULONG BufferLengthIn; // esi
  WCHAR *Pool2; // rdi
  int RegistryValues; // eax
  NTSTATUS PersistedStateLocation; // eax
  PVOID v8; // rcx
  ULONG TargetPath; // [rsp+20h] [rbp-E0h]
  ULONG TargetPatha; // [rsp+20h] [rbp-E0h]
  ULONG BufferLengthOut; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v15[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  PSECURITY_DESCRIPTOR *v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+80h] [rbp-80h]
  PSECURITY_DESCRIPTOR *v19; // [rsp+88h] [rbp-78h]
  ULONG v20; // [rsp+90h] [rbp-70h]
  void *v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  const wchar_t *v23; // [rsp+A8h] [rbp-58h]
  PVOID *p_P; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  PVOID *v26; // [rsp+C0h] [rbp-40h]
  ULONG v27; // [rsp+C8h] [rbp-38h]

  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  BufferLengthIn = 0;
  BufferLengthOut = 0;
  Pool2 = 0LL;
  memset_0(v15, 0, 0xA8uLL);
  v22 = 0;
  *(_QWORD *)v15 = &WmipSDRegistryQueryRoutine;
  v18 = 3;
  v17 = SecurityDescriptor;
  v16 = *(_QWORD *)(a1 + 8);
  p_P = &P;
  v21 = &WmipSDRegistryQueryRoutine;
  v25 = 3;
  v23 = L"00000000-0000-0000-0000-000000000000";
  RegistryValues = RtlpQueryRegistryValues(2, (int)L"WMI\\Security", (int)v15, 0, TargetPath, 1);
  *a2 = 0LL;
  if ( RegistryValues < 0 )
    goto LABEL_17;
  while ( 1 )
  {
    if ( BufferLengthIn )
    {
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               LocationTypeRegistry,
                               Pool2,
                               BufferLengthIn,
                               &BufferLengthOut);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
    BufferLengthIn = BufferLengthOut;
  }
  if ( !PersistedStateLocation )
  {
    if ( SecurityDescriptor[0] )
    {
      v19 = SecurityDescriptor;
      v20 = RtlLengthSecurityDescriptor(SecurityDescriptor[0]);
    }
    if ( P )
    {
      v26 = &P;
      v27 = RtlLengthSecurityDescriptor(P);
    }
    RtlpQueryRegistryValues(0, (int)Pool2, (int)v15, 0, TargetPatha, 1);
  }
  if ( SecurityDescriptor[0] )
  {
    v8 = P;
    *a2 = SecurityDescriptor[0];
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else if ( P )
  {
    *a2 = P;
  }
  if ( !*a2 )
LABEL_17:
    *a2 = (PVOID)WmipDefaultAccessSd;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
