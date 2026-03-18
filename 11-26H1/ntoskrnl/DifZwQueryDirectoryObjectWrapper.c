/*
 * XREFs of DifZwQueryDirectoryObjectWrapper @ 0x1406B04E0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwQueryDirectoryObjectWrapper(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int128 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int128 *v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  __int128 *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  __int128 *j; // rbx
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(55);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v22 = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  *((_QWORD *)&v24 + 1) = a1;
  BYTE8(v23) = a5;
  *(_QWORD *)&v23 = a6;
  *((_QWORD *)&v22 + 1) = a7;
  *(_QWORD *)&v24 = a2;
  HIDWORD(v23) = a3;
  BYTE9(v23) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v13 + 4); i != v13 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v22, v11);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LOBYTE(v12) = a4;
  LODWORD(v25) = ZwQueryDirectoryObject(a1, a2, a3, v12, a5, a6, a7);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v13 + 6); j != v13 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v25;
}
