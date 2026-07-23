/*
 * XREFs of DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x1406639E0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405F2CD0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper(volatile __int64 *a1, __int64 a2)
{
  __int128 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int128 *v7; // rsi
  int v8; // eax
  BOOLEAN v9; // bp
  __int128 *i; // rbx
  __int64 v11; // rdx
  BOOLEAN v12; // di
  _QWORD **v13; // rsi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  volatile __int64 *v16; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(295);
  v7 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      *(_QWORD *)&v15 = retaddr;
    }
    else if ( (v8 & 4) != 0 )
    {
      *(_QWORD *)&v15 = DifGetReturnAddressForWrappers();
    }
    v9 = 0;
    v16 = a1;
    *((_QWORD *)&v15 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v7 + 4); i != v7 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v15, v5);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  KeAcquireInStackQueuedSpinLockRaiseToSynch(a1, a2, v6);
  if ( v7 )
  {
    if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v13 = (_QWORD **)(v7 + 3);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v15, v11);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
