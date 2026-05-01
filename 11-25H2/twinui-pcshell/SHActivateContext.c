/*
 * XREFs of SHActivateContext @ 0x180233334
 * Callers:
 *     SHFusionLoadLibrary @ 0x1802DF438 (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x18021CF10 (SHFusionInitializeFromModuleID.c)
 */

BOOL __fastcall SHActivateContext(ULONG_PTR *a1)
{
  HANDLE v2; // rcx

  *a1 = 0LL;
  v2 = g_hActCtx;
  if ( g_hActCtx != (HANDLE)-1LL )
    return ActivateActCtx(v2, a1);
  if ( !hModule )
    return 1;
  if ( hModule == g_hActCtx )
    return 0;
  SHFusionInitializeFromModuleID();
  v2 = g_hActCtx;
  return g_hActCtx == (HANDLE)-1LL || ActivateActCtx(v2, a1);
}
