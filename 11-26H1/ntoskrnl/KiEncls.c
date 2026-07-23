/*
 * XREFs of KiEncls @ 0x14072CBA0
 * Callers:
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     KeAddEnclavePage @ 0x1403439B0 (KeAddEnclavePage.c)
 *     KeOutPageEnclavePage @ 0x140510E6C (KeOutPageEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405F1068 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405F10B0 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405F1170 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405F1270 (KeCreateEnclaveMetadataPage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405F12AC (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1407BCFEC (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1407BD11C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1407BD1A4 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
