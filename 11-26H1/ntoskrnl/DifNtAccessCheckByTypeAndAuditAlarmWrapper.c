/*
 * XREFs of DifNtAccessCheckByTypeAndAuditAlarmWrapper @ 0x14066CBC0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x140A5DFE0 (NtAccessCheckByTypeAndAuditAlarm.c)
 */

__int64 __fastcall DifNtAccessCheckByTypeAndAuditAlarmWrapper(
        UNICODE_STRING *a1,
        void *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
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
  __int64 v20; // rdx
  __int128 *v21; // rsi
  int v22; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v24; // r14
  __int128 *i; // rbx
  __int64 v26; // rdx
  BOOLEAN v27; // di
  _QWORD **v28; // rsi
  _QWORD *j; // rbx
  _QWORD v31[4]; // [rsp+88h] [rbp-80h] BYREF
  BOOLEAN v32; // [rsp+A8h] [rbp-60h]
  GENERIC_MAPPING *v33; // [rsp+B0h] [rbp-58h]
  ULONG v34; // [rsp+B8h] [rbp-50h]
  struct _OBJECT_TYPE_LIST *v35; // [rsp+C0h] [rbp-48h]
  ULONG v36; // [rsp+C8h] [rbp-40h]
  AUDIT_EVENT_TYPE v37; // [rsp+CCh] [rbp-3Ch]
  ACCESS_MASK v38; // [rsp+D0h] [rbp-38h]
  PSID v39; // [rsp+D8h] [rbp-30h]
  PSECURITY_DESCRIPTOR v40; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING *v41; // [rsp+E8h] [rbp-20h]
  UNICODE_STRING *v42; // [rsp+F0h] [rbp-18h]
  void *v43; // [rsp+F8h] [rbp-10h]
  UNICODE_STRING *v44; // [rsp+100h] [rbp-8h]
  unsigned int v45; // [rsp+108h] [rbp+0h]
  void *retaddr; // [rsp+140h] [rbp+38h]

  memset_0(v31, 0, 0x88uLL);
  APIThunkContextById = DifGetAPIThunkContextById(491);
  v21 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v22 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v22 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v22 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v31[0] = ReturnAddressForWrappers;
LABEL_7:
  v24 = 0;
  v44 = a1;
  v40 = SecurityDescriptor;
  v39 = PrincipalSelfSid;
  v38 = DesiredAccess;
  v37 = AuditType;
  v36 = Flags;
  v35 = ObjectTypeList;
  v34 = ObjectTypeListLength;
  v33 = GenericMapping;
  v32 = ObjectCreation;
  v31[3] = GrantedAccess;
  v31[2] = AccessStatus;
  v31[1] = GenerateOnClose;
  v43 = a2;
  v42 = a3;
  v41 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v21 + 4); i != v21 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v31, v20);
    }
    if ( v24 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v45 = NtAccessCheckByTypeAndAuditAlarm(
          a1,
          a2,
          a3,
          a4,
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
  if ( v21 )
  {
    if ( (v27 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v27 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v28 = (_QWORD **)(v21 + 3);
      for ( j = *v28; j != v28; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v31, v26);
      }
      if ( v27 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v45;
}
