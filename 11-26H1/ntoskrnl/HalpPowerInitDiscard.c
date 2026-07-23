/*
 * XREFs of HalpPowerInitDiscard @ 0x140CB4440
 * Callers:
 *     HalpPowerInitSystem @ 0x140BF0950 (HalpPowerInitSystem.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     HalpPowerInitNvsRegionData @ 0x140CB939C (HalpPowerInitNvsRegionData.c)
 */

__int64 __fastcall HalpPowerInitDiscard(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  ULONG v6; // edx
  unsigned __int64 v7; // r8

  HalpLowMemoryMap.SizeOfBitMap = 256;
  off_140E00808[0] = (__int64 (__fastcall *)())HaliLocateHiberRanges;
  HalpLowMemoryMapStack.SizeOfBitMap = 256;
  off_140E00838 = HaliHaltSystem;
  off_140E00A98[0] = (__int64 (__fastcall *)())HalpPowerEarlyRestore;
  off_140E00B08[0] = (__int64 (__fastcall *)())HalpPowerSetRebootHandler;
  HalpLowMemoryMap.Buffer = (unsigned int *)&HalpLowMemoryMapBuffer;
  HalpLowMemoryMapStack.Buffer = (unsigned int *)&HalpLowMemoryMapStackBuffer;
  RtlSetAllBits(&HalpLowMemoryMap);
  v2 = (__int64 **)(a1 + 32);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v4 = *((int *)i + 6);
    if ( (_DWORD)v4 != 30 )
    {
      if ( (unsigned int)v4 > 0x23 || (v5 = 0xB80400048LL, !_bittest64(&v5, v4)) )
      {
        if ( (unsigned __int64)i[4] < 0x100 )
        {
          v6 = *((_DWORD *)i + 8);
          v7 = 256 - v6;
          if ( v7 > i[5] )
            LODWORD(v7) = *((_DWORD *)i + 10);
          RtlClearBits(&HalpLowMemoryMap, v6, v7);
        }
      }
    }
  }
  HalpPowerInitNvsRegionData();
  return 0LL;
}
