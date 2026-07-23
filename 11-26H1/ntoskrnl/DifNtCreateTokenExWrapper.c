/*
 * XREFs of DifNtCreateTokenExWrapper @ 0x140678110
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 */

__int64 __fastcall DifNtCreateTokenExWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        TOKEN_TYPE a4,
        struct _LUID *AuthenticationId,
        LARGE_INTEGER *ExpirationTime,
        _TOKEN_USER *User,
        struct _TOKEN_GROUPS *Groups,
        struct _TOKEN_PRIVILEGES *Privileges,
        _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *UserAttributes,
        _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *DeviceAttributes,
        struct _TOKEN_GROUPS *DeviceGroups,
        _TOKEN_MANDATORY_POLICY *MandatoryPolicy,
        _TOKEN_OWNER *Owner,
        _TOKEN_PRIMARY_GROUP *PrimaryGroup,
        _TOKEN_DEFAULT_DACL *DefaultDacl,
        struct _TOKEN_SOURCE *Source)
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
  _QWORD v32[14]; // [rsp+98h] [rbp-80h] BYREF
  TOKEN_TYPE v33; // [rsp+108h] [rbp-10h]
  OBJECT_ATTRIBUTES *v34; // [rsp+110h] [rbp-8h]
  ACCESS_MASK v35; // [rsp+118h] [rbp+0h]
  HANDLE *v36; // [rsp+120h] [rbp+8h]
  unsigned int Token; // [rsp+128h] [rbp+10h]
  void *retaddr; // [rsp+160h] [rbp+48h]

  memset_0(v32, 0, 0x98uLL);
  APIThunkContextById = DifGetAPIThunkContextById(510);
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
  v36 = a1;
  v32[13] = AuthenticationId;
  v32[12] = ExpirationTime;
  v32[11] = User;
  v32[10] = Groups;
  v32[9] = Privileges;
  v32[8] = UserAttributes;
  v32[7] = DeviceAttributes;
  v32[6] = DeviceGroups;
  v32[5] = MandatoryPolicy;
  v32[4] = Owner;
  v32[3] = PrimaryGroup;
  v32[2] = DefaultDacl;
  v32[1] = Source;
  v35 = a2;
  v34 = a3;
  v33 = a4;
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
  Token = NtCreateTokenEx(
            a1,
            a2,
            a3,
            a4,
            AuthenticationId,
            ExpirationTime,
            User,
            Groups,
            Privileges,
            UserAttributes,
            DeviceAttributes,
            DeviceGroups,
            MandatoryPolicy,
            Owner,
            PrimaryGroup,
            DefaultDacl,
            Source);
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
  return Token;
}
