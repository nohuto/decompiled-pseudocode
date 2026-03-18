/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140C58FB8
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
