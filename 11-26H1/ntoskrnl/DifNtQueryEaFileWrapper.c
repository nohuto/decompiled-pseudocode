/*
 * XREFs of DifNtQueryEaFileWrapper @ 0x140682070
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 */

__int64 __fastcall DifNtQueryEaFileWrapper(
        __int64 a1,
        void *a2,
        volatile void *a3,
        unsigned int a4,
        char a5,
        volatile void *a6,
        int a7,
        __int64 a8,
        char a9)
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
  SIZE_T v23; // [rsp+38h] [rbp-61h]
  PVOID v24; // [rsp+58h] [rbp-41h] BYREF
  char v25; // [rsp+60h] [rbp-39h]
  __int64 v26; // [rsp+68h] [rbp-31h]
  int v27; // [rsp+70h] [rbp-29h]
  volatile void *v28; // [rsp+78h] [rbp-21h]
  char v29; // [rsp+80h] [rbp-19h]
  unsigned int v30; // [rsp+84h] [rbp-15h]
  volatile void *v31; // [rsp+88h] [rbp-11h]
  void *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  unsigned int EaFile; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(&v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(638);
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
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v33 = a1;
  v29 = a5;
  v28 = a6;
  v27 = a7;
  v26 = a8;
  v25 = a9;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v14 + 4); i != v14 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(v23) = a7;
  EaFile = NtQueryEaFile(a1, a2, a3, a4, a5, a6, v23, a8, a9);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v14 + 6); j != v14 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v24, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return EaFile;
}
