/*
 * XREFs of AstIsRecording @ 0x1409FF730
 * Callers:
 *     AstLogDeviceCreated @ 0x1409FF51C (AstLogDeviceCreated.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AAE198 (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return dword_140E06E00 && AstIsActive;
}
