/*
 * XREFs of DifNtNotifyChangeDirectoryFileExWrapper @ 0x14067C040
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 */

__int64 __fastcall DifNtNotifyChangeDirectoryFileExWrapper(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        volatile void *Address,
        int a7,
        int a8,
        char a9,
        int a10)
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
  SIZE_T Length; // [rsp+38h] [rbp-69h]
  PVOID v25; // [rsp+58h] [rbp-49h] BYREF
  int v26; // [rsp+60h] [rbp-41h]
  char v27; // [rsp+64h] [rbp-3Dh]
  int v28; // [rsp+68h] [rbp-39h]
  int v29; // [rsp+6Ch] [rbp-35h]
  volatile void *v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  __int64 v32; // [rsp+80h] [rbp-21h]
  __int64 v33; // [rsp+88h] [rbp-19h]
  void *v34; // [rsp+90h] [rbp-11h]
  __int64 v35; // [rsp+98h] [rbp-9h]
  unsigned int v36; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(&v25, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(634);
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
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = a5;
  v30 = Address;
  v29 = a7;
  v28 = a8;
  v27 = a9;
  v26 = a10;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v15 + 4); i != v15 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(Length) = a7;
  v36 = NtNotifyChangeDirectoryFileEx(a1, a2, a5, Address, Length, a8, a9, a10);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v15 + 6); j != v15 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v36;
}
