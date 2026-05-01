/*
 * XREFs of SHDeactivateContext @ 0x1802DF410
 * Callers:
 *     SHFusionLoadLibrary @ 0x1802DF438 (SHFusionLoadLibrary.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall SHDeactivateContext(ULONG_PTR ulCookie)
{
  BOOL result; // eax

  if ( ulCookie )
    return DeactivateActCtx(0, ulCookie);
  return result;
}
