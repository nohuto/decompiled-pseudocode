/*
 * XREFs of DifNtAcceptConnectPortWrapper @ 0x140668C20
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtAcceptConnectPort @ 0x1408E6330 (NtAcceptConnectPort.c)
 */

__int64 __fastcall DifNtAcceptConnectPortWrapper(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int128 *APIThunkContextById; // rax
  __int64 v10; // rdx
  int v11; // r9d
  __int128 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int128 *i; // rbx
  __int64 v17; // rdx
  BOOLEAN v18; // di
  __int128 *j; // rbx
  _QWORD v21[3]; // [rsp+30h] [rbp-40h] BYREF
  char v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  unsigned int v26; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(583);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v25 = a1;
  v21[2] = a5;
  v21[1] = a6;
  v24 = a2;
  v23 = a3;
  v22 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v12 + 4); i != v12 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v21, v10);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LOBYTE(v11) = a4;
  v26 = NtAcceptConnectPort(a1, a2, a3, v11, a5, a6);
  if ( v12 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v12 + 6); j != v12 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v21, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v26;
}
