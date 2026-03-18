/*
 * XREFs of DifNtNotifyChangeKeyWrapper @ 0x14067C410
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtNotifyChangeKey @ 0x14097A110 (NtNotifyChangeKey.c)
 */

__int64 __fastcall DifNtNotifyChangeKeyWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        int a9,
        char a10)
{
  __int128 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int128 *v15; // r14
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // si
  __int128 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  __int128 *j; // rbx
  PVOID v24; // [rsp+58h] [rbp-49h] BYREF
  __int64 v25; // [rsp+60h] [rbp-41h]
  __int64 v26; // [rsp+68h] [rbp-39h]
  __int64 v27; // [rsp+70h] [rbp-31h]
  __int64 v28; // [rsp+78h] [rbp-29h]
  __int64 v29; // [rsp+80h] [rbp-21h]
  __int64 v30; // [rsp+88h] [rbp-19h]
  __int64 v31; // [rsp+90h] [rbp-11h]
  __int64 v32; // [rsp+98h] [rbp-9h]
  unsigned int v33; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(791);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v32 = a1;
  v28 = a5;
  HIDWORD(v27) = a6;
  LOBYTE(v27) = a7;
  v26 = a8;
  HIDWORD(v25) = a9;
  LOBYTE(v25) = a10;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v15 + 4); i != v15 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v33 = NtNotifyChangeKey(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v15 + 6); j != v15 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v33;
}
