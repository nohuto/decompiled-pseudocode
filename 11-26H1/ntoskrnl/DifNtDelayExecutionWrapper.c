/*
 * XREFs of DifNtDelayExecutionWrapper @ 0x140675850
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtDelayExecution @ 0x1408F2960 (NtDelayExecution.c)
 */

__int64 __fastcall DifNtDelayExecutionWrapper(char a1, __int64 a2)
{
  __int128 *APIThunkContextById; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  __int128 *v7; // rsi
  int v8; // eax
  BOOLEAN v9; // bp
  __int128 *i; // rbx
  __int64 v11; // rdx
  BOOLEAN v12; // di
  _QWORD **v13; // rsi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(657);
  v7 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v8 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v8 & 0x18) != 0 )
    {
      v6 = retaddr;
      *(_QWORD *)&v16 = retaddr;
    }
    else if ( (v8 & 4) != 0 )
    {
      *(_QWORD *)&v16 = DifGetReturnAddressForWrappers();
    }
    v9 = 0;
    LOBYTE(v17) = a1;
    *((_QWORD *)&v16 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v9 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v7 + 4); i != v7 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v16, v5);
      }
      if ( v9 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v6) = a1;
  HIDWORD(v17) = NtDelayExecution(v6, a2);
  if ( v7 )
  {
    if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v13 = (_QWORD **)(v7 + 3);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v16, v11);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v17);
}
