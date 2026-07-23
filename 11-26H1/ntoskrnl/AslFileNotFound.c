/*
 * XREFs of AslFileNotFound @ 0x14077E56C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
