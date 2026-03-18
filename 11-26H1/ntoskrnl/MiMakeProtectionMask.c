/*
 * XREFs of MiMakeProtectionMask @ 0x140364A40
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiConvertContiguousMemoryParameters @ 0x14034A1A8 (MiConvertContiguousMemoryParameters.c)
 *     MmMapIoSpaceEx @ 0x140363DC0 (MmMapIoSpaceEx.c)
 *     MiInitializePoolCommitPacket @ 0x140364164 (MiInitializePoolCommitPacket.c)
 *     RtlpHpEnvAllocVA @ 0x140364570 (RtlpHpEnvAllocVA.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MmMapMdl @ 0x1404E1360 (MmMapMdl.c)
 *     MmSetPageProtection @ 0x1405096F0 (MmSetPageProtection.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x1409BA6F4 (MiInitializeCreateSectionPacket.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     MiSectionProtectGetCharges @ 0x1409C6FE0 (MiSectionProtectGetCharges.c)
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiValidateAllocationType @ 0x1409F3B90 (MiValidateAllocationType.c)
 *     MiCommitFileBackedSection @ 0x140A58878 (MiCommitFileBackedSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
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
