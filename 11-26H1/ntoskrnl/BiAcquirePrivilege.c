/*
 * XREFs of BiAcquirePrivilege @ 0x1409A2D48
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
 *     RtlImpersonateSelfEx @ 0x1409A3280 (RtlImpersonateSelfEx.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // bl
  int v5; // esi
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(ThreadInformation) = 0;
  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v5 = BiAdjustPrivilege(a1, a2, &ThreadInformation);
  if ( v5 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = ThreadInformation;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v5;
}
