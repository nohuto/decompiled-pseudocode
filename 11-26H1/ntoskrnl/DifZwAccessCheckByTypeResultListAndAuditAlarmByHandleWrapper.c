/*
 * XREFs of DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper @ 0x14069B320
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140728C80 (ZwAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper(
        UNICODE_STRING *a1,
        void *a2,
        void *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        ACCESS_MASK DesiredAccess,
        AUDIT_EVENT_TYPE AuditType,
        ULONG Flags,
        struct _OBJECT_TYPE_LIST *ObjectTypeList,
        ULONG ObjectTypeListLength,
        GENERIC_MAPPING *GenericMapping,
        BOOLEAN ObjectCreation,
        ACCESS_MASK *GrantedAccess,
        NTSTATUS *AccessStatus,
        BOOLEAN *GenerateOnClose)
{
  __int128 *APIThunkContextById; // rax
  __int64 v21; // rdx
  __int128 *v22; // rsi
  int v23; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v25; // r14
  __int128 *i; // rbx
  __int64 v27; // rdx
  BOOLEAN v28; // di
  _QWORD **v29; // rsi
  _QWORD *j; // rbx
  _QWORD v32[4]; // [rsp+98h] [rbp-80h] BYREF
  BOOLEAN v33; // [rsp+B8h] [rbp-60h]
  GENERIC_MAPPING *v34; // [rsp+C0h] [rbp-58h]
  ULONG v35; // [rsp+C8h] [rbp-50h]
  struct _OBJECT_TYPE_LIST *v36; // [rsp+D0h] [rbp-48h]
  ULONG v37; // [rsp+D8h] [rbp-40h]
  AUDIT_EVENT_TYPE v38; // [rsp+DCh] [rbp-3Ch]
  ACCESS_MASK v39; // [rsp+E0h] [rbp-38h]
  PSID v40; // [rsp+E8h] [rbp-30h]
  PSECURITY_DESCRIPTOR v41; // [rsp+F0h] [rbp-28h]
  UNICODE_STRING *v42; // [rsp+F8h] [rbp-20h]
  UNICODE_STRING *v43; // [rsp+100h] [rbp-18h]
  void *v44; // [rsp+108h] [rbp-10h]
  void *v45; // [rsp+110h] [rbp-8h]
  UNICODE_STRING *v46; // [rsp+118h] [rbp+0h]
  unsigned int v47; // [rsp+120h] [rbp+8h]
  void *retaddr; // [rsp+150h] [rbp+38h]

  memset_0(v32, 0, 0x90uLL);
  APIThunkContextById = DifGetAPIThunkContextById(884);
  v22 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v23 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v23 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v32[0] = ReturnAddressForWrappers;
LABEL_7:
  v25 = 0;
  v46 = a1;
  v42 = ObjectName;
  v41 = SecurityDescriptor;
  v40 = PrincipalSelfSid;
  v39 = DesiredAccess;
  v38 = AuditType;
  v37 = Flags;
  v36 = ObjectTypeList;
  v35 = ObjectTypeListLength;
  v34 = GenericMapping;
  v33 = ObjectCreation;
  v32[3] = GrantedAccess;
  v32[2] = AccessStatus;
  v32[1] = GenerateOnClose;
  v45 = a2;
  v44 = a3;
  v43 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v22 + 4); i != v22 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v32, v21);
    }
    if ( v25 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v47 = ZwAccessCheckByTypeResultListAndAuditAlarmByHandle(
          a1,
          a2,
          a3,
          a4,
          ObjectName,
          SecurityDescriptor,
          PrincipalSelfSid,
          DesiredAccess,
          AuditType,
          Flags,
          ObjectTypeList,
          ObjectTypeListLength,
          GenericMapping,
          ObjectCreation,
          GrantedAccess,
          AccessStatus,
          GenerateOnClose);
  if ( v22 )
  {
    if ( (v28 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v28 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v29 = (_QWORD **)(v22 + 3);
      for ( j = *v29; j != v29; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v32, v27);
      }
      if ( v28 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v47;
}
