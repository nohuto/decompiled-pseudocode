/*
 * XREFs of SHActivateContext @ 0x180224DEC
 * Callers:
 *     SHFusionLoadLibrary @ 0x1802D8144 (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x18020F040 (SHFusionInitializeFromModuleID.c)
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
