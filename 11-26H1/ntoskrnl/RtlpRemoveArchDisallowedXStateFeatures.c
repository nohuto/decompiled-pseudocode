/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x140466740
 * Callers:
 *     RtlGetEnabledExtendedFeatures @ 0x14061C420 (RtlGetEnabledExtendedFeatures.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140A71E20 (RtlWow64GetCpuAreaInfo.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveArchDisallowedXStateFeatures(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (a1 & 0x10000) != 0 )
  {
    result = 0x40000000000001FFLL;
    *a2 &= 0x40000000000001FFuLL;
  }
  else if ( (a1 & 0x100000) != 0 )
  {
    result = 0x4000000000060DFFLL;
    *a2 &= 0x4000000000060DFFuLL;
  }
  else if ( (a1 & 0x400000) != 0 )
  {
    *a2 &= 0x3CuLL;
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
