/*
 * XREFs of DifNtEnumerateValueKeyWrapper @ 0x1406772A0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 */

__int64 __fastcall DifNtEnumerateValueKeyWrapper(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        size_t a5,
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
  size_t Size; // [rsp+20h] [rbp-50h]
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(790);
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
  *(_QWORD *)&v21 = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  *((_QWORD *)&v23 + 1) = a1;
  LODWORD(v22) = a5;
  *((_QWORD *)&v21 + 1) = a6;
  *(_QWORD *)&v23 = __PAIR64__(a2, a3);
  *((_QWORD *)&v22 + 1) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v21, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(Size) = a5;
  LODWORD(v24) = NtEnumerateValueKey(a1, Size, a6);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v21, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v24;
}
