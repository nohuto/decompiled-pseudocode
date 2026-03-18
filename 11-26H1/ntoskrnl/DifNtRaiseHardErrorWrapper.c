/*
 * XREFs of DifNtRaiseHardErrorWrapper @ 0x1406875B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtRaiseHardError @ 0x140840420 (NtRaiseHardError.c)
 */

__int64 __fastcall DifNtRaiseHardErrorWrapper(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int128 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int128 *v11; // rsi
  int v12; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // r14
  __int128 *i; // rbx
  __int64 v16; // rdx
  BOOLEAN v17; // di
  _QWORD **v18; // rsi
  _QWORD *j; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(727);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v21 = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  LODWORD(v22) = a5;
  *((_QWORD *)&v21 + 1) = a6;
  *(_QWORD *)((char *)&v23 + 4) = __PAIR64__(a1, a2);
  LODWORD(v23) = a3;
  *((_QWORD *)&v22 + 1) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v21, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  HIDWORD(v23) = NtRaiseHardError(
                   a1,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   v21,
                   *((_QWORD *)&v21 + 1),
                   v22,
                   *((_QWORD *)&v22 + 1),
                   v23,
                   *((_QWORD *)&v23 + 1));
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v18 = (_QWORD **)(v11 + 3);
      for ( j = *v18; j != v18; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v21, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v23);
}
