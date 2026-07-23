/*
 * XREFs of BgLibraryInitialize @ 0x140C55AD4
 * Callers:
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     BgkInitialize @ 0x140D19A1C (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
