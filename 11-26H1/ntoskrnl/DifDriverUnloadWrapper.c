/*
 * XREFs of DifDriverUnloadWrapper @ 0x140651FB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifDriverUnloadWrapper(__int64 a1)
{
  __int64 v2; // rdx
  __int128 *APIThunkContextById; // rsi
  BOOLEAN v4; // bp
  __int128 *i; // rbx
  __int64 v6; // rdx
  BOOLEAN v7; // di
  _QWORD **v8; // rsi
  _QWORD *j; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(1342177311);
  if ( APIThunkContextById )
  {
    if ( (v2 = *(_QWORD *)(a1 + 48),
          v4 = 0,
          *(_QWORD *)&v10 = **(_QWORD **)(v2 + 64),
          *((_QWORD *)&v10 + 1) = a1,
          !VfDifRunningWithoutReboot)
      && (VfOptionFlags & 0x800) == 0
      || (v4 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v10, v2);
      }
      if ( v4 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  guard_dispatch_icall_no_overrides(a1, v2);
  if ( APIThunkContextById )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(APIThunkContextById + 3);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v10, v6);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
