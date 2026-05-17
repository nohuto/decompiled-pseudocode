/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B4C00
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B42A0 (RtlGetExtendedContextLength3.c)
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B4540 (RtlInitializeExtendedContext2.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1800B4750 (RtlWow64GetCpuAreaInfo.c)
 *     RtlSetExtendedFeaturesMask @ 0x180146400 (RtlSetExtendedFeaturesMask.c)
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
