/*
 * XREFs of DifDllInitializeWrapper @ 0x1406C3E14
 * Callers:
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllInitializeWrapper(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *APIThunkContextById; // rsi
  __int64 v7; // rdx
  __int64 VerifierData; // r12
  BOOLEAN v9; // bp
  __int128 *i; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ebp
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h]

  v18 = 0LL;
  APIThunkContextById = 0LL;
  v19 = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a3);
  if ( VerifierData )
  {
    APIThunkContextById = DifGetAPIThunkContextById(0x80000000);
    if ( APIThunkContextById )
    {
      if ( (v9 = 0, *(_QWORD *)&v18 = a3, *((_QWORD *)&v18 + 1) = a1, *(_QWORD *)&v19 = a2, !VfDifRunningWithoutReboot)
        && (VfOptionFlags & 0x800) == 0
        || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
      {
        for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
        {
          if ( i != (__int128 *)16 )
            guard_dispatch_icall_no_overrides(&v18, v7);
        }
        if ( v9 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  v11 = guard_dispatch_icall_no_overrides(a1, v7);
  v13 = v11;
  if ( VerifierData )
  {
    DWORD2(v19) = v11;
    if ( APIThunkContextById )
    {
      if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
        || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
      {
        v15 = (_QWORD **)(APIThunkContextById + 3);
        for ( j = *v15; j != v15; j = (_QWORD *)*j )
        {
          if ( j != (_QWORD *)16 )
            guard_dispatch_icall_no_overrides(&v18, v12);
        }
        if ( v14 )
          ExReleaseRundownProtection_0(&DifRebootlessRundown);
      }
    }
  }
  return v13;
}
