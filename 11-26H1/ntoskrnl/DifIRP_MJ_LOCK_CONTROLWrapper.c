/*
 * XREFs of DifIRP_MJ_LOCK_CONTROLWrapper @ 0x14065AD50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifIRP_MJ_LOCK_CONTROLWrapper(__int64 a1, __int64 a2)
{
  __int128 *APIThunkContextById; // rbp
  BOOLEAN v5; // si
  __int64 v6; // rdx
  __int128 *i; // rbx
  __int64 v8; // rdx
  BOOLEAN v9; // di
  __int128 *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(1342177297);
  if ( APIThunkContextById )
  {
    if ( (v5 = 0,
          v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL)
                         + 8LL * **(unsigned __int8 **)(a2 + 184)
                         + 32),
          *(_QWORD *)&v12 = v6,
          *(_QWORD *)&v13 = a1,
          *((_QWORD *)&v12 + 1) = a2,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v12, v6);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v13) = guard_dispatch_icall_no_overrides(a1, a2);
  if ( APIThunkContextById )
  {
    if ( (v9 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)APIThunkContextById + 6); j != APIThunkContextById + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v12, v8);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v13);
}
