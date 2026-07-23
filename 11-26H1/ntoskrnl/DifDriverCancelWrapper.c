/*
 * XREFs of DifDriverCancelWrapper @ 0x140651B80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverCancelWrapper(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int128 *APIThunkContextById; // rbp
  __int64 v6; // r8
  BOOLEAN v7; // si
  __int128 *i; // rbx
  __int64 v9; // rdx
  BOOLEAN v10; // di
  __int128 *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(1342177312);
  if ( APIThunkContextById )
  {
    if ( (v7 = 0, *(_QWORD *)&v12 = v6, v13 = a1, *((_QWORD *)&v12 + 1) = a2, !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v12, v4);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, a2);
  if ( APIThunkContextById )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)APIThunkContextById + 6); j != APIThunkContextById + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v12, v9);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
