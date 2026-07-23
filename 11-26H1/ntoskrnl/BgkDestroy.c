/*
 * XREFs of BgkDestroy @ 0x140C55454
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140D19A1C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14045C580 (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140C55930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C5596C (BgDisplayProgressIndicator.c)
 *     BgLibraryDestroy @ 0x140C55A68 (BgLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140C55C94 (BgConsoleDestroyInterface.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140E65F51 )
    return 0LL;
  BgkpDisableConsole();
  byte_140E65F52 = 0;
  byte_140E65F51 = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140E65F50 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140E65F18 = 0;
  byte_140E65F40 = 0;
  if ( qword_140E65F08 )
  {
    BgConsoleDestroyInterface();
    qword_140E65F08 = 0LL;
  }
  return BgLibraryDestroy();
}
