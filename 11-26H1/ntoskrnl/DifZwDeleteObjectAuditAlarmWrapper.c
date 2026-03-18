/*
 * XREFs of DifZwDeleteObjectAuditAlarmWrapper @ 0x1406A41E0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwDeleteObjectAuditAlarm @ 0x140724F90 (ZwDeleteObjectAuditAlarm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifZwDeleteObjectAuditAlarmWrapper(__int64 a1, __int64 a2, char a3)
{
  __int128 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int128 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // r14
  __int128 *i; // rbx
  __int64 v13; // rdx
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(887);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    *((_QWORD *)&v19 + 1) = a1;
    *(_QWORD *)&v19 = a2;
    BYTE8(v18) = a3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v9 + 4); i != v9 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v7);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  LOBYTE(v8) = a3;
  LODWORD(v20) = ZwDeleteObjectAuditAlarm(a1, a2, v8);
  if ( v9 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v9 + 3);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v13);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return (unsigned int)v20;
}
