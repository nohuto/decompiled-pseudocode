/*
 * XREFs of DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper @ 0x14066F880
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140B65300 (NtConvertBetweenAuxiliaryCounterAndPerformanceCounter.c)
 */

__int64 __fastcall DifNtConvertBetweenAuxiliaryCounterAndPerformanceCounterWrapper(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int128 *APIThunkContextById; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int128 *v10; // r14
  BOOLEAN v11; // si
  __int128 *i; // rbx
  __int64 v13; // rdx
  BOOLEAN v14; // di
  __int128 *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(719);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v9 = *((unsigned int *)APIThunkContextById + 3);
    if ( (v9 & 0x18) != 0 )
    {
      v9 = retaddr;
      *(_QWORD *)&v17 = retaddr;
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_QWORD *)&v17 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    LOBYTE(v19) = a1;
    *((_QWORD *)&v18 + 1) = a2;
    *(_QWORD *)&v18 = a3;
    *((_QWORD *)&v17 + 1) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v10 + 4); i != v10 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v17, v8);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v9) = a1;
  HIDWORD(v19) = NtConvertBetweenAuxiliaryCounterAndPerformanceCounter(
                   v9,
                   a2,
                   a3,
                   a4,
                   v17,
                   *((_QWORD *)&v17 + 1),
                   v18,
                   *((_QWORD *)&v18 + 1),
                   v19);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v10 + 6); j != v10 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v17, v13);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v19);
}
