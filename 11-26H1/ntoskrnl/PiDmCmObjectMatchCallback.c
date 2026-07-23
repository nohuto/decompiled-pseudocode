/*
 * XREFs of PiDmCmObjectMatchCallback @ 0x140A80FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDmCmObjectMatchCallback(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  if ( *a2 )
    *a3 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 16));
  else
    *a3 = 1;
  return 0LL;
}
