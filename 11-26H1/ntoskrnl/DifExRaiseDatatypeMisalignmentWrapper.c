/*
 * XREFs of DifExRaiseDatatypeMisalignmentWrapper @ 0x140653580
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

void __noreturn DifExRaiseDatatypeMisalignmentWrapper()
{
  __int128 *APIThunkContextById; // rax
  __int64 v1; // rdx
  __int128 *v2; // rbx
  int v3; // eax
  PVOID v4; // rax
  BOOLEAN v5; // di
  _QWORD *v6; // rsi
  _QWORD *i; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  PVOID v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(392);
  v2 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v3 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v3 & 0x18) != 0 )
      v4 = retaddr;
    else
      v4 = (v3 & 4) != 0 ? DifGetReturnAddressForWrappers() : 0LL;
    if ( (v5 = 0, v9 = v4, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v5 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v6 = v2 + 2;
      for ( i = (_QWORD *)*((_QWORD *)v2 + 4); i != v6; i = (_QWORD *)*i )
      {
        if ( i != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v9, v1);
      }
      if ( v5 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  ExRaiseDatatypeMisalignment();
}
