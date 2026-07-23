/*
 * XREFs of DifNtCreateTokenWrapper @ 0x1406783D0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateToken @ 0x14081AA30 (NtCreateToken.c)
 */

__int64 __fastcall DifNtCreateTokenWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        TOKEN_TYPE a4,
        struct _LUID *AuthenticationId,
        LARGE_INTEGER *ExpirationTime,
        _TOKEN_USER *User,
        struct _TOKEN_GROUPS *Groups,
        struct _TOKEN_PRIVILEGES *Privileges,
        _TOKEN_OWNER *Owner,
        _TOKEN_PRIMARY_GROUP *PrimaryGroup,
        _TOKEN_DEFAULT_DACL *DefaultDacl,
        struct _TOKEN_SOURCE *Source)
{
  __int128 *APIThunkContextById; // rax
  __int64 v17; // rdx
  __int128 *v18; // rsi
  int v19; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int128 *i; // rbx
  __int64 v23; // rdx
  BOOLEAN v24; // di
  _QWORD **v25; // rsi
  _QWORD *j; // rbx
  _QWORD v28[10]; // [rsp+78h] [rbp-79h] BYREF
  TOKEN_TYPE v29; // [rsp+C8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v30; // [rsp+D0h] [rbp-21h]
  ACCESS_MASK v31; // [rsp+D8h] [rbp-19h]
  HANDLE *v32; // [rsp+E0h] [rbp-11h]
  unsigned int Token; // [rsp+E8h] [rbp-9h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v28, 0, 0x78uLL);
  APIThunkContextById = DifGetAPIThunkContextById(506);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28[0] = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v32 = a1;
  v28[9] = AuthenticationId;
  v28[8] = ExpirationTime;
  v28[7] = User;
  v28[6] = Groups;
  v28[5] = Privileges;
  v28[4] = Owner;
  v28[3] = PrimaryGroup;
  v28[2] = DefaultDacl;
  v28[1] = Source;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v18 + 4); i != v18 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v28, v17);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Token = NtCreateToken(
            a1,
            a2,
            a3,
            a4,
            AuthenticationId,
            ExpirationTime,
            User,
            Groups,
            Privileges,
            Owner,
            PrimaryGroup,
            DefaultDacl,
            Source);
  if ( v18 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v25 = (_QWORD **)(v18 + 3);
      for ( j = *v25; j != v25; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v28, v23);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Token;
}
