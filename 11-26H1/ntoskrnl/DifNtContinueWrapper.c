/*
 * XREFs of DifNtContinueWrapper @ 0x14066F710
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     NtContinue @ 0x1407273E0 (NtContinue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifNtContinueWrapper(__int64 a1, char a2)
{
  __int128 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int128 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // bp
  __int128 *i; // rbx
  __int64 v10; // rdx
  BOOLEAN v11; // di
  _QWORD **v12; // rsi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(575);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v15 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v15 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    *(_QWORD *)&v16 = a1;
    BYTE8(v15) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v6 + 4); i != v6 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v15, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v5) = a2;
  DWORD2(v16) = NtContinue(a1, v5);
  if ( v6 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(v6 + 3);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v15, v10);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v16);
}
