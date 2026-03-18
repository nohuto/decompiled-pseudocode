/*
 * XREFs of ViCtxIsrMessageBased @ 0x140C41020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ViCtxCaptureInitialIsrState @ 0x140C40CDC (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140C40D80 (ViCtxCheckAndReleaseIsrState.c)
 */

char __fastcall ViCtxIsrMessageBased(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rbp
  char v5; // bl

  v4 = ViCtxCaptureInitialIsrState(a1);
  v5 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8));
  if ( v4 )
    ViCtxCheckAndReleaseIsrState((__int64)v4, *(const void **)(a2 + 16));
  return v5;
}
