/*
 * XREFs of DifZwSignalAndWaitForSingleObjectWrapper @ 0x1406BCEA0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwSignalAndWaitForSingleObject @ 0x140726D10 (ZwSignalAndWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwSignalAndWaitForSingleObjectWrapper(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int128 *APIThunkContextById; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 *v10; // rsi
  int v11; // eax
  BOOLEAN v12; // r14
  __int128 *i; // rbx
  __int64 v14; // rdx
  BOOLEAN v15; // di
  _QWORD **v16; // rsi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(902);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v19 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v19 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *(_QWORD *)&v21 = a1;
    *((_QWORD *)&v20 + 1) = a2;
    LOBYTE(v20) = a3;
    *((_QWORD *)&v19 + 1) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v10 + 4); i != v10 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v8);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v9) = a3;
  DWORD2(v21) = ZwSignalAndWaitForSingleObject(
                  a1,
                  a2,
                  v9,
                  a4,
                  v19,
                  *((_QWORD *)&v19 + 1),
                  v20,
                  *((_QWORD *)&v20 + 1),
                  v21,
                  *((_QWORD *)&v21 + 1));
  if ( v10 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v16 = (_QWORD **)(v10 + 3);
      for ( j = *v16; j != v16; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v19, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v21);
}
