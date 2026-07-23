/*
 * XREFs of HalpPreserveNvsArea @ 0x1404F34A8
 * Callers:
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 * Callees:
 *     RtlCopyDeviceMemory @ 0x14055BC1C (RtlCopyDeviceMemory.c)
 */

__int64 HalpPreserveNvsArea()
{
  unsigned int v0; // edi
  unsigned int i; // esi
  __int64 v2; // rbx
  __int64 result; // rax

  v0 = 0;
  if ( !HalpDisableNvsSaveRestore )
  {
    for ( i = 0; i < HalpNvsRegionCount; v0 += *(_DWORD *)(HalpNvsRegionData + 8 * v2 + 8) )
    {
      v2 = 3LL * i;
      RtlCopyDeviceMemory((void *)(HalpNvsPreservedData + v0));
      result = HalpNvsRegionData;
      ++i;
    }
  }
  return result;
}
