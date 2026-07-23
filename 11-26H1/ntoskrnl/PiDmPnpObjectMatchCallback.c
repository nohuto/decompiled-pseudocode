/*
 * XREFs of PiDmPnpObjectMatchCallback @ 0x1407AA4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDmPnpObjectMatchCallback(__int64 a1, _QWORD *a2, char *a3)
{
  char v4; // al

  if ( *a2 )
    v4 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 16));
  else
    v4 = 1;
  *a3 = v4;
  return 0LL;
}
