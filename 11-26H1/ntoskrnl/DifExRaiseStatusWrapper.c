/*
 * XREFs of DifExRaiseStatusWrapper @ 0x140657220
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn DifExRaiseStatusWrapper(NTSTATUS Status)
{
  __int128 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int128 *v4; // rsi
  int v5; // eax
  BOOLEAN v6; // di
  _QWORD **v7; // rsi
  _QWORD *i; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v9 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(391);
  v4 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v5 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v5 & 0x18) != 0 )
    {
      *(_QWORD *)&v9 = retaddr;
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_QWORD *)&v9 = DifGetReturnAddressForWrappers();
    }
    v6 = 0;
    DWORD2(v9) = Status;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v6 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v7 = (_QWORD **)(v4 + 2);
      for ( i = *v7; i != v7; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v9, v3);
      }
      if ( v6 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  RtlRaiseStatus(Status);
}
