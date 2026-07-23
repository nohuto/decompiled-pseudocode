/*
 * XREFs of HalpRestoreNvsArea @ 0x14052B520
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     RtlCopyDeviceMemory @ 0x14055BC1C (RtlCopyDeviceMemory.c)
 */

__int64 HalpRestoreNvsArea()
{
  int v0; // edi
  unsigned int i; // esi
  __int64 v2; // rbx
  __int64 result; // rax

  v0 = 0;
  if ( !HalpDisableNvsSaveRestore )
  {
    for ( i = 0; i < HalpNvsRegionCount; v0 += *(_DWORD *)(HalpNvsRegionData + 8 * v2 + 8) )
    {
      v2 = 3LL * i;
      RtlCopyDeviceMemory(*(void **)(HalpNvsRegionData + 24LL * i + 16));
      result = HalpNvsRegionData;
      ++i;
    }
  }
  return result;
}
