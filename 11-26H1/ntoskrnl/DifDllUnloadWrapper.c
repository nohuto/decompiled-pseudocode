/*
 * XREFs of DifDllUnloadWrapper @ 0x1406C3F88
 * Callers:
 *     MiCallDllUnload @ 0x14087B384 (MiCallDllUnload.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifDllUnloadWrapper(__int64 a1)
{
  __int128 *APIThunkContextById; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 VerifierData; // r15
  BOOLEAN v6; // bp
  __int128 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  BOOLEAN v13; // si
  __int128 *v14; // r14
  __int128 *j; // rdi
  _OWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  APIThunkContextById = 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a1);
  if ( !VerifierData )
    goto LABEL_13;
  APIThunkContextById = DifGetAPIThunkContextById(-2147483647);
  if ( !APIThunkContextById )
    goto LABEL_13;
  v6 = 0;
  *(_QWORD *)&v17[0] = a1;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v6 )
      goto LABEL_13;
  }
  for ( i = (__int128 *)*((_QWORD *)APIThunkContextById + 4); i != APIThunkContextById + 2; i = *(__int128 **)i )
  {
    if ( i != (__int128 *)16 )
      guard_dispatch_icall_no_overrides(v17, v3);
  }
  if ( v6 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    v11 = guard_dispatch_icall_no_overrides(v9, v8);
    DWORD2(v17[0]) = v11;
  }
  else
  {
LABEL_13:
    v12 = guard_dispatch_icall_no_overrides(v4, v3);
    v11 = v12;
    if ( !VerifierData )
      return v11;
    DWORD2(v17[0]) = v12;
    if ( !APIThunkContextById )
      return v11;
  }
  v13 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v14 = APIThunkContextById + 3;
    for ( j = (__int128 *)*((_QWORD *)APIThunkContextById + 6); j != v14; j = *(__int128 **)j )
    {
      if ( j != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v17, v10);
    }
    if ( v13 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
  return v11;
}
