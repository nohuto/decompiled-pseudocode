/*
 * XREFs of IopPortInitialize @ 0x1407A9964
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x14078B52C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  qword_140F84018 = (__int64)IopPortFindSuitableRange;
  qword_140F84020 = (__int64)IopPortAddAllocation;
  qword_140F84028 = (__int64)IopPortBacktrackAllocation;
  qword_140F83F98 = (__int64)IopGenericUnpackRequirement;
  qword_140F83FA0 = (__int64)IopGenericPackResource;
  qword_140F83FA8 = (__int64)IopGenericUnpackResource;
  qword_140F83FB0 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootPortArbiter, a2, 1, (__int64)L"RootPort");
}
