/*
 * XREFs of DifKeAcquireQueuedSpinLockRaiseToSynchWrapper @ 0x140663CC0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405F2D40 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall DifKeAcquireQueuedSpinLockRaiseToSynchWrapper(__int64 a1)
{
  __int128 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int128 *v5; // rsi
  int v6; // eax
  BOOLEAN v7; // di
  __int128 *i; // rbx
  __int64 v9; // rdx
  BOOLEAN v10; // di
  _QWORD **v11; // rsi
  _QWORD *j; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(293);
  v5 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      *(_QWORD *)&v14 = retaddr;
    }
    else if ( (v6 & 4) != 0 )
    {
      *(_QWORD *)&v14 = DifGetReturnAddressForWrappers();
    }
    v7 = 0;
    *((_QWORD *)&v14 + 1) = a1;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v5 + 4); i != v5 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v14, v3);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v15) = KeAcquireQueuedSpinLockRaiseToSynch(a1, v3, v4);
  if ( v5 )
  {
    if ( (v10 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v11 = (_QWORD **)(v5 + 3);
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v14, v9);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v15;
}
