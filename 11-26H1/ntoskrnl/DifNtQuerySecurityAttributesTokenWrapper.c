/*
 * XREFs of DifNtQuerySecurityAttributesTokenWrapper @ 0x140685350
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 */

__int64 __fastcall DifNtQuerySecurityAttributesTokenWrapper(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int128 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int128 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int128 *i; // rbx
  __int64 v16; // rdx
  BOOLEAN v17; // di
  __int128 *j; // rbx
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  unsigned int SecurityAttributesToken; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v20, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(870);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v20[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v25 = a1;
  v21 = a5;
  v20[1] = a6;
  v24 = a2;
  v23 = a3;
  v22 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v20, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  SecurityAttributesToken = NtQuerySecurityAttributesToken(a1, a2, a3, a4, a5, a6);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v20, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return SecurityAttributesToken;
}
