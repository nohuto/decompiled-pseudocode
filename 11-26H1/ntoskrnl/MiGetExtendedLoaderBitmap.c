/*
 * XREFs of MiGetExtendedLoaderBitmap @ 0x1404F780C
 * Callers:
 *     MiConstructLoaderEntry @ 0x140AA535C (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x140AA58F8 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140AA5A00 (MiCaptureImageExceptionValues.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetExtendedLoaderBitmap(__int64 a1)
{
  return a1 + 304;
}
