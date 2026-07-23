/*
 * XREFs of DifKeLeaveGuardedRegionWrapper @ 0x140665CA0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void DifKeLeaveGuardedRegionWrapper()
{
  __int128 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int128 *v2; // rdi
  int v3; // eax
  PVOID v4; // rax
  BOOLEAN v5; // bp
  __int128 *i; // rbx
  __int64 v7; // rdx
  BOOLEAN v8; // si
  _QWORD **v9; // rdi
  _QWORD *j; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(273);
  v2 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v3 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v3 & 0x18) != 0 )
    v4 = retaddr;
  else
    v4 = (v3 & 4) != 0 ? DifGetReturnAddressForWrappers() : 0LL;
  v5 = 0;
  v12 = v4;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v5 )
      goto LABEL_17;
  }
  for ( i = (__int128 *)*((_QWORD *)v2 + 4); i != v2 + 2; i = *(__int128 **)i )
  {
    if ( i != (__int128 *)16 )
      guard_dispatch_icall_no_overrides(&v12, v1);
  }
  if ( v5 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    KeLeaveGuardedRegion();
  }
  else
  {
LABEL_17:
    KeLeaveGuardedRegion();
    if ( !v2 )
      return;
  }
  v8 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v9 = (_QWORD **)(v2 + 3);
    for ( j = *v9; j != v9; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&v12, v7);
    }
    if ( v8 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
}
