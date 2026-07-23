/*
 * XREFs of DifNtAccessCheckAndAuditAlarmWrapper @ 0x14066C9B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtAccessCheckAndAuditAlarm @ 0x140A5E090 (NtAccessCheckAndAuditAlarm.c)
 */

__int64 __fastcall DifNtAccessCheckAndAuditAlarmWrapper(
        UNICODE_STRING *a1,
        void *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        GENERIC_MAPPING *GenericMapping,
        BOOLEAN ObjectCreation,
        ACCESS_MASK *GrantedAccess,
        NTSTATUS *AccessStatus,
        BOOLEAN *GenerateOnClose)
{
  __int128 *APIThunkContextById; // rax
  __int64 v15; // rdx
  __int128 *v16; // r14
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // si
  __int128 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  __int128 *j; // rbx
  _QWORD v25[4]; // [rsp+68h] [rbp-69h] BYREF
  BOOLEAN v26; // [rsp+88h] [rbp-49h]
  GENERIC_MAPPING *v27; // [rsp+90h] [rbp-41h]
  ACCESS_MASK v28; // [rsp+98h] [rbp-39h]
  PSECURITY_DESCRIPTOR v29; // [rsp+A0h] [rbp-31h]
  UNICODE_STRING *v30; // [rsp+A8h] [rbp-29h]
  UNICODE_STRING *v31; // [rsp+B0h] [rbp-21h]
  void *v32; // [rsp+B8h] [rbp-19h]
  UNICODE_STRING *v33; // [rsp+C0h] [rbp-11h]
  unsigned int v34; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v25, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(490);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v25[0] = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v33 = a1;
  v29 = SecurityDescriptor;
  v28 = DesiredAccess;
  v27 = GenericMapping;
  v26 = ObjectCreation;
  v25[3] = GrantedAccess;
  v25[2] = AccessStatus;
  v25[1] = GenerateOnClose;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v16 + 4); i != v16 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v25, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v34 = NtAccessCheckAndAuditAlarm(
          a1,
          a2,
          a3,
          a4,
          SecurityDescriptor,
          DesiredAccess,
          GenericMapping,
          ObjectCreation,
          GrantedAccess,
          AccessStatus,
          GenerateOnClose);
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v16 + 6); j != v16 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v25, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v34;
}
