/*
 * XREFs of DifIoIsWdmVersionAvailableWrapper @ 0x14065D160
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IoIsWdmVersionAvailable @ 0x140B0A4D0 (IoIsWdmVersionAvailable.c)
 */

char __fastcall DifIoIsWdmVersionAvailableWrapper(UCHAR a1, UCHAR a2)
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
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v15[0] = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(326);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v15[0] = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v15[0] = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    BYTE9(v15[0]) = a1;
    BYTE8(v15[0]) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v6 + 4); i != v6 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v15, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  BYTE10(v15[0]) = IoIsWdmVersionAvailable(a1, a2);
  if ( v6 )
  {
    if ( (v11 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v12 = (_QWORD **)(v6 + 3);
      for ( j = *v12; j != v12; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v15, v10);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return BYTE10(v15[0]);
}
