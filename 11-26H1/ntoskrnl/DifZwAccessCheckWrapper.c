/*
 * XREFs of DifZwAccessCheckWrapper @ 0x14069BC60
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheck @ 0x140727FC0 (ZwAccessCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckWrapper(
        void *a1,
        void *a2,
        ACCESS_MASK a3,
        GENERIC_MAPPING *a4,
        struct _PRIVILEGE_SET *PrivilegeSet,
        ULONG *PrivilegeSetLength,
        ACCESS_MASK *GrantedAccess,
        NTSTATUS *AccessStatus)
{
  __int128 *APIThunkContextById; // rax
  __int64 v12; // rdx
  __int128 *v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  __int128 *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  __int128 *j; // rbx
  _QWORD v22[6]; // [rsp+48h] [rbp-39h] BYREF
  ACCESS_MASK v23; // [rsp+78h] [rbp-9h]
  void *v24; // [rsp+80h] [rbp-1h]
  void *v25; // [rsp+88h] [rbp+7h]
  unsigned int v26; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v22, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(889);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v25 = a1;
  v22[4] = PrivilegeSet;
  v22[3] = PrivilegeSetLength;
  v22[2] = GrantedAccess;
  v22[1] = AccessStatus;
  v24 = a2;
  v23 = a3;
  v22[5] = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v13 + 4); i != v13 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v22, v12);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v26 = ZwAccessCheck(a1, a2, a3, a4, PrivilegeSet, PrivilegeSetLength, GrantedAccess, AccessStatus);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v13 + 6); j != v13 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v26;
}
