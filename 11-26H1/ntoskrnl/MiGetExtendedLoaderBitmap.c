/*
 * XREFs of MiGetExtendedLoaderBitmap @ 0x1404FE2CC
 * Callers:
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140AA94F0 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140AA95F8 (MiCaptureImageExceptionValues.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExtendedLoaderBitmap(__int64 a1)
{
  return a1 + 304;
}
