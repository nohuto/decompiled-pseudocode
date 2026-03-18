/*
 * XREFs of DifNtCreateSectionExWrapper @ 0x1406735B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtCreateSectionEx @ 0x140868A80 (NtCreateSectionEx.c)
 */

__int64 __fastcall DifNtCreateSectionExWrapper(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *a8,
        int a9)
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
  PVOID v23; // [rsp+58h] [rbp-41h] BYREF
  int v24; // [rsp+60h] [rbp-39h]
  volatile void *v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  __int64 v29; // [rsp+80h] [rbp-19h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+90h] [rbp-9h]
  __int64 v32; // [rsp+98h] [rbp-1h]
  unsigned int Section; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(&v23, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(753);
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
  v23 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v32 = a1;
  v28 = a5;
  v27 = a6;
  v26 = a7;
  v25 = a8;
  v24 = a9;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v14 + 4); i != v14 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v23, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Section = NtCreateSectionEx(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v14 + 6); j != v14 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Section;
}
