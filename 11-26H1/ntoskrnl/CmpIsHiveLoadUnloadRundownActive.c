/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140C5EFB8
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
