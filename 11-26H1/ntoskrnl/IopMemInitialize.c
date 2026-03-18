/*
 * XREFs of IopMemInitialize @ 0x1407A6918
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbAddInaccessibleAllocationRange @ 0x140787A8C (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140787CA4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeArbiterInstance @ 0x1407889FC (ArbInitializeArbiterInstance.c)
 *     RtlAddRange @ 0x140B10960 (RtlAddRange.c)
 */

int __fastcall IopMemInitialize(__int64 a1, __int64 a2)
{
  int result; // eax

  qword_140F83D98 = (__int64)IopGenericUnpackRequirement;
  qword_140F83DA0 = (__int64)IopGenericPackResource;
  qword_140F83DA8 = (__int64)IopGenericUnpackResource;
  qword_140F83DB0 = (__int64)IopGenericScoreRequirement;
  qword_140F83E18 = (__int64)IopMemFindSuitableRange;
  qword_140F83DE8 = (__int64)IopMemQueryConflict;
  result = ArbInitializeArbiterInstance((__int64)&IopRootMemArbiter, a2, 3, (__int64)L"RootMemory");
  if ( result >= 0 )
  {
    result = RtlAddRange(qword_140F83D48, 0, 4095, 0, 0, 0LL, 0LL);
    if ( result >= 0 )
    {
      result = ArbAddInaccessibleAllocationRange((__int64)&IopRootMemArbiter, qword_140F83D48);
      if ( result >= 0 )
        return ArbAddMmConfigRangeAsBootReserved((__int64)&IopRootMemArbiter, qword_140F83D48);
    }
  }
  return result;
}
