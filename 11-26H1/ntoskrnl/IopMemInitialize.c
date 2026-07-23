/*
 * XREFs of IopMemInitialize @ 0x1407A94C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x14078A5BC (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14078A7D4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x14078B52C (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax

  qword_140F840F8 = (__int64)IopGenericUnpackRequirement;
  qword_140F84100 = (__int64)IopGenericPackResource;
  qword_140F84108 = (__int64)IopGenericUnpackResource;
  qword_140F84110 = (__int64)IopGenericScoreRequirement;
  qword_140F84178 = (__int64)IopMemFindSuitableRange;
  qword_140F84148 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((__int64)&IopRootMemArbiter, a2, 3, (__int64)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140F840A8, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140F840A8);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140F840A8);
    }
  }
  return result;
}
