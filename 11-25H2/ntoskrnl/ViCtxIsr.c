/*
 * XREFs of ViCtxIsr @ 0x140B921B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViCtxCaptureInitialIsrState @ 0x140B91ECC (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140B91F70 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsr(__int64 a1, const void **a2)
{
  volatile signed __int32 *v4; // rsi
  char v5; // bl

  v4 = ViCtxCaptureInitialIsrState(a1);
  v5 = guard_dispatch_icall_no_overrides(a1);
  if ( v4 )
    ViCtxCheckAndReleaseIsrState((__int64)v4, *a2);
  return v5;
}
