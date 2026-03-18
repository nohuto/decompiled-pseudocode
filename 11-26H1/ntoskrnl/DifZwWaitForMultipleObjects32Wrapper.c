/*
 * XREFs of DifZwWaitForMultipleObjects32Wrapper @ 0x1406BF4A0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwWaitForMultipleObjects32 @ 0x140723730 (ZwWaitForMultipleObjects32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwWaitForMultipleObjects32Wrapper(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  __int128 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int128 *v11; // r14
  int v12; // ecx
  BOOLEAN v13; // si
  __int128 *i; // rbx
  __int64 v15; // rdx
  BOOLEAN v16; // di
  __int128 *j; // rbx
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(903);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      *(_QWORD *)&v19 = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)&v19 = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    LODWORD(v21) = a1;
    *((_QWORD *)&v19 + 1) = a5;
    *((_QWORD *)&v20 + 1) = a2;
    DWORD1(v20) = a3;
    LOBYTE(v20) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v9);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v10) = a4;
  HIDWORD(v21) = ZwWaitForMultipleObjects32(a1, a2, a3, v10, a5);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v21);
}
