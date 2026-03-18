/*
 * XREFs of IopPortInitialize @ 0x1407A6DB4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407889FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, __int64 a2)
{
  qword_140F83CB8 = (__int64)IopPortFindSuitableRange;
  qword_140F83CC0 = (__int64)IopPortAddAllocation;
  qword_140F83CC8 = (__int64)IopPortBacktrackAllocation;
  qword_140F83C38 = (__int64)IopGenericUnpackRequirement;
  qword_140F83C40 = (__int64)IopGenericPackResource;
  qword_140F83C48 = (__int64)IopGenericUnpackResource;
  qword_140F83C50 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootPortArbiter, a2, 1, (__int64)L"RootPort");
}
