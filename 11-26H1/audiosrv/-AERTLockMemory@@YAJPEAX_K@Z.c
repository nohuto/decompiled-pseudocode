/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180162244
 * Callers:
 *     ?GetMemory@?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015EDC0 (-GetMemory@-$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015EF50 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V0@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015F130 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V1@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z @ 0x18015F310 (-GetMemory@-$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z @ 0x18015FA70 (-GetMemory@CCrossProcessKSMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1801622F0 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result < 0 )
    return result;
  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
