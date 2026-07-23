/*
 * XREFs of DifNtUmsThreadYieldWrapper @ 0x140693880
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifNtUmsThreadYieldWrapper(__int64 a1)
{
  __int128 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int128 *v4; // rsi
  int v5; // eax
  BOOLEAN v6; // bp
  __int128 *i; // rbx
  BOOLEAN v8; // di
  _QWORD **v9; // rsi
  _QWORD *j; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v12 = 0LL;
  v13 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(741);
  v4 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_16;
  v5 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v5 & 0x18) != 0 )
  {
    *(_QWORD *)&v12 = retaddr;
  }
  else if ( (v5 & 4) != 0 )
  {
    *(_QWORD *)&v12 = DifGetReturnAddressForWrappers();
  }
  v6 = 0;
  *((_QWORD *)&v12 + 1) = a1;
  if ( VfDifRunningWithoutReboot || (VfOptionFlags & 0x800) != 0 )
  {
    v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown);
    if ( !v6 )
      goto LABEL_16;
  }
  for ( i = (__int128 *)*((_QWORD *)v4 + 4); i != v4 + 2; i = *(__int128 **)i )
  {
    if ( i != (__int128 *)16 )
      guard_dispatch_icall_no_overrides(&v12, v3);
  }
  if ( v6 )
  {
    ExReleaseRundownProtection_0(&DifRebootlessRundown);
    LODWORD(v13) = -1073741637;
  }
  else
  {
LABEL_16:
    LODWORD(v13) = -1073741637;
    if ( !v4 )
      return (unsigned int)v13;
  }
  v8 = 0;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    v9 = (_QWORD **)(v4 + 3);
    for ( j = *v9; j != v9; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&v12, v3);
    }
    if ( v8 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
  return (unsigned int)v13;
}
