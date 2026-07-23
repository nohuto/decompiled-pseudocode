/*
 * XREFs of DifNtOpenObjectAuditAlarmWrapper @ 0x140681B80
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 */

__int64 __fastcall DifNtOpenObjectAuditAlarmWrapper(
        UNICODE_STRING *a1,
        void *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        struct _PRIVILEGE_SET *Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        BOOLEAN *GenerateOnClose)
{
  __int128 *APIThunkContextById; // rax
  __int64 v16; // rdx
  __int128 *v17; // rsi
  int v18; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int128 *i; // rbx
  __int64 v22; // rdx
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  _QWORD v27[2]; // [rsp+68h] [rbp-59h] BYREF
  BOOLEAN v28; // [rsp+78h] [rbp-49h]
  BOOLEAN v29; // [rsp+79h] [rbp-48h]
  struct _PRIVILEGE_SET *v30; // [rsp+80h] [rbp-41h]
  ACCESS_MASK v31; // [rsp+88h] [rbp-39h]
  ACCESS_MASK v32; // [rsp+8Ch] [rbp-35h]
  HANDLE v33; // [rsp+90h] [rbp-31h]
  PSECURITY_DESCRIPTOR v34; // [rsp+98h] [rbp-29h]
  UNICODE_STRING *v35; // [rsp+A0h] [rbp-21h]
  UNICODE_STRING *v36; // [rsp+A8h] [rbp-19h]
  void *v37; // [rsp+B0h] [rbp-11h]
  UNICODE_STRING *v38; // [rsp+B8h] [rbp-9h]
  unsigned int v39; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(v27, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(494);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v27[0] = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v38 = a1;
  v34 = SecurityDescriptor;
  v33 = ClientToken;
  v32 = DesiredAccess;
  v31 = GrantedAccess;
  v30 = Privileges;
  v29 = ObjectCreation;
  v28 = AccessGranted;
  v27[1] = GenerateOnClose;
  v37 = a2;
  v36 = a3;
  v35 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v17 + 4); i != v17 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v27, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v39 = NtOpenObjectAuditAlarm(
          a1,
          a2,
          a3,
          a4,
          SecurityDescriptor,
          ClientToken,
          DesiredAccess,
          GrantedAccess,
          Privileges,
          ObjectCreation,
          AccessGranted,
          GenerateOnClose);
  if ( v17 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v17 + 3);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v27, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v39;
}
