/*
 * XREFs of BgkDestroy @ 0x140C4F454
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140D13854 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1404635C0 (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140C4F930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C4F96C (BgDisplayProgressIndicator.c)
 *     BgLibraryDestroy @ 0x140C4FA68 (BgLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140C4FC94 (BgConsoleDestroyInterface.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140E65D3C )
    return 0LL;
  BgkpDisableConsole();
  byte_140E65D44 = 0;
  byte_140E65D3C = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140E65D3D = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140E65D09 = 0;
  byte_140E65D08 = 0;
  if ( qword_140E65D18 )
  {
    BgConsoleDestroyInterface();
    qword_140E65D18 = 0LL;
  }
  return BgLibraryDestroy();
}
