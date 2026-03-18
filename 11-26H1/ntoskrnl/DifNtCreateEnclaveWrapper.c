/*
 * XREFs of DifNtCreateEnclaveWrapper @ 0x1406705B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 */

__int64 __fastcall DifNtCreateEnclaveWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        void *Src,
        int a8,
        __int64 a9)
{
  __int128 *APIThunkContextById; // rax
  __int64 v13; // rdx
  __int128 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int128 *i; // rbx
  __int64 v19; // rdx
  BOOLEAN v20; // di
  __int128 *j; // rbx
  _QWORD v23[2]; // [rsp+58h] [rbp-51h] BYREF
  int v24; // [rsp+68h] [rbp-41h]
  void *v25; // [rsp+70h] [rbp-39h]
  int v26; // [rsp+78h] [rbp-31h]
  __int64 v27; // [rsp+80h] [rbp-29h]
  __int64 v28; // [rsp+88h] [rbp-21h]
  __int64 v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  __int64 v31; // [rsp+A0h] [rbp-9h]
  unsigned int Enclave; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(757);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v23[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v31 = a1;
  v27 = a5;
  v26 = a6;
  v25 = Src;
  v24 = a8;
  v23[1] = a9;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v14 + 4); i != v14 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v23, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Enclave = NtCreateEnclave(a1, a2, a3, a4, a5, a6, Src, a8, a9);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v14 + 6); j != v14 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v23, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Enclave;
}
