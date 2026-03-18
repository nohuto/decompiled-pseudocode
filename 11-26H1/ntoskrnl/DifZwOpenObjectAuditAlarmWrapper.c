/*
 * XREFs of DifZwOpenObjectAuditAlarmWrapper @ 0x1406AC7A0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwOpenObjectAuditAlarm @ 0x140725A10 (ZwOpenObjectAuditAlarm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwOpenObjectAuditAlarmWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        char a10,
        char a11,
        __int64 a12)
{
  __int128 *APIThunkContextById; // rax
  __int64 v16; // rdx
  __int128 *v17; // rsi
  int v18; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int128 *i; // rbx
  __int64 v22; // rdx
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  PVOID v27; // [rsp+68h] [rbp-59h] BYREF
  __int64 v28; // [rsp+70h] [rbp-51h]
  int v29; // [rsp+78h] [rbp-49h]
  __int64 v30; // [rsp+80h] [rbp-41h]
  unsigned __int64 v31; // [rsp+88h] [rbp-39h]
  __int64 v32; // [rsp+90h] [rbp-31h]
  __int64 v33; // [rsp+98h] [rbp-29h]
  __int64 v34; // [rsp+A0h] [rbp-21h]
  __int64 v35; // [rsp+A8h] [rbp-19h]
  __int64 v36; // [rsp+B0h] [rbp-11h]
  __int64 v37; // [rsp+B8h] [rbp-9h]
  unsigned int v38; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v27, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(885);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v27 = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v37 = a1;
  v33 = a5;
  v32 = a6;
  v31 = __PAIR64__(a7, a8);
  v30 = a9;
  BYTE1(v29) = a10;
  LOBYTE(v29) = a11;
  v28 = a12;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v17 + 4); i != v17 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v27, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v38 = ZwOpenObjectAuditAlarm(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
  if ( v17 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v17 + 3);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v27, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v38;
}
