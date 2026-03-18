/*
 * XREFs of BgLibraryInitialize @ 0x140C4FAD4
 * Callers:
 *     PopRestoreHiberContext @ 0x140C03138 (PopRestoreHiberContext.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     BgkInitialize @ 0x140D13854 (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
