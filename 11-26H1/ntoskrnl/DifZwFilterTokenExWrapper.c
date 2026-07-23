/*
 * XREFs of DifZwFilterTokenExWrapper @ 0x1406A99F0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwFilterTokenEx @ 0x140729D80 (ZwFilterTokenEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwFilterTokenExWrapper(
        void *a1,
        ULONG a2,
        struct _TOKEN_GROUPS *a3,
        struct _TOKEN_PRIVILEGES *a4,
        struct _TOKEN_GROUPS *RestrictedSids,
        ULONG DisableUserClaimsCount,
        UNICODE_STRING *UserClaimsToDisable,
        ULONG DisableDeviceClaimsCount,
        UNICODE_STRING *DeviceClaimsToDisable,
        struct _TOKEN_GROUPS *DeviceGroupsToDisable,
        _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *RestrictedUserAttributes,
        _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *RestrictedDeviceAttributes,
        struct _TOKEN_GROUPS *RestrictedDeviceGroups,
        HANDLE *NewTokenHandle)
{
  __int128 *APIThunkContextById; // rax
  __int64 v18; // rdx
  __int128 *v19; // rsi
  int v20; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v22; // r14
  __int128 *i; // rbx
  __int64 v24; // rdx
  BOOLEAN v25; // di
  _QWORD **v26; // rsi
  _QWORD *j; // rbx
  _QWORD v29[7]; // [rsp+78h] [rbp-79h] BYREF
  ULONG v30; // [rsp+B0h] [rbp-41h]
  UNICODE_STRING *v31; // [rsp+B8h] [rbp-39h]
  ULONG v32; // [rsp+C0h] [rbp-31h]
  struct _TOKEN_GROUPS *v33; // [rsp+C8h] [rbp-29h]
  struct _TOKEN_PRIVILEGES *v34; // [rsp+D0h] [rbp-21h]
  struct _TOKEN_GROUPS *v35; // [rsp+D8h] [rbp-19h]
  ULONG v36; // [rsp+E0h] [rbp-11h]
  void *v37; // [rsp+E8h] [rbp-9h]
  unsigned int v38; // [rsp+F0h] [rbp-1h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v29, 0, 0x80uLL);
  APIThunkContextById = DifGetAPIThunkContextById(899);
  v19 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v20 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v20 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v29[0] = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v37 = a1;
  v33 = RestrictedSids;
  v32 = DisableUserClaimsCount;
  v31 = UserClaimsToDisable;
  v30 = DisableDeviceClaimsCount;
  v29[6] = DeviceClaimsToDisable;
  v29[5] = DeviceGroupsToDisable;
  v29[4] = RestrictedUserAttributes;
  v29[3] = RestrictedDeviceAttributes;
  v29[2] = RestrictedDeviceGroups;
  v29[1] = NewTokenHandle;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v19 + 4); i != v19 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v29, v18);
    }
    if ( v22 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v38 = ZwFilterTokenEx(
          a1,
          a2,
          a3,
          a4,
          RestrictedSids,
          DisableUserClaimsCount,
          UserClaimsToDisable,
          DisableDeviceClaimsCount,
          DeviceClaimsToDisable,
          DeviceGroupsToDisable,
          RestrictedUserAttributes,
          RestrictedDeviceAttributes,
          RestrictedDeviceGroups,
          NewTokenHandle);
  if ( v19 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v19 + 3);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v29, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v38;
}
