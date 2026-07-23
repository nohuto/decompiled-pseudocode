/*
 * XREFs of MiMakeProtectionMask @ 0x1403667E0
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiConvertContiguousMemoryParameters @ 0x14034C228 (MiConvertContiguousMemoryParameters.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     MiInitializePoolCommitPacket @ 0x140365F04 (MiInitializePoolCommitPacket.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MmMapMdl @ 0x1404DAA40 (MmMapMdl.c)
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     MiSectionProtectGetCharges @ 0x140997FC0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiValidateAllocationType @ 0x1409F0360 (MiValidateAllocationType.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask1 + (a1 & 0xF));
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask2 + ((unsigned __int8)a1 >> 4));
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result == 24 || (a1 & 0x600) != 0 )
      return 0xFFFFFFFFLL;
    result = (unsigned int)result | 0x10;
  }
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
