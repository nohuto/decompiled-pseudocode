/*
 * XREFs of DifMmGetSystemRoutineAddressWrapper @ 0x14066ABC0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmGetSystemRoutineAddress @ 0x140A8B460 (MmGetSystemRoutineAddress.c)
 */

PVOID __fastcall DifMmGetSystemRoutineAddressWrapper(PUNICODE_STRING SystemRoutineName)
{
  __int128 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int128 *v4; // rsi
  int v5; // eax
  BOOLEAN v6; // di
  __int128 *i; // rbx
  __int64 v8; // rdx
  BOOLEAN v9; // di
  _QWORD **v10; // rsi
  _QWORD *j; // rbx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  PVOID SystemRoutineAddress; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v13 = 0LL;
  SystemRoutineAddress = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(467);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v13 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v13 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    *((_QWORD *)&v13 + 1) = SystemRoutineName;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v4 + 4); i != v4 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v13, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  SystemRoutineAddress = MmGetSystemRoutineAddress(SystemRoutineName);
  if ( v4 )
  {
    if ( (v9 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v10 = (_QWORD **)(v4 + 3);
      for ( j = *v10; j != v10; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v13, v8);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return SystemRoutineAddress;
}
