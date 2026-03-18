/*
 * XREFs of BgDisplayProgressIndicator @ 0x140C4F96C
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x140C4F454 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     AnFwDisplayProgressIndicator @ 0x140C51380 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
