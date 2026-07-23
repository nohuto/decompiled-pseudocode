/*
 * XREFs of DifIoGetInitialStackWrapper @ 0x140660760
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetInitialStack @ 0x140B1C7D0 (IoGetInitialStack.c)
 */

__int64 DifIoGetInitialStackWrapper()
{
  __int128 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int128 *v2; // rdi
  int v3; // eax
  BOOLEAN v4; // si
  __int128 *i; // rbx
  __int64 v6; // rdx
  BOOLEAN v7; // si
  _QWORD **v8; // rdi
  _QWORD *j; // rbx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v11 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(330);
  v2 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v3 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v3 & 0x18) != 0 )
    {
      *(_QWORD *)&v11 = retaddr;
    }
    else if ( (v3 & 4) != 0 )
    {
      *(_QWORD *)&v11 = DifGetReturnAddressForWrappers();
    }
    v4 = 0;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v4 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v2 + 4); i != v2 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v11, v1);
      }
      if ( v4 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  *((_QWORD *)&v11 + 1) = IoGetInitialStack();
  if ( v2 )
  {
    if ( (v7 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v8 = (_QWORD **)(v2 + 3);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v11, v6);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v11 + 1);
}
