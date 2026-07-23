/*
 * XREFs of BiReleasePrivilege @ 0x1409A2DFC
 * Callers:
 *     BiAddBootEntry @ 0x14089999C (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14089A1D8 (BiDeleteBootEntry.c)
 *     BiModifyBootEntry @ 0x14089A48C (BiModifyBootEntry.c)
 *     BiSetBootOptions @ 0x14089A5E0 (BiSetBootOptions.c)
 *     SiGetEspFromFirmware @ 0x14089B4EC (SiGetEspFromFirmware.c)
 *     BiUnloadHiveByName @ 0x1409A1340 (BiUnloadHiveByName.c)
 *     BiEnumerateBootEntries @ 0x1409A1444 (BiEnumerateBootEntries.c)
 *     BiLoadHive @ 0x1409A1544 (BiLoadHive.c)
 *     BiSetBootEntryOrder @ 0x1409A29E4 (BiSetBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409A2A60 (BiQueryBootOptions.c)
 *     BiDeleteEfiVariable @ 0x1409A2B3C (BiDeleteEfiVariable.c)
 *     BiTranslateFilePath @ 0x1409A2C44 (BiTranslateFilePath.c)
 *     BiQueryBootEntryOrder @ 0x1409A3410 (BiQueryBootEntryOrder.c)
 * Callees:
 *     ZwSetInformationThread @ 0x140728160 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x1409A2E58 (BiAdjustPrivilege.c)
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
