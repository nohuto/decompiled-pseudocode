/*
 * XREFs of HalpUnmapVirtualAddress @ 0x140509DE0
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 *     HalpMcStagePayload @ 0x1405938EC (HalpMcStagePayload.c)
 *     HalpHpetDiscover @ 0x140598928 (HalpHpetDiscover.c)
 *     HalUnmapIoSpace @ 0x14059A210 (HalUnmapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14059A588 (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x1405A4FCC (WdHwDestroyHardwareRegister.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BECDA8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140C09D9C (HalpCheckLowMemoryPostSleep.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140CB2FF8 (HalpBlkInitializeVirtualAddressSpace.c)
 *     HalpMiscInitializeAmdSfs @ 0x140CB4660 (HalpMiscInitializeAmdSfs.c)
 *     HalpAcpiTableCacheInit @ 0x140D0A55C (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x140522658 (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, __int64 a2, char a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !a3 )
      result = (char *)HalpFlushTLB(v8, a2);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
