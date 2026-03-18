/*
 * XREFs of KiEncls @ 0x140727FD0
 * Callers:
 *     KeRemoveEnclavePage @ 0x140341200 (KeRemoveEnclavePage.c)
 *     KeAddEnclavePage @ 0x140341930 (KeAddEnclavePage.c)
 *     KeOutPageEnclavePage @ 0x1405173FC (KeOutPageEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405EE6F8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405EE740 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405EE800 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405EE900 (KeCreateEnclaveMetadataPage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405EE93C (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1407B9F8C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1407BA0BC (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1407BA144 (KeInitializeEnclave.c)
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
