/*
 * XREFs of BiReleasePrivilege @ 0x1409D1E1C
 * Callers:
 *     BiAddBootEntry @ 0x14089359C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140893DD8 (BiDeleteBootEntry.c)
 *     BiModifyBootEntry @ 0x14089408C (BiModifyBootEntry.c)
 *     BiSetBootOptions @ 0x1408941E0 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1408950EC (SiGetEspFromFirmware.c)
 *     BiUnloadHiveByName @ 0x1409D0360 (BiUnloadHiveByName.c)
 *     BiEnumerateBootEntries @ 0x1409D0464 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x1409D0564 (BiLoadHive.c)
 *     BiSetBootEntryOrder @ 0x1409D1A04 (BiSetBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409D1A80 (BiQueryBootOptions.c)
 *     BiDeleteEfiVariable @ 0x1409D1B5C (BiDeleteEfiVariable.c)
 *     BiTranslateFilePath @ 0x1409D1C64 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x1409D2430 (BiQueryBootEntryOrder.c)
 * Callees:
 *     ZwSetInformationThread @ 0x140723590 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1409D1E78 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
