/*
 * XREFs of IopIrqInitialize @ 0x1407A7008
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1407889FC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, __int64 a2)
{
  qword_140F83978 = (__int64)IopIrqUnpackRequirement;
  qword_140F83980 = (__int64)IopIrqPackResource;
  qword_140F83988 = (__int64)IopIrqUnpackResource;
  qword_140F83990 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((__int64)&IopRootIrqArbiter, a2, 2, (__int64)L"RootIRQ");
}
