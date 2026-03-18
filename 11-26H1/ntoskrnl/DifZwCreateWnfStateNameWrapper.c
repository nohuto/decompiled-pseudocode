/*
 * XREFs of DifZwCreateWnfStateNameWrapper @ 0x1406A36F0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwCreateWnfStateName @ 0x140724E70 (ZwCreateWnfStateName.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwCreateWnfStateNameWrapper(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        int a6,
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
  _QWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  char v25; // [rsp+60h] [rbp-20h]
  unsigned int v26; // [rsp+64h] [rbp-1Ch]
  unsigned int v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  unsigned int WnfStateName; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v22, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(1049);
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
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v28 = a1;
  v24 = a5;
  v23 = a6;
  v22[1] = a7;
  v27 = a2;
  v26 = a3;
  v25 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v13 + 4); i != v13 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v22, v11);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LOBYTE(v12) = a4;
  WnfStateName = ZwCreateWnfStateName(a1, a2, a3, v12, a5, a6, a7);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v13 + 6); j != v13 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return WnfStateName;
}
