/*
 * XREFs of DifZwAccessCheckByTypeResultListWrapper @ 0x14069B840
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheckByTypeResultList @ 0x140728C40 (ZwAccessCheckByTypeResultList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckByTypeResultListWrapper(
        void *a1,
        void *a2,
        void *a3,
        ACCESS_MASK a4,
        struct _OBJECT_TYPE_LIST *ObjectTypeList,
        ULONG ObjectTypeListLength,
        GENERIC_MAPPING *GenericMapping,
        struct _PRIVILEGE_SET *PrivilegeSet,
        ULONG *PrivilegeSetLength,
        ACCESS_MASK *GrantedAccess,
        NTSTATUS *AccessStatus)
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
  _QWORD v25[6]; // [rsp+68h] [rbp-69h] BYREF
  ULONG v26; // [rsp+98h] [rbp-39h]
  struct _OBJECT_TYPE_LIST *v27; // [rsp+A0h] [rbp-31h]
  ACCESS_MASK v28; // [rsp+A8h] [rbp-29h]
  void *v29; // [rsp+B0h] [rbp-21h]
  void *v30; // [rsp+B8h] [rbp-19h]
  void *v31; // [rsp+C0h] [rbp-11h]
  unsigned int v32; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v25, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(891);
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
  v31 = a1;
  v27 = ObjectTypeList;
  v26 = ObjectTypeListLength;
  v25[5] = GenericMapping;
  v25[4] = PrivilegeSet;
  v25[3] = PrivilegeSetLength;
  v25[2] = GrantedAccess;
  v25[1] = AccessStatus;
  v30 = a2;
  v29 = a3;
  v28 = a4;
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
  v32 = ZwAccessCheckByTypeResultList(
          a1,
          a2,
          a3,
          a4,
          ObjectTypeList,
          ObjectTypeListLength,
          GenericMapping,
          PrivilegeSet,
          PrivilegeSetLength,
          GrantedAccess,
          AccessStatus);
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
  return v32;
}
