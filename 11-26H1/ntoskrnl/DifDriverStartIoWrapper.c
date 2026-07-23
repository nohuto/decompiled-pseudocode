/*
 * XREFs of DifDriverStartIoWrapper @ 0x140651E40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverStartIoWrapper(__int64 a1, __int64 a2)
{
  __int128 *APIThunkContextById; // rbp
  BOOLEAN v5; // si
  __int64 v6; // rdx
  __int128 *i; // rbx
  __int64 v8; // rdx
  BOOLEAN v9; // di
  __int128 *j; // rbx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  v11 = 0LL;
  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(1342177309);
  if ( APIThunkContextById )
  {
    if ( (v5 = 0,
          v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) + 64LL) + 8LL),
          *(_QWORD *)&v11 = v6,
          v12 = a1,
          *((_QWORD *)&v11 + 1) = a2,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v11, v6);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( APIThunkContextById )
  {
    if ( (v9 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)APIThunkContextById + 6); j != APIThunkContextById + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v11, v8);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
