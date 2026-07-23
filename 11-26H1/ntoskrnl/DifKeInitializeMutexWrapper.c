/*
 * XREFs of DifKeInitializeMutexWrapper @ 0x1406650D0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeInitializeMutexWrapper(struct _KMUTANT *a1, int a2)
{
  __int128 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int128 *v6; // rbp
  int v7; // eax
  BOOLEAN v8; // si
  __int128 *i; // rbx
  __int64 v10; // rdx
  BOOLEAN v11; // di
  __int128 *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  struct _KMUTANT *v14; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(281);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v13 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v13 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    v14 = a1;
    DWORD2(v13) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v6 + 4); i != v6 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v13, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  KiInitializeMutant(a1, 0LL, 1u, 0LL);
  if ( v6 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v6 + 6); j != v6 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v13, v10);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
