/*
 * XREFs of BiAcquirePrivilege @ 0x1409D1D68
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
 *     RtlImpersonateSelfEx @ 0x1409D22A0 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // bl
  int v5; // esi
  __int64 result; // rax
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
    result = RtlImpersonateSelfEx(2LL, 0LL, 0LL);
    if ( (int)result < 0 )
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
  return (unsigned int)v5;
}
