/*
 * XREFs of AstIsRecording @ 0x14091C530
 * Callers:
 *     AstLogDeviceCreated @ 0x14091C31C (AstLogDeviceCreated.c)
 *     AstLogDeviceSDDLUpdated @ 0x140AA717C (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return dword_140E06E00 && AstIsActive;
}
