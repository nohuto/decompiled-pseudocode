/*
 * XREFs of HalpDmaInitDiscard @ 0x140CB6094
 * Callers:
 *     HalpDmaInitSystem @ 0x140BF1A70 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitMemory @ 0x140CB69C0 (HalpDmaInitMemory.c)
 */

__int64 __fastcall HalpDmaInitDiscard(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140E006A0 = (__int64)HaliGetDmaAdapter;
  off_140E00B68[0] = (__int64 (__fastcall *)())HalpDmaLinkDeviceObjectByToken;
  off_140E00B70 = (__int64 (__fastcall *)())HalpDmaCheckAdapterToken;
  off_140E00850[0] = (__int64 (__fastcall *)())HalpAllocateMapRegisters;
  off_140E00AB8[0] = (__int64 (__fastcall *)())HalpDmaFreeCrashDumpRegisters;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 6);
    if ( (_DWORD)v2 != 30 )
    {
      if ( (unsigned int)v2 > 0x25 || (v3 = 0x2B80400048LL, !_bittest64(&v3, v2)) )
      {
        if ( ((i[4] + i[5]) << 12) - 1 > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
          HalpMaximumPhysicalMemoryAddress = ((i[4] + i[5]) << 12) - 1;
      }
    }
  }
  HalpDmaInitMemory();
  return 0LL;
}
